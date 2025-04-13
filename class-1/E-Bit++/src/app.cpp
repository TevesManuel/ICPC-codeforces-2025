#include<iostream>

void cleanCarriageReturns(char * character)
{
    while(*character == '\n')
        *character = getchar();
}
void goCarriageReturn(char * character)
{
    while(*character != '\n')
        *character = getchar();    
}

int main()
{
    int x = 0;
    char c = '\n';
    int statementsCounter = 0;
    int numberOfStatements;
    std::cin >> numberOfStatements;

    cleanCarriageReturns(&c);
    while (statementsCounter < numberOfStatements) {

        c = getchar();

        if(c == '+')
        {
            x++;
            goCarriageReturn(&c);
        }
        if(c == '-')
        {
            x--;
            goCarriageReturn(&c);
        }
        if(c=='\n')
        {
            statementsCounter++;
        }
    }

    std::cout << x << std::endl;

    return 0;
}