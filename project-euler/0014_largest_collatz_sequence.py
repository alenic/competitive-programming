def collatz_seq(n):
    seq = 1
    while n != 1:
        if n % 2 == 0:
            n = n//2
        else:
            n = 3*n+1
        
        seq += 1
    return seq

max_seq = 0
for n in range(1,1000000):
    seq = collatz_seq(n)
    if seq > max_seq:
        max_seq = seq
        max_n = n
        print("max_n", n)

print(max_n)