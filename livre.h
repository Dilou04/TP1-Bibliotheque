#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
#include "date.h"

class Livre {
private:
    std::string titre_;
    std::string auteur_;
    std::string langue_;
    std::string genre_;
    std::string isbn_;
    Date dateemprunt_;
public:
    Livre (std::string titre, std::string auteur, std::string langue, std::string genre, std::string isbn, Date dateemprunt);
    std::string titre();
    std::string auteur();
    std::string langue();
    std ::string genre();
    std::string isbn();
    Date emprunt();
    Date getDate();
    std::string getTitre();
    std::string getAuteur();
    std::string getLangue();
    std::string getGenre();
    std::string getIsbn();
};
#endif