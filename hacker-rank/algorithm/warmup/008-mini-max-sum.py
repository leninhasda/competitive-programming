#!/bin/python

import sys


nums = input().strip().split(' ')
suM=0
maX=-1
miN=1000000000
for i in nums:
    i = int(i)
    suM += i
    if( i < miN ):
        miN = i
    if(i > maX):
        maX = i
        
print('{} {}'.format( (suM-maX), (suM-miN) ) )

