#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHHEQUE_H

#include <iostream>
#include <string>

#include "livre.h"
#include "emprunt.h"
#include "lecteur.h"

class Bibliotheque{
    public:
        Livre getLivre();
        Emprunt getEmprunt();
        Lecteur getLecteur();
        Livre livre();
        Emprunt emprunt();
        Lecteur lecteur();
        Bibliotheque(Livre livre, Lecteur lecteur, Emprunt emprunt);
    
    private:
        Livre livre_;
        Emprunt emprunt_;
        Lecteur lecteur_;
        bool isEmprunte(Livre livre, Emprunt emprunt);


};

#endif