#include <iostream>

#include "aaa.h"

AAA::AAA() {
}

void AAA::sayHi(const char *name) {
    std::cout << "Hi " << name << std::endl;
}

