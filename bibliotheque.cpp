#include "bibliotheque.h"
#include "lecteur.h"
#include "emprunt.h"
#include "livre.h"

Livre Bibliotheque::getLivre(){
    return livre_;
}

Emprunt Bibliotheque::getEmprunt(){
    return emprunt_;
}

Lecteur Bibliotheque::getLecteur(){
    return lecteur_;
}

bool Bibliotheque::isEmprunte(Livre livre, Emprunt emprunt){
    if((livre.getIsbn() == emprunt.getIsbn().getIsbn())) return false;
    return true;
}

Bibliotheque::Bibliotheque(Livre livre, Lecteur lecteur, Emprunt emprunt): livre_(livre), lecteur_(lecteur), emprunt_(emprunt){
    if (!isEmprunte(livre, emprunt)){
        std::cout << "le livre" << livre.getTitre() << " est déjà emprunté." << std::endl;
    }
}