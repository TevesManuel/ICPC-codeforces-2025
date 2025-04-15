#include <bits/stdc++.h>

int main()
{
    std::set<int> set;

    int n, input;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> input;
        set.insert(input);
    }
    
    std::cout << set.size() << "\n";

    return 0;
}