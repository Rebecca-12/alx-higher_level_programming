#!/usr/bin/python3

import sys

args = sys.argv[1:]
num_args = len(args)

if num_args == 0:
    print("0 arguments.")
else:
    print(f"{num_args} {'argument' if num_args == 1 else 'arguments'}{'.' if num_args == 0 else ':'}")
    for i in range(num_args):
        print(f"{i+1}: {args[i]}")
