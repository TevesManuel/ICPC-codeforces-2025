#include <iostream>
#include <string>

int main()
{
    int numberOfLines = 0;
    std::string word;
    int length = 0;

    std::cin >> numberOfLines;

    for(int i = 0; i < numberOfLines; i++)
    {
        std::cin >> word;
        length = word.length();
        if (length > 10)
            std::cout << word[0] << length - 2 << word[length-1] << std::endl;
        else
            std::cout << word << std::endl;
    }
    return 0;
}