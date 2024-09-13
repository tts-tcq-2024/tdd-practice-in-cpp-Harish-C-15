#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <string>
#include <cctype>
#include <iostream>

class StringCalculator
{
  public:
    int less_than_thousand(int num);
    int get_number(char ch);
    int add(std::string input);
};
#endif // StringCalculator_H
