#include <iostream>

struct Advertising {
    int     ads_shown{};
    double  percent_clicked{};
    double  avg_rev_per_click{};
};

Advertising avg_rev_per_click() {
    Advertising temp;

    std::cout << "How many ads were shown today? ";
    std::cin >> temp.ads_shown;
    std::cout << "What percentage of ads were clicked? ";
    std::cin >> temp.percent_clicked;
    std::cout << "What is the average revenue per ad clicked? ";
    std::cin >> temp.avg_rev_per_click;

    return temp;
}

void print_ad_revenue(Advertising ad) {
    std::cout << "Total revenue was: $" << ad.ads_shown * ad.percent_clicked * ad.avg_rev_per_click << '\n';
}

int main () {
    print_ad_revenue(avg_rev_per_click());
    
    return 0;
}