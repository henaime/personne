#include <iostream>
#include <string>
#include "etudiant.hpp"

using namespace std;

etudiant::etudiant(int cd,string n,float a,string fil):personne(cd,n){
	age=a;filiere=fil;
}
etudiant::etudiant(float a,string fil){
	age=a;filiere=fil;
}

void etudiant::afficher(){
	personne::afficher();
	cout<<"mon age est de "<<age<<" ans je suis eleve a "<<filiere<<endl;
}