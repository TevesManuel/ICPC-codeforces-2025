#include <iostream>

int main()
{
    int numberOfExercises = 0;
    int numberOfExercisesSolved = 0;
    int input = 0;
    int total = 0;
    std::cin >> numberOfExercises;
    for(int i = 0; i < numberOfExercises; i++)
    {
        total = 0;
        for(int i = 0; i < 3; i++)
        {
            std::cin >> input;
            total += input;
        }
        if(total >= 2)
            numberOfExercisesSolved++;
    }
    std::cout << numberOfExercisesSolved;
    return 0;
}