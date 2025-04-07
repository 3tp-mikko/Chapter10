//
// Created by chizs on 4/5/2025.
//

#ifndef CDACCOUNT_H
#define CDACCOUNT_H



class CDAccount {
private:
    double balance;
    double interestRate;
    int term;
public:
    CDAccount();
    CDAccount(double balance, double interestRate, int term);
    const double getBalance() const;
    const double getInterestRate() const;
    const int getTerm() const;
    void setBalance(const double balance);
    void setInterestRate(const double interestRate);
    void setTerm(const int term);
    double balanceAtMaturity() const;
};



#endif //CDACCOUNT_H
