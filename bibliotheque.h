#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHHEQUE_H

#include <iostream>
#include <string>
#include <vector>

#include "livre.h"
#include "emprunt.h"
#include "lecteur.h"
#include "auteur.h"

class Bibliotheque{
    public:
        Bibliotheque(std::vector<Lecteur> lecteurs, std::vector<Livre> livres, std::vector<Emprunt> emprunts);
        std::vector<Lecteur> getListeLecteurs();
        std::vector<Livre> getListeLivres();
        std::vector<Emprunt> getListeEmprunt();
        std::vector<Lecteur> lecteurs();
        std::vector<Livre> livres();
        std::vector<Emprunt> emprunts();
        void addLecteur(Lecteur lec);
        void addLivre(Livre liv);
        void addAuteur(Auteur aut);

        
    private:
        std::vector<Lecteur> lecteurs_;
        std::vector<Livre> livres_;
        std::vector<Emprunt> emprunts_;
        std::vector<Auteur> auteurs_;

};
#endif