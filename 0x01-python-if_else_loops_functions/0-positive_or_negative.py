#!/usr/bin/python3
import random

# Assign a random signed number
number = random.randint(-1000, 1000)

# Print the last digit and its characteristics
last_digit = abs(number) % 10
print(f"The last digit of {number} is {last_digit}.")

# Check if it's even or odd
if last_digit % 2 == 0:
    print("It's even.")
else:
    print("It's odd.")

