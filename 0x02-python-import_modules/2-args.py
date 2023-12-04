#!/usr/bin/python3
from sys import argv

num_args = len(argv) - 1

print(f"{num_args} {'argument' if num_args == 1 else 'arguments'}:"
      f"{'' if num_args == 0 else ':'}")

for i in range(1, num_args + 1):
    print(f"{i}: {argv[i]}")
