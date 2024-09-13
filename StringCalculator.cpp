#include "StringCalculator.h"
#include <sstream>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
#include <stdexcept>

class NegativeNumberException : public std::runtime_error {
public:
    NegativeNumberException(const std::string& message)
        : std::runtime_error(message) {}
};

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
          if(num>0)
              sum = sum + less_than_thousand(num);
          else
          {
              std::vector<int> negatives;
              negatives.push_back(num);
          }
      }
       if (!negatives.empty()) {
        std::string message = "Negatives not allowed: ";
        for (int i = 0; i < negatives.size(); ++i) {
            message += std::to_string(negatives[i]);
            if (i < negatives.size() - 1) {
                message += ", ";
            }
        }
        throw NegativeNumberException(message);
    }
      return sum;
   }
