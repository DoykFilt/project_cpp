#include "CArbreBinaireEntier"

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

CArbreBinaireEntier::CArbreBinaireEntier(const CArbreBinaireEntier & ABEarbre);
{

	iABEElement = ABEarbre.iABEElement;
	
	if(pABEfGauche != nullptr)
	{
		pABEFilsGauche = new CArbreBinaireEntier(&ABEarbre.pABEFilsGauche);
	}
	else
		pABEFilsGauche = nullptr;
	
	if(pABEfDroite != nullptr)
	{
		pABEFilsDroite = new CArbreBinaireEntier(&ABEarbre.pABEFilsDroite);
	}
	else
		pABEFilsDroite = nullptr;
}

CArbreBinaireEntier::~CArbreBinaireEntier();
{

}
//Méthodes
int CArbreBinaireEntier::ABELireElement();
void CArbreBinaireEntier::ABEModifierElement(int iValeur);
CArbreBinaireEntier * CArbreBinaireEntier::ABELireFilsGauche();
void CArbreBinaireEntier::ABEModifierFGauche(CArbreBinaireEntier * ABEarbre);
CArbreBinaireEntier * CArbreBinaireEntier::ABELireFilsDroite();
void CArbreBinaireEntier::ABEModifierFDroite(CArbreBinaireEntier * ABEarbre);
void CArbreBinaireEntier::ABEViderArbre(& CArbreBinaireEntier);

//Opérateurs
void CArbreBinaireEntier::operator+(const CArbreBinaireEntier & arbre); 