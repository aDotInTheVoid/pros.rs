#!/usr/bin/env sh
arm-none-eabi-gcc -E floats.h | grep -v \# | tail
echo ""
arm-none-eabi-gcc -E ints.h | grep -v \# | grep typedef | grep -v struct | sort
arm-none-eabi-gcc -E ints.h | grep -v \# | tail -n 6
