#include <iostream>

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {

    int daysRemaining = 7 - today;
    
    daysRemaining = (daysRemaining < 0) ? daysRemaining + 7 : daysRemaining;

    return daysRemaining;
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);

    std::cout << "Days remaining in the week: " << daysRemaining << std::endl;

    return 0;
}
