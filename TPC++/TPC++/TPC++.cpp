#include "Cexception.h"
#include <iostream>

using namespace std;

//Valeurs d'exception
#define ERREUR_DENOMINATEUR_NUL 1

void main()
{
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
	}
}