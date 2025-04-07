#include "Functions.h"

void getData(CDAccount& theAccount) {
    int dollars;
    int cents;
    double interest;
    double term;
    std::cout << "Enter account dollars in balance: " << std::endl;
    std::cin >> dollars;
    std::cout << "Enter account cents in balance: " << std::endl;
    std::cin >> cents;
    std::cout << "Enter account interest rate: " << std::endl;
    std::cin >> interest;
    std::cout << "Enter the number of months until maturity (under 12 months): " << std::endl;
    std::cin >> term;
    theAccount.setBalance(dollars, cents);
    theAccount.setInterestRate(interest);
    theAccount.setTerm(term);
}
