#include "bibliotheque.h"
#include "emprunt.h"
#include "lecteur.h"
#include <vector>

Bibliotheque::Bibliotheque(std::vector<Lecteur> lecteurs, std::vector<Livre> livres, std::vector<Emprunt> emprunts): lecteurs_(lecteurs), livres_(livres), emprunts_(emprunts){

}

std::vector<Lecteur> Bibliotheque::getListeLecteurs(){
    return lecteurs_;
}

std::vector<Livre> Bibliotheque::getListeLivres(){
    return livres_;
}

std::vector<Emprunt> Bibliotheque::getListeEmprunt(){
    return emprunts_;
}

void Bibliotheque::addLecteur(Lecteur lec){
    lecteurs_.push_back(lec);
}

void Bibliotheque::addLivre(Livre liv){
    livres_.push_back(liv);
}

void Bibliotheque::addAuteur(Auteur aut){
    auteurs_.push_back(aut);
}