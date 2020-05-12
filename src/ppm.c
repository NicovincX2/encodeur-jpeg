#include "../include/ppm.h"

image_ppm* lire_ppm(char* nom_fichier) {
	/*Ouverture du fichier*/
	FILE* fichier_ppm = fopen(nom_fichier, "r");
	if (fichier_ppm == NULL) {
		printf("ERREUR : Pointeur NULL dans lire_ppm()\n");
		exit(EXIT_FAILURE);
	}

	image_ppm* image = (image_ppm*) malloc(sizeof(image_ppm));

	/*Parsing en-tete*/
	fscanf(fichier_ppm, "%s", image->mode);
	fscanf(fichier_ppm, "%d", &image->largeur);
	fscanf(fichier_ppm, "%d", &image->hauteur);
	fscanf(fichier_ppm, "%d", &image->nb_couleurs);

	/*Initialisation de la matrice*/
	image->matrice = (triplet_rgb**) malloc(image->hauteur * sizeof(triplet_rgb*));
	for (uint32_t i = 0; i < image->hauteur; i++) {
		image->matrice[i] = (triplet_rgb*) malloc(image->largeur * sizeof(triplet_rgb));
	}

	uint8_t octet;
	fread(&octet, sizeof(uint8_t), 1, fichier_ppm); /*Parsing \n*/

	/*Remplissage de la matrice
	 *Remarque : on fait le choix de ne pas traiter les if dans une seule double boucle
	 *pour éviter les if à répétition
	 */
	if (!strcmp(image->mode, "P5")) {
		for (uint32_t i = 0; i < image->hauteur; i++) {
			for (uint32_t j = 0; j < image->largeur; j++) {
				fread(&octet, sizeof(uint8_t), 1, fichier_ppm);
				image->matrice[i][j].triplet[R] = octet;
				image->matrice[i][j].triplet[G] = octet;
				image->matrice[i][j].triplet[B] = octet;
			}
		}
	}
	else {
		for (uint32_t i = 0; i < image->hauteur; i++) {
			for (uint32_t j = 0; j < image->largeur; j++) {
				fread(&image->matrice[i][j].triplet[R], sizeof(uint8_t), 1, fichier_ppm);
				fread(&image->matrice[i][j].triplet[G], sizeof(uint8_t), 1, fichier_ppm);
				fread(&image->matrice[i][j].triplet[B], sizeof(uint8_t), 1, fichier_ppm);
			}
		}
	}
	
	return image;	
}

void afficher_image(image_ppm* image) {
	printf("Affichage des pixels\n");
	for (uint32_t i = 0; i < image->hauteur; i++) {
		for (uint32_t j = 0; j < image->largeur; j++) {
			printf("%d %d %d\n", image->matrice[i][j].triplet[R],
								 image->matrice[i][j].triplet[G],
								 image->matrice[i][j].triplet[B]);
		}
	}
}

