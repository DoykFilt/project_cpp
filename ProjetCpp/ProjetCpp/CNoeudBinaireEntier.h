#ifndef CNOEUDBINAIREENTIER
#define CNOEUDBINAIREENTIER

class CNoeudBinaireEntier
{
private :
	//Attributs
	int iNBEElement;
	CNoeudBinaireEntier * pNBEFilsGauche;
	CNoeudBinaireEntier * pNBEFilsDroit;
	
public :
	//Constructeurs / Destructeurs
	CNoeudBinaireEntier();
	CNoeudBinaireEntier(const CNoeudBinaireEntier  & NBEarbre);
	CNoeudBinaireEntier(int iElement);
	CNoeudBinaireEntier(int iElement, CNoeudBinaireEntier * pNBEfGauche, CNoeudBinaireEntier * pNBEfDroit);
	~CNoeudBinaireEntier();

	//Méthodes
	int NBELireElement();
	void NBEModifierElement(int iValeur);
	CNoeudBinaireEntier * NBELireFilsGauche();
	void NBEModifierFGauche(CNoeudBinaireEntier * NBEarbre);
	CNoeudBinaireEntier * NBELireFilsDroit();
	void NBEModifierFDroit(CNoeudBinaireEntier * NBEarbre);
};

#endif