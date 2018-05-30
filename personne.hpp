#ifndef personne_hpp
#define personne_hpp

#include <iostream>
#include <string>

using namespace std;

class personne{
	int code;
	string nom;
public:
	personne(int=100,string="XXXX");
	virtual void afficher();
	virtual isetudiant(){return false;}
};


#endif 