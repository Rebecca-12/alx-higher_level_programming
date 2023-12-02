#!/usr/bin/python3

for i in range(ord('z'), ord('a') - 1, -1):
    print("{:c}".format(i), end='')
    i -= 1
    if i >= ord('A'):
        print("{:c}".format(i), end='')

print()
