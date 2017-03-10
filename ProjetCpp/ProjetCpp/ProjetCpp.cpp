// TPC++ test.cpp : définit le point d'entrée pour l'application console.
//
/*
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
} */

#include "Cexception.h"
#include "CNoeudBinaireEntier.h"
#include <iostream>

using namespace std;

//Valeurs d'exception
#define ERREUR_DENOMINATEUR_NUL 1

void main()
{
	//**Test CNoeudBinaireEntier**//
	CNoeudBinaireEntier * pNBEarbre1 = new CNoeudBinaireEntier();
	cout << "arbre " << pNBEarbre1->NBELireElement() << "\n";

	pNBEarbre1->NBEModifierElement(1);
	cout << "arbre " << pNBEarbre1->NBELireElement() << "\n";

	CNoeudBinaireEntier * pNBEarbre2 = new CNoeudBinaireEntier(2);
	cout << "arbre " << pNBEarbre2->NBELireElement() << "\n";

	CNoeudBinaireEntier * pNBEarbre3 = new CNoeudBinaireEntier(3, pNBEarbre1, pNBEarbre2);
	cout << "arbre " << pNBEarbre3->NBELireElement();
	cout << " -- Fils gauche : " << pNBEarbre3->NBELireFilsGauche()->NBELireElement();
	cout << " -- Fils droit : " << pNBEarbre3->NBELireFilsDroit()->NBELireElement() << "\n";

	pNBEarbre3->NBEModifierFGauche(pNBEarbre2);
	pNBEarbre3->NBEModifierFDroit(pNBEarbre1);
	cout << "arbre " << pNBEarbre3->NBELireElement();
	cout << " -- Fils gauche : " << pNBEarbre3->NBELireFilsGauche()->NBELireElement();
	cout << " -- Fils droit : " << pNBEarbre3->NBELireFilsDroit()->NBELireElement() << "\n";

	delete(pNBEarbre1);
	pNBEarbre1 = pNBEarbre2;
	cout << "arbre " << pNBEarbre3->NBELireElement();
	cout << " -- Fils gauche : " << pNBEarbre3->NBELireFilsGauche()->NBELireElement();
	cout << " -- Fils droit : " << pNBEarbre3->NBELireFilsDroit()->NBELireElement() << "\n";
	while(1);
	//**Test CException**//
	/*
	float fDenominateur, fNumerateur;
	while(1)
	{
		cout<<"valeur du numerateur"<<endl;
		cin>>fNumerateur;

		cout<<"valeur du denominateur"<<endl;
		cin>>fDenominateur;

		try
		{
			if(fDenominateur == 0)
			{
				Cexception EXCObjet;
				EXCObjet.EXCModifier_Valeur(ERREUR_DENOMINATEUR_NUL);
				EXCObjet.EXCModifier_Message("Division par zero impossible !");
				throw EXCObjet;
			}
			cout<<"resultat division : "<<fNumerateur/fDenominateur<<endl;

		}
		catch(Cexception EXCObjet)
		{
			cout<<"Erreur "<<EXCObjet.EXCLire_Valeur()<< " " << EXCObjet.EXCLire_Message() << endl;
		}
	}*/
}