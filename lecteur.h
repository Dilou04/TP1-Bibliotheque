#ifndef LECTEUR_H
#define LECTEUR_H

#include <iostream>
#include <string>

class Lecteur{
    public:
        Lecteur(std::string prenom, std::string nom, std::string id, std::string isbn);
        std::string prenom();
        std::string nom();
        std::string id();
        std::string isbn();
        std::string getNom();
        std::string getPrenom();
        std::string getId();
        std::string getIsbn();
    private:
        std::string nom_;
        std::string prenom_;
        std::string id_;
        std::string isbn_;
};

#endif