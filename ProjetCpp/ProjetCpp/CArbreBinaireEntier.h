#ifndef CARBREBINAIREENTIER
#define CARBREBINAIREENTIER 2

class CArbreBinaireEntier
{
private :
	//Attributs
	int iABEElement;
	CArbreBinaireEntier * pABEFilsGauche;
	CArbreBinaireEntier * pABEFilsDroit;
	
public :
	//Constructeurs / Destructeurs
	CArbreBinaireEntier();
	CArbreBinaireEntier(int iElement);
	CArbreBinaireEntier(int iElement, CArbreBinaireEntier * pABEfGauche, CArbreBinaireEntier * pABEfDroit);
	CArbreBinaireEntier(const CArbreBinaireEntier  & ABEarbre);
	~CArbreBinaireEntier();

	//M�thodes
	int ABELireElement();
	void ABEModifierElement(int iValeur);
	CArbreBinaireEntier * ABELireFilsGauche();
	void ABEModifierFGauche(CArbreBinaireEntier * ABEarbre);
	CArbreBinaireEntier * ABELireFilsDroite();
	void ABEModifierFDroite(CArbreBinaireEntier * ABEarbre);
	void ABEViderArbre(CArbreBinaireEntier & ABEarbre);

	//Op�rateurs
	void operator+(const CArbreBinaireEntier & arbre); 
};

#endif