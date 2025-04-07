#include "Functions.h"

void getData(CDAccount& theAccount) {
    double bal;
    double interest;
    double term;
    std::cout << "Enter account balance: " << std::endl;
    std::cin >> bal;
    std::cout << "Enter account interest rate: " << std::endl;
    std::cin >> interest;
    std::cout << "Enter the number of months until maturity (under 12 months): " << std::endl;
    std::cin >> term;
    theAccount.setBalance(bal);
    theAccount.setInterestRate(interest);
    theAccount.setTerm(term);
}
