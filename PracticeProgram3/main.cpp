#include <iostream>
#include "CounterType.h"

int main() {
    CounterType counter;
    int input;
    char choice;
    std::cout << "What positive value would you like your counter." << std::endl;
    std::cin >> input;
    while (input < 0) {
        std::cout << "Please enter a positive number" << std::endl;
        std::cin >> input;
    }
    counter.setCounter(input);
    do {
        choice = 'c';
        std::cout << "Would you like to increment, decrement, or stop?" << std::endl;
        while (choice != '+' && choice != '-' && choice != '1') {
            std::cout << "Please enter (+) for increment, (-) decrement, or (1) to stop" << std::endl;
            std::cin >> choice;
        }
        if (choice == '+') {
            counter.increment();
        }
        else if (choice == '-') {
             if (counter.getCounter() <= 0) {
                std::cout << "Counter is at 0, cannot go any lower." << std::endl;
            }
            else {
                counter.decrement();
            }
        }

        std:: cout << "Your counter is at: ";
        counter.output(std::cout);
        std::cout << std::endl;

    }while (choice != '1');
    return 0;
}