
from itertools import product

def get_tuple(length, total):
    return filter(lambda x:sum(x)==total, product(range(1,total+1),repeat=length))

tuples = get_tuple(3, 1000)

for t in tuples:
    if t[0]**2+t[1]**2 == t[2]**2:
        print(t[0]*t[1]*t[2])
        break
