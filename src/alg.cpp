//Copyright 2022 NNTU-CS
#include <math.h>
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  for (int i = 2; i <= sqrt(value); i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  bool f = true;
  uint64_t x = 0, numb = 0;
  while (f) {
    if (checkPrime(numb)) {
      ++x;
    }
    if (x == n) {
      break;
    }
    ++numb;
  }
  return numb;
}

uint64_t nextPrime(uint64_t value) {
  bool f = true;
  uint64_t temp = 0;
  for (temp = value + 1; f; ++temp) {
    if (checkPrime(temp)) {
      break;
    }
  }
  return temp;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  if (hbound < 3) {
    return 0;
  }
  for (int i = 0 ; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
