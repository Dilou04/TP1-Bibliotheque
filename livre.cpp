#include "livre.h"

std::string Livre::getTitre(){
    return titre_;
}

std::string Livre::getAuteur(){
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
Livre::Livre(std::string titre, std::string auteur, std::string langue, std::string genre, std::string isbn): titre_(titre), auteur_(auteur), langue_(langue), genre_(genre), isbn_(isbn){

}
