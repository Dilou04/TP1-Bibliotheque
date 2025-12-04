<<<<<<< HEAD
#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>

class Book{

    public: 
        std::string getTitle();
        std::string getAuteur();
        std::string getLangue();
        std::string getGenre();
        std::string getDate();
        std::string getIsbn();
        bool isDispo();
    
    private:
        std::string titre_;
        std::string auteur_;
        std::string langue_;
        std::string genre_;
        std::string datePublication_;
        std::string isbn_;
        std::string ancienEmprunteurs_;


};
=======
#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>

class Book{

    public: 
        std::string getTitle();
        std::string getAuteur();
        std::string getLangue();
        std::string getGenre();
        std::string getDate();
        std::string getIsbn();
        bool isDispo();
    
    private:
        std::string titre_;
        std::string auteur_;
        std::string langue_;
        std::string genre_;
        std::string datePublication_;
        std::string isbn_;
        std::string ancienEmprunteurs_;


};
>>>>>>> 75cb30d78681b09d1d06b5ef149763d80fad36ee
#endif