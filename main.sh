#!/bin/bash

grep "model name" /proc/cpuinfo|head -n1
gcc --version|head -n1

echo ""
echo "C"
echo ""
gcc test.c -O3 -Wall
time ./a.out

echo ""
echo "C++"
echo ""
g++ test.cpp -O3 -Wall
time ./a.out

