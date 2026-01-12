#include "lecteur.h"

std::string Lecteur::getNom(){
    return nom_;
}

std::string Lecteur::getId(){
    return id_;
}

std::string Lecteur::getPrenom(){
    return prenom_;
}

std::string Lecteur::getIsbn(){
    return isbn_;
}

Lecteur::Lecteur(std::string prenom, std::string nom, std::string id, std::string isbn): prenom_(prenom), nom_(nom), id_(id), isbn_(isbn){

}