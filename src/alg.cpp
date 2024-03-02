// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value < 2)
        return false;
    for (uint64_t i = 2; i * i <= value; ++) {
        if (value % i == 0)
            return false;
    }
}

uint64_t nPrime(uint64_t n) {
    uint64_t number = 1;
    uint64_t count = 0;
    while (count < n) {
        number++;
        if (checkPrime(number))
            count++;
    }
    return number;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t nextnum = value + 1;
    while (!checkPrime(nextnum)) {
        nextnum++;
    }
    return nextnum;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; ++i) {
        if (checkPrime(i))
            sum = sum + i;
    }
    return sum;
}
