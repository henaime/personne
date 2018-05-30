#ifndef etudiant_hpp
#define etudiant_hpp

#include <iostream>
#include <string>
#include "personne.hpp"

using namespace std;

class etudiant: public personne{
	float age;
	string filiere;
public:
	etudiant(int ,string,float,string);
	etudiant(float,string);
	void afficher();
	float getage(){return age;}
	isetudiant(){return true;}
};


#endif