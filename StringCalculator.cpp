#include "StringCalculator.h"
#include <sstream>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
#include <stdexcept>

std::vector<int> negatives;
int flag = 0;
class NegativeNumberException : public std::runtime_error {
public:
    NegativeNumberException(const std::string& message)
        : std::runtime_error(message) {}
};
void throw_error()
{
        std::string message = "Negatives not allowed: ";
        for (int i = 0; i < negatives.size(); ++i) 
            {
                message += std::to_string(negatives[i]);
                if (i < negatives.size() - 1) 
                {
                    message += ", ";
                }
            }
        throw NegativeNumberException(message);
}
int StringCalculator::less_than_thousand(int num)
    {
       if (num>1000)
         return 0;
      else
         return num;
    }
int get_number(ch token)
{
   int num = std::stoi(token);
    if(num>0)
        int digit = less_than_thousand(num);
    else
    {
        negatives.push_back(num);
        flag++;
    }
    return digit;
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
          int num = get_number(token);
          int sum = 0;
          sum += num;
    }
       if(flag>0)
          throw_error();
      return sum;
   }
