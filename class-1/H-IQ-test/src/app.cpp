#include <iostream>

int main()
{
    int n, input, evenNumbers, oddNumbers, lastEven, lastOdd;
    std::cin >> n;
    evenNumbers = 0;
    oddNumbers = 0;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> input;
        if ( input % 2 == 0)
        {
            evenNumbers++;
            lastEven = i;
        }
        else
        {
            oddNumbers++;
            lastOdd = i;
        }
    }
    if(evenNumbers >= 2)
    {
        std::cout << lastOdd << std::endl;
    }
    if(oddNumbers >= 2)
    {
        std::cout << lastEven << std::endl;
    }
    return 0;
}