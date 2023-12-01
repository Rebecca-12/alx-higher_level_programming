def get_last_digit(n):
    return abs(n) % 10

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def prime_factors(n):
    factors = []
    while n > 1:
        p = get_last_digit(n)
        if is_prime(p):
            factors.append(p)
            n //= p
        else:
            break
    return factors

print(prime_factors(12)) # Output: [2, 2, 3]
print(prime_factors(15)) # Output: [3, 5]
print(prime_factors(24)) # Output: [2, 2, 2, 3]
