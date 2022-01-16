


def is_prime(n):
    p = 2
    while n >= p*p:
        if n % p == 0:
            return False
        else:
            p += 1
    
    return True