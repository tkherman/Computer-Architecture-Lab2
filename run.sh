#!/bin/bash
cd $1
arm-gcc skeleton.c -o foo -static
sim-outorder -config ../sa1core.cfg foo
cd ..
