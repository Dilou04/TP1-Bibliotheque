#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
#include "auteur.h"
#include <vector>
#include <ostream>

class Livre {
    
    public:
        std::string titre();
        std::string auteur();
        std::string langue();
        std ::string genre();
        std::string isbn();
        std::string getIsbn();
        Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string isbn);
        
        bool isDispo(std::string isbn, std::vector<std::string> isbnLivreDispo);
        friend std::ostream& operator<<(std::ostream& os, const Livre& liv);
    
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
        std::vector<std::string> isbnLivreDispo_;
        std::vector<std::string> isbnLivrePasDispo_;
};
#endif