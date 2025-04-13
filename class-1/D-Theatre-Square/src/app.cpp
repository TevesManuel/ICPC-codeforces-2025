#include<iostream>
#include<cmath>

int main()
{
    unsigned long long m, n, a;
    std::cin >> m;
    std::cin >> n;
    std::cin >> a;
    if(a>n)
        n=a;
    else if((n % a) != 0)
        n = n + a - (n % a);
    if(a>m)
        m=a;
    else if((m % a) != 0)
        m = m + a - (m % a);
    std::cout << (n*m)/(a*a) << std::endl;
    return 0;
}