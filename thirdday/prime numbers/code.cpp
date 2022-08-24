# wrong code
bool is_prime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

# true code
bool is_prime(int n)
{
    if(n==1 OR n==0):
        return true;
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
