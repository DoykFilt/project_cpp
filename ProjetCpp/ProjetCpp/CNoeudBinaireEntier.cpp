#include "CNoeudBinaireEntier.h"

/******************************************************************************
Constructeur par défaut
*******************************************************************************
	Entrée : Rien
	Necessité : Néant
	Sortie : Rien
	Entraine : L'objet en cours est initilisé
******************************************************************************/
CNoeudBinaireEntier::CNoeudBinaireEntier()
{
	iNBEElement = 0;
	pNBEFilsGauche = nullptr;
	pNBEFilsDroit = nullptr;
}

/******************************************************************************
Constructeur de confort
*******************************************************************************
	Entrée : Entier du noeud
	Necessité : Néant
	Sortie : Rien
	Entraine : L'objet en cours est initilisé
******************************************************************************/
CNoeudBinaireEntier::CNoeudBinaireEntier(int iElement)
{
	iNBEElement = iElement;
	pNBEFilsGauche = nullptr;
	pNBEFilsDroit = nullptr;
}

/******************************************************************************
Constructeur de confort
*******************************************************************************
	Entrée : Entier du noeud et les deux pointeurs fils
	Necessité : Néant
	Sortie : Rien
	Entraine : L'objet en cours est initilisé 
******************************************************************************/
CNoeudBinaireEntier::CNoeudBinaireEntier(int iElement, CNoeudBinaireEntier * pNBEfGauche, CNoeudBinaireEntier * pNBEfDroit)
{
	iNBEElement = iElement;
	pNBEFilsGauche = pNBEfGauche;
	pNBEFilsDroit = pNBEfDroit;
}

/******************************************************************************
Constructeur de recopie
*******************************************************************************
	Entrée : Le noeud à recopier
	Necessité : Néant
	Sortie : Rien
	Entraine : L'objet en cours est initilisé
******************************************************************************/
CNoeudBinaireEntier::CNoeudBinaireEntier(CNoeudBinaireEntier const & NBEarbre)
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

/******************************************************************************
Destructeur
*******************************************************************************
	Entrée : Rien
	Necessité : Les arbres que le noeud relie sont désalloué
	Sortie : Rien
	Entraine : Néant
******************************************************************************/
CNoeudBinaireEntier::~CNoeudBinaireEntier()
{

}

/******************************************************************************
Getteur de la valeur
*******************************************************************************
	Entrée : Rien
	Necessité : Néant
	Sortie : Valeur contenu dans le noeud
	Entraine : Néant
******************************************************************************/
inline int CNoeudBinaireEntier::NBELireElement() const
{
	return iNBEElement;
}

/******************************************************************************
Setteur de la valeur
*******************************************************************************
	Entrée : Entier
	Necessité : Néant
	Sortie : Rien
	Entraine : Modification de la valeur.
******************************************************************************/
inline void CNoeudBinaireEntier::NBEModifierElement(int iValeur)
{
	iNBEElement = iValeur;
}

/******************************************************************************
Getteur du fils gauche
*******************************************************************************
	Entrée : Rien
	Necessité : Néant
	Sortie : pointeur CNoeudBianireEntier sur le fils gauche
	Entraine : Néant
******************************************************************************/
inline CNoeudBinaireEntier * CNoeudBinaireEntier::NBELireFilsGauche() const
{
	return pNBEFilsGauche;
}

/******************************************************************************
Setteur du fils gauche
*******************************************************************************
	Entrée : pointeur sur un CNoeudBinaireEntier
	Necessité : Néant
	Sortie : Rien
	Entraine : Néant
******************************************************************************/
inline void CNoeudBinaireEntier::NBEModifierFGauche(CNoeudBinaireEntier * NBEarbre)
{
	pNBEFilsGauche = NBEarbre;
}

/******************************************************************************
Getteur du fils Droit
*******************************************************************************
	Entrée : Rien
	Necessité : Néant
	Sortie : pointeur CNoeudBinaireEntier sur le fils droit
	Entraine : Néant
******************************************************************************/
inline CNoeudBinaireEntier * CNoeudBinaireEntier::NBELireFilsDroit() const
{
	return pNBEFilsDroit;
}

/******************************************************************************
Setteur du fils Droit
*******************************************************************************
	Entrée : pointeur CNoeudBinaireEntier
	Necessité : Néant
	Sortie : Rien
	Entraine : Néant
******************************************************************************/
inline void CNoeudBinaireEntier::NBEModifierFDroit(CNoeudBinaireEntier * NBEarbre)
{
	pNBEFilsDroit = NBEarbre;
}

/******************************************************************************
Surcharge de l'operateur =
*******************************************************************************
	Entrée : Référence sur un CNoeurBinaireEntier
	Necessité : Néant
	Sortie : Référence sur un CNoeurBinaireEntier
	Entraine : Un nouvel objet CNoeudBinaireEntier a été créé
******************************************************************************/
inline CNoeudBinaireEntier & CNoeudBinaireEntier::operator=(CNoeudBinaireEntier const & noeud)
{
	return *(new CNoeudBinaireEntier(noeud));
}