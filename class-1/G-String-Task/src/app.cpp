#include <iostream>
#include <ctype.h>

bool isVowel(char character)
{
    return (character == 'a' || character == 'e' || character == 'y' || character == 'o' || character == 'u' || character == 'i' );
}

int main()
{
    std::string string;
    std::string out = "";
    std::cin >> string;
    for(int i = 0; i < string.length(); i++)
    {
        char character = tolower(string[i]);
        if(!isVowel(character))
        {
            out.append(".");
            out.append(1, character);
        }
    }
    std::cout << out << std::endl;
    return 0;
};