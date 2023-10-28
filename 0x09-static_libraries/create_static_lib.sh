#!/bin/bash

# Compile each .c file in the current directory to an object file
for file in *.c
do
  gcc -c "$file" -o "${file%.c}.o"
done

# Create a static library (liball.a) from all the object files
ar rcs liball.a *.o

# Clean up: remove the individual object files
rm -f *.o

