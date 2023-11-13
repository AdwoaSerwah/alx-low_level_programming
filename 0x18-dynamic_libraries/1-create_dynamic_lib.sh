#!/bin/bash

files=$(find . -name "*.c" | grep -v "main.c" | tr '\n' ' ')
gcc -Wall -fPIC -c $files
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
