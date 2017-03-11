#include "CABREntier.h"

CABREntier::CABREntier() : CNoeudBinaireEntier(){}

CABREntier::CABREntier(CABREntier const & ABRarbre) : CNoeudBinaireEntier(ABRarbre){}

CABREntier::CABREntier(int iElement) : CNoeudBinaireEntier(iElement){}

CABREntier::~CABREntier(){}


void CABREntier::ABRAjouterElement(int iElement)
{
	CABREntier * pABRtemp;

	if(NBELireElement() <= iElement)
	{
		if(NBELireFilsDroit() == nullptr || NBELireFilsDroit()->NBELireElement() == iElement)
		{
			pABRtemp =  (CABREntier *)(new CNoeudBinaireEntier(iElement, nullptr, (CABREntier *)NBELireFilsDroit()));
			NBEModifierFDroit(pABRtemp);
		}
		else
			((CABREntier *)NBELireFilsDroit())->ABRAjouterElement(iElement);
	}
	else
	{
	if(NBELireFilsGauche() == nullptr || NBELireFilsGauche()->NBELireElement() == iElement)
	{
		pABRtemp =  (CABREntier *)(new CNoeudBinaireEntier(iElement, (CABREntier *)NBELireFilsGauche(), nullptr));
		NBEModifierFGauche(pABRtemp);
	}
	else
		((CABREntier *)NBELireFilsGauche())->ABRAjouterElement(iElement);
	}

}

void CABREntier::ABRSupprimerElement(int iElement)
{

}

void CABREntier::ABRViderArbre()
{

}

bool CABREntier::ABRRechercherElement(int iElement) const
{
	int iNoeudElement = NBELireElement();

	if(iElement == iNoeudElement)
		return true;
	else if(iElement < iNoeudElement && NBELireFilsGauche() != nullptr)
		return ((CABREntier *)NBELireFilsGauche())->ABRRechercherElement(iElement);
	else if(iElement > iNoeudElement && NBELireFilsDroit() != nullptr)
		return ((CABREntier *)NBELireFilsDroit())->ABRRechercherElement(iElement);
	else return false;
}