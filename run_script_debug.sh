#!/bin/bash

antlr4 -v 4.13.2 -Dlanguage=Cpp -visitor -no-listener CSubset.g4

# -g: debug symbols, -O0: no optimization (so line numbers/vars are accurate),
# -fsanitize=address: catches out-of-bounds/use-after-free/null-deref with a readable report
g++ -std=c++17 -w -g -O0 -fsanitize=address \
    -I/usr/local/include/antlr4-runtime *.cpp \
    -L/usr/local/lib/ -lantlr4-runtime -pthread -o compiler.out

# Let core dumps happen with no size limit, in case you want to inspect with gdb after
ulimit -c unlimited

LD_LIBRARY_PATH=/usr/local/lib ./compiler.out "$1"
exit_code=$?

if [ $exit_code -ne 0 ]; then
    echo ">>> compiler.out exited with code $exit_code"
fi