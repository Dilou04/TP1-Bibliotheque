#include "auteur.h"

std::string Auteur::getIdentifiant(){
    return identifiant_;
}

std::string Auteur::getNom(){
    return nom_;
}

std::string Auteur::getPrenom(){
    return prenom_;
}

std::string Auteur::getDateNaissance(){
    return datenaissance_;

}

Auteur::Auteur(std::string identifiant, std::string nom, std::string prenom, std::string datenaissance): identifiant_(identifiant), nom_(nom), prenom_(prenom), datenaissance_(datenaissance){
    
}

std::ostream& operator<<(std::ostream& os, const Auteur& aut){
    os << aut.nom_ << " " << aut.prenom_ << std::endl;
    return os;
}