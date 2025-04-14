#include <iostream>

int main()
{
    int n, k, inputNumber, output, kNumber = 0;
    std::cin >> n;
    std::cin >> k;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> inputNumber;
        if(inputNumber > 0)
        {
            if( i < k )
                output++;
            else if(i == k)
            {
                kNumber = inputNumber;
                output++;
            }
            else if( ( i > k ) && (inputNumber >= kNumber))
                output++;
            else
                break;
        }
    }
    std::cout << output << std::endl;
    return 0;
}