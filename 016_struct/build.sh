#!/bin/sh

rustc -o rs_exe main.rs
gcc -o c_exe main.c
g++ -o cpp_exe --std=c++11 main.cpp

echo "Rust"
./rs_exe

echo "\nC"
./c_exe

echo "\nC++"
./cpp_exe

echo "\nPython"
python3 main.py

