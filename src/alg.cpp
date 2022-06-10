//Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value == 0 || value == 1) {
    return false;
  }
  if (value == 2) {
    return true;
  }
  for (int i = 2; i <= value / 2; i++) {
    if (value % 2 == 0) {
     return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  bool f = true;
  uint64_t x = 0, num = 0;
  while (f) {
    if (checkPrime(num)) {
      ++x;
    }
    if (x == n) {
      break;
    }
    ++num;
  }
  return num;
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
  for (int i = 2 ; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
