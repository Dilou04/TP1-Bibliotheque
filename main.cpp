#include <iostream>
#include "date.h"

int main(){
    Date birthday(10, 19, 2010);
    std::string days_ = birthday.getDay();
    std::string months_ =birthday.getMonth();
    std::string year_ = birthday.getYears();
    std::cout << "L'anniversaire est le : " << days_ << "/" << months_ << "/" << year_<< std::endl;
}