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
if (n == 1) {
return 2;
}
uint64_t count = 1;
uint64_t max = 18446744073709551600;
for(uint64_t i = 3; i<max; i+=2) {
if(checkPrime(i)) {
count++;
}
if(count == n) {
return i;
}
}
}

uint64_t nextPrime(uint64_t value) {
int next = value+1;
if(checkPrime(next)) {
return next;
} else {
next++;
}
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
for(int i = 2 ; i < hbound; i++) {
if(checkPrime(i)) {
sum += i;
}
}
return sum;
}
