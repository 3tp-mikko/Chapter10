//
// Created by chizs on 4/5/2025.
//

#include "CDAccount.h"

CDAccount::CDAccount() : dollars(0), cents(0), interestRate(0), term(0)
{

}

CDAccount::CDAccount(int dollars, int cents, double interestRate, int term)
    : dollars(dollars), cents(cents), interestRate(interestRate), term(term)
{

}

const double CDAccount::getBalance() const {
    return dollars + 0.01 * cents;
}
const double CDAccount::getInterestRate() const {
    return interestRate;
}
const int CDAccount::getTerm() const {
    return term;
}
void CDAccount::setBalance(const int dollars, const int cents) {
    CDAccount::dollars = dollars;
    CDAccount::cents = cents;
}
void CDAccount::setInterestRate(const double interestRate) {
    CDAccount::interestRate = interestRate * 0.01;
}
void CDAccount::setTerm(const int term) {
    CDAccount::term = term;
}
double CDAccount::balanceAtMaturity() const {
    return (dollars + 0.01 * cents) + ((dollars + 0.01 * cents) * (interestRate) * (term / 12.0));
}