#include "CArbreBinaireEntier.h"

CArbreBinaireEntier::CArbreBinaireEntier()
{
	iABEElement = 0;
	pABEFilsGauche = nullptr;
	pABEFilsDroit = nullptr;
}

CArbreBinaireEntier::CArbreBinaireEntier(int iElement)
{
	iABEElement = iElement;
	pABEFilsGauche = nullptr;
	pABEFilsDroit = nullptr;
}

CArbreBinaireEntier::CArbreBinaireEntier(int iElement, CArbreBinaireEntier * pABEfGauche, CArbreBinaireEntier * pABEfDroit)
{
	iABEElement = iElement;
	pABEFilsGauche = pABEfGauche;
	pABEFilsDroit = pABEfDroit;
}

CArbreBinaireEntier::CArbreBinaireEntier(const CArbreBinaireEntier & ABEarbre)
{

	iABEElement = ABEarbre.iABEElement;
	
	if(ABEarbre.pABEFilsGauche != nullptr)
	{
		pABEFilsGauche = new CArbreBinaireEntier(*ABEarbre.pABEFilsGauche);
	}
	else
		pABEFilsGauche = nullptr;
	
	if(ABEarbre.pABEFilsDroit != nullptr)
	{
		pABEFilsDroit = new CArbreBinaireEntier(*ABEarbre.pABEFilsDroit);
	}
	else
		pABEFilsDroit = nullptr;
}

CArbreBinaireEntier::~CArbreBinaireEntier()
{

}
//Méthodes
int CArbreBinaireEntier::ABELireElement()
{
	return iABEElement;
}
void CArbreBinaireEntier::ABEModifierElement(int iValeur)
{

}
CArbreBinaireEntier * CArbreBinaireEntier::ABELireFilsGauche()
{
	return pABEFilsGauche;
}
void CArbreBinaireEntier::ABEModifierFGauche(CArbreBinaireEntier * ABEarbre)
{

}
CArbreBinaireEntier * CArbreBinaireEntier::ABELireFilsDroite()
{
	return pABEFilsDroit;
}

void CArbreBinaireEntier::ABEModifierFDroite(CArbreBinaireEntier * ABEarbre)
{

}
void CArbreBinaireEntier::ABEViderArbre(CArbreBinaireEntier & ABEarbre)
{

}

//Opérateurs
void CArbreBinaireEntier::operator+(const CArbreBinaireEntier & arbre)
{

}