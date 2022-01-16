
from euler_utils import *

factors = []
p = 2
last_p = 2
n = 600851475143

while 600851475143 >= p*p:
    if n % p == 0:
        while n % p == 0:
            n /= p
            if is_prime(p):
                last_p = p
    else:
        p += 1

nf = 1
for f in factors:
    nf *= f

print(last_p)