#ifndef CEXCEPTION
#define CEXCEPTION 1

#include <string>
using namespace std;

#define ERREUR_DEFAUT 0
#define MESSAGE_DEFAUT "Message defaut"

class Cexception
{
private :

	//Attributs
	unsigned int uiEXCValeur;
	string sEXCMessage;

public :

	//Constructeurs et destructeurs
	Cexception(); 
	Cexception(unsigned int uiValeur, string sMessage);
	Cexception(const Cexception & EXCObjet);
	~Cexception();

	//Methodes
	unsigned int EXCLire_Valeur();
	void EXCModifier_Valeur(unsigned int uiValeur);
	string EXCLire_Message();
	void EXCModifier_Message(string sMessage);

};

#endif