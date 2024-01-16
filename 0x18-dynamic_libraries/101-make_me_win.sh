#!/bin/bash

echo -e '#include <stdlib.h>\n#include <stdio.h>\nvoid srand(unsigned int seed) { }' > /tmp/srand_override.c
gcc -Wall -shared -fPIC -o /tmp/srand_override.so /tmp/srand_override.c
export LD_PRELOAD=/tmp/srand_override.so

