#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    # Handle tuples smaller than 2 by adding 0 for missing integers
    if len(tuple_a) < 2:
        tuple_a += (0, )
    if len(tuple_b) < 2:
        tuple_b += (0, )

    # Use only the first 2 integers if tuples are bigger than 2
    tuple_a = tuple_a[:2]
    tuple_b = tuple_b[:2]

    # Perform the addition of corresponding elements
    result = (tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1])

    return result
