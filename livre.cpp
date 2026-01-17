#include "livre.h"

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

std::ostream& operator<<(std::ostream& os, const Livre& liv){
    os << "Le livre est : " << liv.titre_ << " écrit par : " << liv.auteur_ << " et c'est : " << liv.genre_ << " sont isbn est :" << liv.isbn_ << std::endl;
    return os;
}