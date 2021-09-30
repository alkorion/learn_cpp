#include <iostream>

void swap_vars(int& x, int& y) {
    int temp_int = x;
    x = y;
    y = temp_int;
}

void print_ints(const int& x, const int& y) {
    std::cout << "x = " << x << " and y = " << y << '\n';

}

int main() {
    int x, y;
    x = 5;
    y = 7;

    print_ints(x, y);
    swap_vars(x, y);
    print_ints(x, y);

    return 0;
}