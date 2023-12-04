#!/usr/bin/python3
# File: main_script.py

with open('add_0.py', 'r') as file:
    content = file.read()
    exec(content)

add = locals()['add']

a = 1
b = 2

result = add(a, b)
print(f"{a} + {b} = {result}")
