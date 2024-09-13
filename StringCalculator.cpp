#include "StringCalculator.h"
#include <sstream>
#include <iostream>
#include <cctype>
#include <algorithm>

int StringCalculator::less_than_thousand(int num)
    {
       if (num>1000)
         return 0;
      else
         return num;
    }
    int StringCalculator::add(std::string input)
   { 
       if (input.substr(0, 2) == "//") 
     {
        char delimiter = input[2];  
        input = input.substr(4);
        std::replace(input.begin(), input.end(), delimiter, ',');
     }
      std::replace(input.begin(), input.end(), '\n', ',');
      int sum = 0;
      std::stringstream ss(input);
      std::string token;       
      while(std::getline(ss,token,','))
      {
          int num = std::stoi(token);
          sum = sum + less_than_thousand(num);
      }
      return sum;
   }
