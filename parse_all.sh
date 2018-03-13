#!/bin/bash

for i in ./*/ ; do
    cd $(basename "$i")
    ../parse_Stats simoutorder_output.txt > parsed_output.txt
    rm foo
    cd ..
done
