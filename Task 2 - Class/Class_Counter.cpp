#include <iostream>
#include "Class_counter.h"


Counter::Counter(int i) {
   set_counter(i);
}

Counter::Counter() {
   i = i;
}

void Counter::set_counter(int j) {
   i = j;
}

void Counter::sum() {
   i++;
}

void Counter::substraction() {
   i--;
}

void Counter::equal_fun() {
   std::cout << i << std::endl; ;
}

int Counter::exit_fun() {
   std::cout << "До свидания!";
   return 0;
}