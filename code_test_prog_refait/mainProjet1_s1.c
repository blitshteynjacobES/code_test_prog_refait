/*
	proget							: code_test_prog_refait
	fichier							: mainProjet1_s1.c
--------------------------------------------------------------------------------------------------------------
	decription						: correction du test de prog
--------------------------------------------------------------------------------------------------------------
	nom d'auteur					: Philou (Ph. Bovey)
	date de création				: 21.10.2022
--------------------------------------------------------------------------------------------------------------
	date de dernière modification	: 06.12.2022
	modifier par					: Jacob Blitshteyn
--------------------------------------------------------------------------------------------------------------
	remarque						: fishier mainProject_s1.c a été donner par le prof
*/

//-- directive préprocesseur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie

//--- librairie perso ---//


//-- definition --// 
#define LIMITE_MAX	10000.0
#define LIMITE_MIN	-10000.0


//-- déclaration de constantes --// 
const char* ptNOM_CANDIDAT = "xxx"; 
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2022; 


//-- programme principal --// 
void main()
{
	//-- déclaration de variables locales --//
	float valUtilisateur; 

	//-- message utilisateur --// 
	printf("-- TEST n%02d - annee : %d - Nom Candidat : %s --\n", VERSION_PROJET, ANNEE_TEST, ptNOM_CANDIDAT); 
	
	//-- demander valeur à l'utilisateur --// 
	//-- si celle-ci n'est pas correct -> nouvelle demande --// 
	do
	{
		//-- messgae utilisateur --// 
		printf("\nEntrer une valeur entre -10000 et 10000 : "); 

		//-- récuperation valeur utilisateur --// 
		scanf("%f", &valUtilisateur); 

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

	} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX)); 

	//-- appel de fonction  : infoVariable 
	//-- une fois la fonction déclarée. décommentez la ligne ci-dessous : 
	//InfoVariable(valUtilisateur); 
}