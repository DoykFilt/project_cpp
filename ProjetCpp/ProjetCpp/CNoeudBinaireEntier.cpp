#include "CNoeudBinaireEntier.h"

CNoeudBinaireEntier::CNoeudBinaireEntier()
{
	iNBEElement = 0;
	pNBEFilsGauche = nullptr;
	pNBEFilsDroit = nullptr;
}

CNoeudBinaireEntier::CNoeudBinaireEntier(int iElement)
{
	iNBEElement = iElement;
	pNBEFilsGauche = nullptr;
	pNBEFilsDroit = nullptr;
}

CNoeudBinaireEntier::CNoeudBinaireEntier(int iElement, CNoeudBinaireEntier * pNBEfGauche, CNoeudBinaireEntier * pNBEfDroit)
{
	iNBEElement = iElement;
	pNBEFilsGauche = pNBEfGauche;
	pNBEFilsDroit = pNBEfDroit;
}

CNoeudBinaireEntier::CNoeudBinaireEntier(const CNoeudBinaireEntier & NBEarbre)
{

	iNBEElement = NBEarbre.iNBEElement;
	
	if(NBEarbre.pNBEFilsGauche != nullptr)
	{
		pNBEFilsGauche = new CNoeudBinaireEntier(*NBEarbre.pNBEFilsGauche);
	}
	else
		pNBEFilsGauche = nullptr;
	
	if(NBEarbre.pNBEFilsDroit != nullptr)
	{
		pNBEFilsDroit = new CNoeudBinaireEntier(*NBEarbre.pNBEFilsDroit);
	}
	else
		pNBEFilsDroit = nullptr;
}

CNoeudBinaireEntier::~CNoeudBinaireEntier()
{

}

int CNoeudBinaireEntier::NBELireElement()
{
	return iNBEElement;
}
void CNoeudBinaireEntier::NBEModifierElement(int iValeur)
{

}
CNoeudBinaireEntier * CNoeudBinaireEntier::NBELireFilsGauche()
{
	return pNBEFilsGauche;
}
void CNoeudBinaireEntier::NBEModifierFGauche(CNoeudBinaireEntier * NBEarbre)
{

}
CNoeudBinaireEntier * CNoeudBinaireEntier::NBELireFilsDroit()
{
	return pNBEFilsDroit;
}

void CNoeudBinaireEntier::NBEModifierFDroit(CNoeudBinaireEntier * NBEarbre)
{

}
void CNoeudBinaireEntier::NBEViderArbre(CNoeudBinaireEntier & NBEarbre)
{

}

//Opérateurs
void CNoeudBinaireEntier::operator+(const CNoeudBinaireEntier & arbre)
{

}