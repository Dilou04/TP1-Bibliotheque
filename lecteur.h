#ifndef LECTEUR_H
#define LECTEUR_H

#include <iostream>
#include <string>
#include <ostream>


class Lecteur{
    public:
        Lecteur(std::string prenom, std::string nom, std::string id);
        std::string prenom();
        std::string nom();
        std::string id();     

        friend std::ostream& operator<<(std::ostream& os, const Lecteur& lec);
        
    private:
        std::string nom_;
        std::string prenom_;
        std::string id_;
};

#endif