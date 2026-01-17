#include "lecteur.h"

Lecteur::Lecteur(std::string prenom, std::string nom, std::string id): prenom_(prenom), nom_(nom), id_(id){

}

std::ostream& operator<<(std::ostream& os, const Lecteur& lec)
{
    os << lec.prenom_ << " " << lec.nom_ << " et il a l'identifiant : " << lec.id_;
    return os;
}