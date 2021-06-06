#include <iostream>
#include "quiz_4.h"

double get_height() {
    std::cout << "Enter the height of the tower in meters: ";
    double h{};
    std::cin >> h;
    return h;
}

double calculate_height(double h, double t) {
    double height{};
    height =  h - (gravity * t * t / 2.0);

    return height;
}

void print_height_at_time(double h, double t) {
    if (h <= 0)
        std::cout << "At " << t << " seconds, the ball is on the ground.\n";
    else
        std::cout << "At " << t << " seconds, the ball is at height: " << h << " meters\n";
}

void calc_and_print_height(double h, double t) {
    double current_height{ calculate_height(h, t) };
    print_height_at_time(current_height, t);
}

int main() {
    double height{};
    height = get_height();
    
    calc_and_print_height(height,0.0);
    calc_and_print_height(height,1.0);
    calc_and_print_height(height,2.0);
    calc_and_print_height(height,3.0);
    calc_and_print_height(height,4.0);
    calc_and_print_height(height,5.0);

    return 0;
}