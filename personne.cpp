#include <iostream>
#include <string>
#include "personne.hpp"

using namespace std;

personne::personne(int cd,string n){
	code=cd;nom=n;
}

void personne::afficher(){
	cout<<code<<": "<<nom<<endl;
}