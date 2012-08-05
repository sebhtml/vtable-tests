#!/bin/bash

grep "model name" /proc/cpuinfo|head -n1

echo ""
echo "C"
gcc test.c -O3 -Wall
time ./a.out

echo ""
echo "C++"
g++ test.cpp -O3 -Wall
time ./a.out

