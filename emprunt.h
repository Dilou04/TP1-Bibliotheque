#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <iostream>
#include <string>

class Emprunt{
    public:
    std::string getDateEmprunt();
    private:
        std::string dateEmprunt_;
};

#endif