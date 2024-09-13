#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <string>
#include <cctype>
#include <iostream>

class StringCalculator
{
  public:
    int less_than_thousand(int num)
    {
       if (num>1000)
         return 0;
      else
         return num;
    }
    int get_number(char ch)
   {
      if(isdigit(ch))
      {
        return less_than_thousand(ch);
      }
     return 0;
   }
    int add(std::string input)
   { 
      int sum = 0;
      for( char ch : input)
        {
          int n = get_number(ch);
          sum += n;
        }
      return sum;
   }
};
#endif // StringCalculator_H
