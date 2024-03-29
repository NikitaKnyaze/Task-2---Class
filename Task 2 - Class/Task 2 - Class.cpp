﻿
#include <windows.h>
#include <iostream>
#include "Class_counter.h"

enum  symbol : char {
   plus = '+',
   minus = '-',
   equal = '=',
   X = 'х', //киррилица
   x = 'x'  //латиница
};


char commands_input() {
   char character;
   std::cout << "Введите команду('+', '-', '=' или 'х'): ";
   std::cin >> character;

   return character;
}

int commands_read(Counter& count, char character) {

   switch (character) {
   case plus: count.sum(); break;
   case minus: count.substraction(); break;
   case equal: count.equal_fun(); break;
   case X: count.exit_fun(); return 0;
   case x: count.exit_fun(); return 0;
   default: return 0;
   }
   return 1;
}

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   int i{}, j{ 1 };
   char character;
   std::string Answer;
   Counter main;
   std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
   std::cin >> Answer;

   if (Answer == "да") {
      std::cout << std::endl << "Введите начальное значение счётчика: ";
      std::cin >> i;
      Counter count(i);
      main = count;
   }
   else {
      Counter count;
      main = count;
   }

   do {
      character = commands_input();
      j = commands_read(main, character);

   } while (j);

   return 0;
}