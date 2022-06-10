//Copyright 2022 NNTU-CS
#include <math.h>
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value == 0 || value == 1) {
    return false;
  }
  for (int i = 2; i <= value/2; ++i) {
    if (0 == value % i) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  bool flag = true;
  uint64_t x = 0, number = 0;
  while (flag) {
    if (checkPrime(number)) {
      ++x;
    }
    if (x == n) {
      break;
    }
    ++number;
  }
  return number;
}

uint64_t nextPrime(uint64_t value) {
  bool flag = true;
  uint64_t temp = 0;
  for (temp = value + 1; flag; ++tenp) {
    if (checkPrime(temp)) {
      break;
    }
  }
  return temp;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sumP = 0;
  if (hbound < 3) {
    return 0;
  }
  for (int i = 0; i < hbound; ++i) {
    if (checkPrime(i)) {
      sumP += i;
    }
  }
  return sumP;
}
