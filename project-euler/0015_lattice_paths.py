import math

def count(n):
    return math.factorial(2*n)//math.factorial(n)**2

print(count(20))