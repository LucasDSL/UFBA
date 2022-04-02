# Lista 2 
# -*- coding: utf-8 -*-

# euclides' algorithm
def mdc(a, b):
    if(b > a): 
        a, b = b, a
    while b != 0: 
        a, b = b, a % b
    return a

tests = int(input())
for i in range(tests):
    arrayNums = input().split(' ')
    for i in range(len(arrayNums)): 
        arrayNums[i] = int(arrayNums[i])
    print(mdc(arrayNums[0], arrayNums[1]))
