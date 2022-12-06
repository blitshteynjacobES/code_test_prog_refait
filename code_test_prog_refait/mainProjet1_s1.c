/*
	proget							: code_test_prog_refait
	fichier							: mainProjet1_s1.c
--------------------------------------------------------------------------------------------------------------
	decription						: correction du test de prog
--------------------------------------------------------------------------------------------------------------
	nom d'auteur					: Philou (Ph. Bovey)
	date de cr�ation				: 21.10.2022
--------------------------------------------------------------------------------------------------------------
	date de derni�re modification	: 06.12.2022
	modifier par					: Jacob Blitshteyn
--------------------------------------------------------------------------------------------------------------
	remarque						: fishier mainProject_s1.c a �t� donner par le prof
*/

//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standart ---//
#include <stdio.h>                  // entr�e - sortie

//--- librairie perso ---//


//-- definition --// 
#define LIMITE_MAX	10000.0
#define LIMITE_MIN	-10000.0


//-- d�claration de constantes --// 
const char* ptNOM_CANDIDAT = "xxx"; 
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2022; 


//-- programme principal --// 
void main()
{
	//-- d�claration de variables locales --//
	float valUtilisateur; 

	//-- message utilisateur --// 
	printf("-- TEST n%02d - annee : %d - Nom Candidat : %s --\n", VERSION_PROJET, ANNEE_TEST, ptNOM_CANDIDAT); 
	
	//-- demander valeur � l'utilisateur --// 
	//-- si celle-ci n'est pas correct -> nouvelle demande --// 
	do
	{
		//-- messgae utilisateur --// 
		printf("\nEntrer une valeur entre -10000 et 10000 : "); 

		//-- r�cuperation valeur utilisateur --// 
		scanf("%f", &valUtilisateur); 

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

	} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX)); 

	//-- appel de fonction  : infoVariable 
	//-- une fois la fonction d�clar�e. d�commentez la ligne ci-dessous : 
	//InfoVariable(valUtilisateur); 
}