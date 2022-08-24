# Wrong code
def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

# correct code
def is_prime(n):
    if(n==0 OR n==1):
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
