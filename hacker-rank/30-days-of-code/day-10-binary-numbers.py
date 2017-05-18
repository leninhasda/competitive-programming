#!/bin/python3

import sys

def int2bin(n):
    arr = []
    while(n > 1):
        rem = n % 2
        n = int(n / 2)
        arr.append(rem)

    if( n > 0 ):
        arr.append(n)

    return arr


def calc1(nb):
    n=0
    hn=0
    for i in nb:
        if i == 1:
            n+=1
        elif i == 0:
            if n > hn:
                hn = n
            n = 0
    if n > hn:
        hn = n
    return hn

n = int(input().strip())

nb = int2bin(n)
nn = calc1(nb)
print(nn)
