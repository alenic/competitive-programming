from euler_utils import *

sum_primes = 2
n = 1
while n <= 2e6:
    n += 2
    if is_prime(n):
        sum_primes += n

print(sum_primes)