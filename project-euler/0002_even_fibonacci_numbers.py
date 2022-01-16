x1 = 0
x2 = 1
s = 0
while True:
    fib = x1 + x2
    x1 = x2
    x2 = fib
    if fib % 2 == 0:
        s += fib
    if fib >= 4e6: break

print(s)