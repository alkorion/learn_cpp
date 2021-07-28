#include <iostream>

int main () {
    // start the count at the letter 'a'
    int count = static_cast<int>('a');

    while(count <= static_cast<int>('z')) {
        std::cout << static_cast<char>(count) << " has ASCII code: " << count << '\n';
        count++;
    }

    return 0;
}