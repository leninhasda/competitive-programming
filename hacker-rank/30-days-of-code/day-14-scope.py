#!/bin/python

class Difference:
    def __init__(self, a):
        self.__elements = a

    def computeDifference(self):
        h, l = -1, 111
        for i in self.__elements:
            if i > h:
                h = i
            if i < l:
                l = i
        self.maximumDifference = h - l 
