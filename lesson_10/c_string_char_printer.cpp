#include <iostream>

void print_chars(const char* array_start) {

    while (*array_start != '\0') {
        std::cout << *array_start;
        ++array_start;
    }

}

int main() {

    char c_string[]{ "Hello, world!" };

    print_chars(c_string);
    std::cout << '\n';

    return 0;
}
