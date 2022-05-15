import math

digit = list(str(math.factorial(100)))

print(sum(int(x) for x in digit))