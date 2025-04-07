#ifndef CDACCOUNT_H
#define CDACCOUNT_H



class CDAccount {
private:
    int dollars;
    int cents;
    double interestRate;
    int term;
public:
    CDAccount();
    CDAccount(int dollars, int cents, double interestRate, int term);
    const double getBalance() const;
    const double getInterestRate() const;
    const int getTerm() const;
    void setBalance(const int dollars, const int cents);
    void setInterestRate(const double interestRate);
    void setTerm(const int term);
    double balanceAtMaturity() const;
};



#endif //CDACCOUNT_H
