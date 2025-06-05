#include <iostream>

int main()
{
    int lenght, inputNumber, min, med, max, numberCuts;
    numberCuts = 0;
    std::cin >> lenght;
    std::cin >> inputNumber;
    min = inputNumber;
    std::cin >> inputNumber;
    if(inputNumber < min)
    {
        med = min;
        min = inputNumber;
    }
    else
        med = inputNumber;
    std::cin >> inputNumber;
    if(inputNumber < min)
    {
        max = med;
        med = min;
        min = inputNumber;
    }
    else if(inputNumber < med)
    {
        max = med;
        med = inputNumber;
    }
    else
        med = inputNumber;
    
    if(max >= lenght)
        max = -1;
    if(med >= lenght)
        med = -1;
    if(

        
    )
    std::cout << numberCuts << std::endl;
    return 0;
}