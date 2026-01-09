#ifndef LECTEUR_H
#define LECTEUR_H

#include <iostream>
#include <string>

class Lecteur{
    public:
        Lecteur(std::string prenom, std::string nom, std::string id);
        std::string prenom();
        std::string nom();
        std::string id();
        std::string getNom();
        std::string getPrenom();
        std::string getId();
    private:
        std::string nom_;
        std::string prenom_;
        std::string id_;
};

#endif