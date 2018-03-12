#!/bin/bash

rm 100x100_a/a.out
rm 100x100_d/a.out

gcc 100x100_a/skeleton.c -o 100x100_a/a.out
gcc 100x100_d/skeleton.c -o 100x100_d/a.out

100x100_a/a.out > test_a.txt
100x100_d/a.out > test_d.txt
