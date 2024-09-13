#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <string>
#include <cctype.h>
#include <iostream.h>

class StringCalculator{
  public:
    int add(std::string& input)
   {
     int sum = 0;
     for (char ch : input)
       if (isdigit(ch))
       {
         sum = sum + ch;
       }
      return sum;
   }
};
#endif // StringCalculator_H
