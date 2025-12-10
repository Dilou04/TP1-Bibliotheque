#include <iostream>
#include "date.h"
#include "livre.h"

int main(){
    Date birthday(10, 19, 2010);
    std::string days_ = birthday.getDay();
    std::string months_ =birthday.getMonth();
    std::string year_ = birthday.getYears();
    std::cout << "L'anniversaire est le : " << days_ << "/" << months_ << "/" << year_<< std::endl;

    Livre premierLivre("Le journal d'un prisonnier","Nicolas Sarkozy", "Français", "Essai politique", "12");
    std::string titres_ = premierLivre.getTitre();
    std::string auteurs_ = premierLivre.getAuteur();
    std::string langues_ = premierLivre.getLangue();
    std::string genres_ = premierLivre.getGenre();
    std::string isbns_ = premierLivre.getIsbn();
    std::cout << "Le livre est : " << titres_ << " écrit par : " << auteurs_ << " en " << langues_ << std::endl;
    std::cout << " sont isbn est : " << isbns_ << " et c'est : " << genres_ << std::endl;
}