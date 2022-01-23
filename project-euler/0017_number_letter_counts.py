import inflect
p = inflect.engine()
s = 0

for i in range(1, 1001):
    s += len("".join(a for a in p.number_to_words(i) if a.isalpha()))
print(s)