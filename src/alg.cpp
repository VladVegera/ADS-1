// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
if(value == 0 || value == 1){return false;}
for(int i=2; i<=value/2; i++){
  if(value%i == 0){return false;}
}
return true;
}

uint64_t nPrime(uint64_t n) {
int count = 0;
int i = 2;
while(true){
  if(checkPrime(i)){count++;}
  if(count == n){return i;}
  i++;
}
}

uint64_t nextPrime(uint64_t value) {
i = value;
while(true){
  i++;
  if(checkPrime(i)){return i;}
}
}

uint64_t sumPrime(uint64_t hbound) {
int64_t sum = 0;
for(uint64_t i = 2; i<hbound; i++){
  if(checkPrime(i)){sum+=i;}
}
return sum;
}
