#include <iostream>
#include <string>
#include "BalancedSymbols_LL.h"

int main () {
    std::string expression;

    std::cout <<"Enter an expression: ";
    std::cin >> expression;
    BalancedCheck(expression);
}