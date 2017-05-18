#!/bin/python3

import sys


n = int(input().strip())
str = input().strip()
arr = [int(arr_temp) for arr_temp in str.split(' ')[::-1]]
for num in arr:
    print(num, end=' ')

