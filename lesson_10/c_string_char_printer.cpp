#include <iostream>

void print_chars(const char* array_start) {
    char current_char{ *array_start };
    int offset{ 0 };

    while (current_char != '\0') {
        current_char = *(array_start + offset);
        std::cout << current_char;
        ++offset;
    }

}

int main() {

    char c_string[]{ "Hello, world!" };

    print_chars(c_string);
    std::cout << '\n';

    return 0;
}
