#include "Cexception.h"

//Constructeurs et destructeurs
Cexception::Cexception()
{
	uiEXCValeur = ERREUR_DEFAUT;
}

Cexception::Cexception(unsigned int uiValeur, string sMessage)
{
	uiEXCValeur = uiValeur;
}

Cexception::Cexception(const Cexception & EXCObjet)
{
	uiEXCValeur = EXCObjet.uiEXCValeur;
}

Cexception::~Cexception()
{}


//Methodes
unsigned int Cexception::EXCLire_Valeur()
{
	return uiEXCValeur;
}

void Cexception::EXCModifier_Valeur(unsigned int uiValeur)
{
	uiEXCValeur = uiValeur;
}

