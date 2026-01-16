#ifndef AUTEUR_H
#define AUTEUR_H

#include <iostream>
#include <string>
#include <ostream>

class Auteur{
    public:
        Auteur (std::string identifiant, std::string nom, std::string prenom, std::string datenaissance);
        std::string getIdentifiant();
        std::string getNom();
        std::string getPrenom();
        std::string getDateNaissance();

        friend std::ostream& operator<<(std::ostream& os, const Auteur& aut);

    private: 
        std::string identifiant_ ;
        std::string nom_ ; 
        std::string prenom_ ;
        std::string datenaissance_ ;

};

#endif