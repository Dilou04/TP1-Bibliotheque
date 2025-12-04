#include "date.h"


bool Date::isDate(int month, int day, int years){
    if ((day < 1 || day > 31)) return false;
    if ((month < 1 || month > 12)) return false;
    if ((month == 2 && day > 28)) return false;
    if (((month == 4 ) || (month == 6) || (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;

}
Date::Date(int month , int day, int years) : month_(month), day_(day), years_(years){
    if (!isDate(month, day, years)){
        throw std::invalid_argument("Invalid date: " + std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(years));
    }
}

std::string Date::getDay(){
    return std::to_string(day_);
}

std::string Date::getMonth(){
    return std::to_string(month_);
}

std::string Date::getYears(){
    return std::to_string(years_);
}