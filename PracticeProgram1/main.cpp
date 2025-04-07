#include <iostream>
#include "Functions.h"
#include "CDAccount.h"


int main() {
    CDAccount account;
    getData(account);

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << "When your CD matures in " << account.getTerm() << " months, " << std::endl;
    std::cout << "it will have a balance of $" << account.balanceAtMaturity() << std::endl;

    return 0;
}
