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
	int NBELireElement() const;
	void NBEModifierElement(int iValeur);
	CNoeudBinaireEntier * NBELireFilsGauche() const;
	void NBEModifierFGauche(CNoeudBinaireEntier * NBEarbre);
	CNoeudBinaireEntier * NBELireFilsDroit() const;
	void NBEModifierFDroit(CNoeudBinaireEntier * NBEarbre);

	//Operateurs
	CNoeudBinaireEntier & operator=(CNoeudBinaireEntier const & noeud);
};

#endif