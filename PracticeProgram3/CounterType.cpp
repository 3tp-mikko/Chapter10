//
// Created by chizs on 4/5/2025.
//

#include "CounterType.h"

CounterType::CounterType()
    : counter(0)
{

}
CounterType::CounterType(int counter) : counter(counter) {

}
void CounterType::increment() {
    counter++;
}
void CounterType::decrement() {
    counter--;
}

const int CounterType::getCounter() const {
    return counter;
}
void CounterType::setCounter(int counter) {
    CounterType::counter = counter;
}
void CounterType::output(std::ostream& out) {
    out << counter << std::endl;
}