#include <iostream>

void print_example() {
    int outer{ 1 };
    while (outer <= 5)
    {
        // loop between 1 and outer
        int inner{ 1 };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }
 
        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }
}

void quiz_3() {
    int outer{ 5 };
    while (outer >= 1)
    {
        // loop between outer and 1
        int inner{ outer };
        while (inner >= 1)
        {
            std::cout << inner << ' ';
            --inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        --outer;
    }
}
 
int main()
{
    print_example();
    std::cout << '\n';
    quiz_3();

    return 0;
}