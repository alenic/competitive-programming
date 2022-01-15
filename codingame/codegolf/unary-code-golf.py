a=s=""
for C in input():
 for c in f'{ord(C):07b}':s+=["0"," 0"+"0 0"[int(c):]][c!=a];a=[a,c][c!=a]
print(s[1:])