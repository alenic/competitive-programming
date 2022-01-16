from subprocess import run, PIPE
import sys
import time

# usage: python3 run.py sorting_and_searching/distinct_numbers test_input.txt

program = sys.argv[1]
input = sys.argv[2]

with open(input, "r") as fp:
  input_str = fp.read()

t = time.time()
p = run([program], stdout=PIPE, input=input_str, encoding='ascii')
elapsed = time.time()-t
print(p.returncode)
print(p.stdout)

print(f"Time: {elapsed:.6f}")