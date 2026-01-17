#include "auteur.h"

Auteur::Auteur(std::string identifiant, std::string nom, std::string prenom, std::string datenaissance): identifiant_(identifiant), nom_(nom), prenom_(prenom), datenaissance_(datenaissance){
    
}

std::ostream& operator<<(std::ostream& os, const Auteur& aut){
    os << aut.nom_ << " " << aut.prenom_ << std::endl;
    return os;
}