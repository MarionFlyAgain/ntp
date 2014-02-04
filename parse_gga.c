#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
}

typdedef struct 
{
	int heure;
	int minute;
	int seconde;
	int mseconde;
} DATA_HEURE;

typdedef struct 
{
	char nom[10];
	DATA_HEURE trame_heure
	int nb_sat;
	int check_som;
} TRAME;


void parser(char *trame_GGA, TRAME *trame)
{
	char * token;
	int compt = 0;
	char *tab[14] = NULL;


	// détection du nom
	token = strtok (trame_GGA, ",");
	if (strcmp (token, "$GPGGA") != 0) return;
	trame->nom = "$GPGGA";

	// détection des autres paramètres
	while( compt<14 ) 
	{
		token = strtok( NULL, ",");
		tab[compt] = token;
		compt++;
	}
	
	// vérification de la tramimission
	


}
