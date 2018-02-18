#!/bin/python3

import sys

def hasSuffix(email):
    id, dmn = email.split('@')
    sufix = "@"+dmn
    if sufix == "@gmail.com":
        return True
    return False

filterred = []
N = int(input().strip())
for a0 in range(N):
    firstName,emailID = input().strip().split(' ')
    firstName,emailID = [str(firstName),str(emailID)]
    if hasSuffix(emailID):
        filterred.append(firstName)

filterred.sort()
for nm in filterred:
    print(nm)
