#include <iostream>

struct Advertising {
    int     ads_shown{};
    double  percent_clicked{};
    double  avg_rev_per_click{};
};

void print_ad_revenue(Advertising ad) {
    std::cout << "Total revenue was: $" << ad.ads_shown * ad.percent_clicked * ad.avg_rev_per_click << '\n';
}

int main () {
    Advertising advert{120, 0.1, 1.2};

    print_ad_revenue(advert);
    
    return 0;
}