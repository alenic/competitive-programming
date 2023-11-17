
def get_score(s):
    score = sum(map(lambda x: ord(x)-64, s))
    return score

with open("project-euler/data/0022_names.txt", "r") as fp:
    names = fp.read()

print(set(names))

names = names.replace('"',"")
names = names.split(',')

names = sorted(names)

all_score = 0
for i, n in enumerate(names):
    score = get_score(n)*(i+1)
    all_score += score

print(all_score)