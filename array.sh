#!/bin/sh

INPUTS=("first input" "second input" "third input")

echo "Executing ./c-echo third input"
./c-echo ${INPUTS[2]}
echo "Executing ./c-echo second input"
./c-echo ${INPUTS{1]}
echo "Executing ./c-echo first input"
./c-echo ${INPUTS[0]}
