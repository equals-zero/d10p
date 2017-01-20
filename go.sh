#!/bin/bash
g++ main.cpp -std=gnu++11 -o d10p
chmod +x d10p
./d10p "$1"
rm d10p