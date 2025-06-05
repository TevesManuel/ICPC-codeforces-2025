#include<bits/stdc++.h>

int main()
{
    std::map<int, int> customersPerHour;
    int n = 0;
    int a = 0;
    int b = 0;
    int maximumCustomers = 0;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a;
        std::cin >> b;
        for(int i = a; i <= b; i++)
        {
            customersPerHour[i]++;
        }
    }
    for (std::pair<int, int> customers : customersPerHour)
        if ( customers.second > maximumCustomers )
            maximumCustomers = customers.second;

    std::cout << maximumCustomers << "\n";

    return 0;
}