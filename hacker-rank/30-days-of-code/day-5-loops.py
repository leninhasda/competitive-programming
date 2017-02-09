#!/bin/python3

import sys


n = int(input().strip())

for i in range(1,11):
    print("{} x {} = {}".format(n,i,i*n))