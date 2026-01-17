#include "emprunt.h"

Date Emprunt::getDateEmprunt(){
    return dateEmprunt_;
}

Livre Emprunt::getIsbn(){
    return isbn_;
}

Lecteur Emprunt::getIdentifiant(){
    return identifiant_;
}

Emprunt::Emprunt(Date dateEmprunt,Livre isbn, Lecteur identifiant): dateEmprunt_(dateEmprunt), isbn_(isbn), identifiant_(identifiant){

}