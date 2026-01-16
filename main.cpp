#include <iostream>
#include "date.h"
#include "livre.h"
#include "auteur.h"
#include "lecteur.h"
#include "emprunt.h"
#include "bibliotheque.h"

int main(){
    Date birthday(10, 19, 2010);
    std::cout << "l'aniversaire est le :" << birthday << std::endl;
    
    Auteur goggins("10", "Goggins", "David", "17 février 1975");
    Livre goggins_("Plus rien ne pourras me blesser", goggins , "Français", "Biographie", "1");
    
    Auteur goggin_ = goggins_.getAuteur();

    std::string titres_ = goggins_.getTitre();
    std::string langues_ = goggins_.getLangue();
    std::string genres_ = goggins_.getGenre();
    std::string isbns_ = goggins_.getIsbn();
    std::cout << "Le livre est : " << titres_ << " écrit par : " << goggins << " en " << langues_ << std::endl;
    std::cout << " sont isbn est : " << isbns_ << " et c'est : " << genres_ << std::endl;

    Lecteur dom("Dominique", "Ginhac", "16");
    Lecteur dylan("Dylan", "Litwinaki", "12");
    Lecteur didier("Didier", "Deschamps", "98");
    std::cout << "Un des lecteurs se nome : " << dom << std::endl;

    /* Date emprunt(01, 10, 2026);
    Emprunt premierEmprunt(emprunt, goggins_, dom);
    std::cout << "Le Livre " << premierEmprunt.getIsbn().getIsbn() << " a été emprunté le : " << premierEmprunt.getDateEmprunt().getDay() << " / " << premierEmprunt.getDateEmprunt().getMonth() << " / " << premierEmprunt.getDateEmprunt().getYears() << " et il a été emprunté par : " << premierEmprunt.getIdentifiant().getId() << std::endl;
    */ 

    std::vector<Lecteur> lec;
    std::vector<Emprunt> emp;
    std::vector<Livre> liv;
    Bibliotheque bibliotheque(lec,liv,emp);
    bibliotheque.addLecteur(dom);
    bibliotheque.addLecteur(dylan);
    bibliotheque.addLecteur(didier);
    
}
    