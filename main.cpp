#include <iostream>
#include "date.h"
#include "livre.h"
#include "auteur.h"
#include "lecteur.h"

int main(){
    Date birthday(10, 19, 2010);
    std::string days_ = birthday.getDay();
    std::string months_ =birthday.getMonth();
    std::string year_ = birthday.getYears();
    std::cout << "L'anniversaire est le : " << days_ << "/" << months_ << "/" << year_<< std::endl;
    
   
    Auteur goggins("10", "Goggins", "David", "17 février 1975");
    Livre premierLivre("Plus rien ne pourras me blesser", goggins , "Français", "Biographie", "1");
    
    Auteur goggins_ = premierLivre.getAuteur();

    std::string titres_ = premierLivre.getTitre();
    std::string langues_ = premierLivre.getLangue();
    std::string genres_ = premierLivre.getGenre();
    std::string isbns_ = premierLivre.getIsbn();
    std::cout << "Le livre est : " << titres_ << " écrit par : " << goggins_.getNom() << " " << goggins_.getPrenom()<< " en " << langues_ << std::endl;
    std::cout << " sont isbn est : " << isbns_ << " et c'est : " << genres_ << std::endl;

    Lecteur dom("Dominique", "Ginhac", "16");
    std::cout << "Un des lecteurs se nome : " << dom.getPrenom() << " " << dom.getNom() << " avec comme identifiant le " << dom.getId() << std::endl;
}
