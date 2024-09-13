#include "StringCalculator.h"
#include <sstream>
#include <iostream>
#include <cctype>

int StringCalculator::less_than_thousand(int num)
    {
       if (num>1000)
         return 0;
      else
         return num;
    }
    int StringCalculator::get_number(char ch)
   {
      if(isdigit(ch))
      {
        int num = ch -'0';
        return less_than_thousand(num);
      }
     return 0;
   }
    int StringCalculator::add(std::string input)
   { 
      int sum = 0;
      for( char ch : input)
        {
          int n = get_number(ch);
          sum += n;
        }
      return sum;
   }
