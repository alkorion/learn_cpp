#include <iostream>

struct Advertising {
    int     ads_shown;
    double  percentage_clicked;
    double  avg_revenue_per_click;
};

void print_total_revenue(Advertising a) {
    std::cout << "Total revenue was: $" << a.ads_shown * a.percentage_clicked * a.avg_revenue_per_click << '\n';
}

int main () {
    Advertising advert{120, 0.1, 1.2};

    print_total_revenue(advert);
    
    return 0;
}