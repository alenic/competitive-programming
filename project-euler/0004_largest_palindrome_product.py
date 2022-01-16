max_n = 0
for a in range(100, 1000):
    for b in range(100, 1000):
        n = a*b
        if str(n) == str(n)[::-1]:
            if n > max_n:
                max_n = n

print(max_n)