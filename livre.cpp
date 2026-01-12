#include "livre.h"
#include "date.h"
#include "auteur.h"
#include "emprunt.h"


std::string Livre::getTitre(){
    return titre_;
}

Auteur Livre::getAuteur(){
    return auteur_;
}

std::string Livre::getLangue(){
    return langue_;
}
std::string Livre::getGenre(){
    return genre_;
}
std::string Livre::getIsbn(){
    return isbn_;
}
Livre::Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string isbn): titre_(titre), auteur_(auteur), langue_(langue), genre_(genre), isbn_(isbn){

}

bool Livre::isDispo(std::string isbn, std::vector<std::string> isbnLivreDispo){
    for(int i = 0; i < isbnLivreDispo.size(); i++){
        if (isbn != isbnLivreDispo[i]){
            return false;
        }
    }
    return true;
}