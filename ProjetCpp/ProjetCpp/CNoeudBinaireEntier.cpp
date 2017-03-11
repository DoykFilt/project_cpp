#include "CNoeudBinaireEntier.h"

/******************************************************************************
Constructeur par d�faut
*******************************************************************************
	Entr�e : Rien
	Necessit� : N�ant
	Sortie : Rien
	Entraine : L'objet en cours est initilis�
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
	Entr�e : Entier du noeud
	Necessit� : N�ant
	Sortie : Rien
	Entraine : L'objet en cours est initilis�
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
	Entr�e : Entier du noeud et les deux pointeurs fils
	Necessit� : N�ant
	Sortie : Rien
	Entraine : L'objet en cours est initilis� 
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
	Entr�e : Le noeud � recopier
	Necessit� : N�ant
	Sortie : Rien
	Entraine : L'objet en cours est initilis�
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
	Entr�e : Rien
	Necessit� : Les arbres que le noeud relie sont d�sallou�
	Sortie : Rien
	Entraine : N�ant
******************************************************************************/
CNoeudBinaireEntier::~CNoeudBinaireEntier()
{

}

/******************************************************************************
Getteur de la valeur
*******************************************************************************
	Entr�e : Rien
	Necessit� : N�ant
	Sortie : Valeur contenu dans le noeud
	Entraine : N�ant
******************************************************************************/
inline int CNoeudBinaireEntier::NBELireElement() const
{
	return iNBEElement;
}

/******************************************************************************
Setteur de la valeur
*******************************************************************************
	Entr�e : Entier
	Necessit� : N�ant
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
	Entr�e : Rien
	Necessit� : N�ant
	Sortie : pointeur CNoeudBianireEntier sur le fils gauche
	Entraine : N�ant
******************************************************************************/
inline CNoeudBinaireEntier * CNoeudBinaireEntier::NBELireFilsGauche() const
{
	return pNBEFilsGauche;
}

/******************************************************************************
Setteur du fils gauche
*******************************************************************************
	Entr�e : pointeur sur un CNoeudBinaireEntier
	Necessit� : N�ant
	Sortie : Rien
	Entraine : N�ant
******************************************************************************/
inline void CNoeudBinaireEntier::NBEModifierFGauche(CNoeudBinaireEntier * NBEarbre)
{
	pNBEFilsGauche = NBEarbre;
}

/******************************************************************************
Getteur du fils Droit
*******************************************************************************
	Entr�e : Rien
	Necessit� : N�ant
	Sortie : pointeur CNoeudBinaireEntier sur le fils droit
	Entraine : N�ant
******************************************************************************/
inline CNoeudBinaireEntier * CNoeudBinaireEntier::NBELireFilsDroit() const
{
	return pNBEFilsDroit;
}

/******************************************************************************
Setteur du fils Droit
*******************************************************************************
	Entr�e : pointeur CNoeudBinaireEntier
	Necessit� : N�ant
	Sortie : Rien
	Entraine : N�ant
******************************************************************************/
inline void CNoeudBinaireEntier::NBEModifierFDroit(CNoeudBinaireEntier * NBEarbre)
{
	pNBEFilsDroit = NBEarbre;
}

/******************************************************************************
Surcharge de l'operateur =
*******************************************************************************
	Entr�e : R�f�rence sur un CNoeurBinaireEntier
	Necessit� : N�ant
	Sortie : R�f�rence sur un CNoeurBinaireEntier
	Entraine : Un nouvel objet CNoeudBinaireEntier a �t� cr��
******************************************************************************/
inline CNoeudBinaireEntier & CNoeudBinaireEntier::operator=(CNoeudBinaireEntier const & noeud)
{
	return *(new CNoeudBinaireEntier(noeud));
}