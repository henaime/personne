#include <iostream>
#include <string>
#include "etudiant.hpp"

using namespace std;


int main(){
	personne* t[10];
	t[0]=new personne(121,"mohammed");
	t[1]=new etudiant(267,"amina",21,"genie info");
	t[2]=new personne(234,"anas");
	t[3]=new etudiant(453,"ahmed",22,"gstr");
cout<<"liste des personnes\n";
cout<<"=================="<<endl;
for(int i=0;i<4;i++){
	t[i]->afficher();
}
cout<<"=================="<<endl;
cout<<"liste des etudiants\n";
cout<<"=================="<<endl;
for(int i=0;i<4;i++){
	if(t[i]->isetudiant()){
	t[i]->afficher();
	}
}

etudiant a(21,"gindus");
a.afficher();

/*
	personne p(121,"mohammed");
	etudiant e(267,"amina",21,"genie info");
	p.afficher();
	e.afficher();

	personne *p1;
	p1=new personne(22,"anas");
	personne *p2;
	p2=new etudiant(54,"ahmed",32,"gstr");
	p1->afficher();//appel de afficher de personne
	//appel de afficher de etudiant grace a virtual devant afficher de personne 
	p2->afficher();/*
	//p2->getage(); c'est faut car getage() n'est pas une methode de personne
	/*
	if(p2->isetudiant()==true){
		cout<<((etudiant*)(p2))->getage()<<endl;
	}
	*/
	/*
	personne *q=&e;//un etudiant est une personne
	//etudiant *e2=p;//une personne n'est pas necessairement un etudiant
	
*/
	return 0;
}