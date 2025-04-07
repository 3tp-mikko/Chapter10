//
// Created by chizs on 4/5/2025.
//

#include "CDAccount.h"

CDAccount::CDAccount() : balance(0), interestRate(0), term(0)
{

}

CDAccount::CDAccount(double balance, double interestRate, int term)
    : balance(balance), interestRate(interestRate), term(term)
{

}

const double CDAccount::getBalance() const {
    return balance;
}
const double CDAccount::getInterestRate() const {
    return interestRate;
}
const int CDAccount::getTerm() const {
    return term;
}
void CDAccount::setBalance(const double balance) {
    CDAccount::balance = balance;
}
void CDAccount::setInterestRate(const double interestRate) {
    CDAccount::interestRate = interestRate;
}
void CDAccount::setTerm(const int term) {
    CDAccount::term = term;
}
double CDAccount::balanceAtMaturity() const {
    return balance + (balance * (interestRate / 100.0) * (term / 12.0));
}