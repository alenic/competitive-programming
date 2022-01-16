from euler_utils import *
count = 1 # because of 2
n = 1
while True:
    n += 2
    if is_prime(n):
        count += 1
    
    if count == 10001:
        print(n)
        break