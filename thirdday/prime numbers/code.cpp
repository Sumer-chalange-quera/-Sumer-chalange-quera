# wrong code
bool is_prime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

# correct code
bool is_prime(int n)
{
    if(n==1 || n==0)
        return false;
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
