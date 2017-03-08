#ifndef CABRENTIER
#define CABRENTIER

#include "CNoeudBinaireEntier.h"


class CABREntier : protected CNoeudBinaireEntier
{
public :
	//Constructeurs - Destructeur
	CABREntier();
	CABREntier(CABREntier const & ABRarbre);
	CABREntier(int iElement);
	~CABREntier();

	//M�thodes
	void ABRAjouterElement(int iElement);
	void ABRSupprimerElement(int iElement);

	void ABRViderArbre();

	bool ABRRechercherElement(int iElement);
};

#endif