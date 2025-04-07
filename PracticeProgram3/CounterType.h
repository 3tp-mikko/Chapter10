//
// Created by chizs on 4/5/2025.
//

#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H
#include <iostream>


class CounterType {
private:
    int counter;
    public:
    CounterType();
    CounterType(int counter);
    void increment();
    void decrement();
    const int getCounter() const;
    void setCounter(int counter);
    void output(std::ostream& out);


};



#endif //COUNTERTYPE_H
