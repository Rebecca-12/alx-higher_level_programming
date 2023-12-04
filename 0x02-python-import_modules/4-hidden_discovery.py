#!/usr/bin/python3

import dis
import types

def print_hidden_names(module):
    for name in dir(module):
        if not name.startswith('__'):
            print(name)

# Load the compiled module
with open('hidden_4.pyc', 'rb') as file:
    code = file.read()
module = types.ModuleType('hidden_4')
exec(code, module.__dict__)

# Print the hidden names
print_hidden_names(module)
