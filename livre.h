#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
#include "date.h"
#include "auteur.h"

class Livre {
private:
    Auteur auteur_;
    std::string titre_;
    std::string nom_;
    std::string prenom_;
    std::string identifiant_;
    std::string datenaissance_;
    std::string langue_;
    std::string genre_;
    std::string isbn_;

public:
    std::string titre();
    std::string auteur();
    std::string langue();
    std ::string genre();
    std::string isbn();
    std::string getTitre();
    Auteur getAuteur();
    std::string getLangue();
    std::string getGenre();
    std::string getIsbn();
    Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string isbn);
};
#endif