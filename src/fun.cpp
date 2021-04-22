long long power(long long x, unsigned short n)

  {
    if (n==0)
        return 1;
    else if (n==1)
        return x;
    else if (n % 2 == 0 )
        return pow( x * x, n/2);
    else
        return pow( x * x, n /2)*x;
 }
