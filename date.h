#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date{
    public:
        Date(int month, int day, int years);
        int day();
        int month();
        int years();
        std::string getDay();
        std::string getMonth();
        std::string getYears();

    private:
        int month_;
        int day_;
        int years_;
        bool isDate(int month, int day, int years);

};

#endif