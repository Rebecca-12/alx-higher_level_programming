#!/usr/bin/python3
def uppercase(string):
    for char in string:
        ascii_val = ord(char)
        if 97 <= ascii_val <= 122:
            ascii_val -= 32
        print("{:c}".format(ascii_val), end="")
    print()
