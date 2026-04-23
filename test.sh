#!/bin/bash
output=$(echo "0 0" | ./main.exe)

if [ "$output" != "0" ]; then
    #echo "Error: expected 0, got $output"
    echo "failed"
    exit 1
fi


output=$(echo "2 6" | ./main.exe)
if [ "$output" != "4" ]; then
    #echo "Error: expected 0, got $output"
    echo "failed"
    exit 1
fi


output=$(echo "8 3" | ./main.exe)
if [ "$output" != "Impossible" ]; then
    #echo "Error: expected 0, got $output"
    echo "failed"
    exit 1
fi

output=$(echo "3 3" | ./main.exe)
if [ "$output" != "Impossible" ]; then
    #echo "Error: expected 0, got $output"
    echo "failed"
    exit 1
fi


echo "Everything ok"