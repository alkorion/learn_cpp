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
 
// Loop between 1 and 5
int main()
{
    print_example();

    
    return 0;
}