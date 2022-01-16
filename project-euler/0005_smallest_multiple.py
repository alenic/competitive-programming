n = 2*3*2*5*7*2*3*11*13*17*19*2
print(n)
while True:
    div = True
    for i in [2,3,4,5,7,9,11,13,16,17,19]:
        if n % i != 0:
            div = False
            break
    if div:
        print(n)
        break
    n += 1
