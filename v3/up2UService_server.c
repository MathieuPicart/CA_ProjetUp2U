/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "up2UService.h"


s_client liste_clients[10];
int nb_clients = 0;

s_modele liste_modeles[10];
int nb_modeles = 0;

s_assurance liste_assurances[10];
int nb_assurances = 0;

void *
init_1_svc(void *argp, struct svc_req *rqstp)
{
	printf("Initialisation du serveur\n");

	static char * result;

	liste_clients[0].id = 0;
	strcpy(liste_clients[0].nom, "PICART");
	strcpy(liste_clients[0].prenom, "Mathieu");
	liste_clients[0].adresse.codePostal = 29200;
	liste_clients[0].adresse.numeroRue = 1;
	strcpy(liste_clients[0].adresse.rue, "Rue de Roubaix");
	liste_clients[0].coord_bc.numero = 5412333356766930;
	liste_clients[0].coord_bc.crypto = 654;
	liste_clients[0].coord_bc.mois = 11;
	liste_clients[0].coord_bc.annee = 2023;


	liste_clients[1].id = 1;
	strcpy(liste_clients[1].nom, "LE BEC");
	strcpy(liste_clients[1].prenom, "Owen");
	liste_clients[1].adresse.codePostal = 29390;
	liste_clients[1].adresse.numeroRue = 18;
	strcpy(liste_clients[1].adresse.rue, "Rue de pont cadiou");
	liste_clients[1].coord_bc.numero = 5412246356766930;
	liste_clients[1].coord_bc.crypto = 667;
	liste_clients[1].coord_bc.mois = 10;
	liste_clients[1].coord_bc.annee = 2022;
	
	nb_clients = 2;

	strcpy(liste_modeles[0].nom, "Samsung S20 FE");
	strcpy(liste_modeles[0].description, "Au top !");
	liste_modeles[0].prix_location = 25.34;
	liste_modeles[0].prix_achat = 659.00;
	
	strcpy(liste_modeles[1].nom, "Galaxy S20");
	strcpy(liste_modeles[1].description, "Description...");
	liste_modeles[1].prix_location = 37.88;
	liste_modeles[1].prix_achat = 909.00;
	
	strcpy(liste_modeles[2].nom, "Galaxy S20+");
	strcpy(liste_modeles[2].description, "Description...");
	liste_modeles[2].prix_location = 42.04;
	liste_modeles[2].prix_achat = 1009.00;

	nb_modeles = 3;

	strcpy(liste_assurances[0].titre, "Samsung Care+ Paiement Unique");
	strcpy(liste_assurances[0].description, "Description");
	liste_assurances[0].prix = 89.00;

	strcpy(liste_assurances[0].titre, "Samsung Care+ Souscription");
	strcpy(liste_assurances[0].description, "Description");
	liste_assurances[0].prix = 4.99;

	nb_assurances = 2;		

	printf("Initialisation du serveur terminée\n");

	return (void *) &result;
}

int *
create_client_1_svc(p_create_client *client, struct svc_req *rqstp)
{
	static int result = 1;

	printf("Debut Creation Client\n");

	s_client newClient;

	newClient.id = nb_clients;
	strcpy(newClient.prenom, client->prenom);
    strcpy(newClient.nom, client->nom);
    strcpy(newClient.adresse.rue, client->adresse.rue);
    newClient.adresse.numeroRue = client->adresse.numeroRue;
   	newClient.adresse.codePostal = client->adresse.codePostal;
    newClient.coord_bc.numero = client->coord_bc.numero;
	newClient.coord_bc.crypto = client->coord_bc.crypto;
	newClient.coord_bc.mois = client->coord_bc.mois;
	newClient.coord_bc.annee = client->coord_bc.annee;

    liste_clients[nb_clients] = newClient;
    nb_clients++;

	printf("Client créé et ajouté\n");		

	result = 0;

	return &result;
}

int *
set_client_1_svc(p_set_client *param, struct svc_req *rqstp)
{
	static int result = 1;

	printf("Debut Modification Client\n");

	s_client newClient;

	newClient.id = param->id;
	s_client client = liste_clients[param->id];
	
	strcpy(newClient.prenom, client.prenom);
    strcpy(newClient.nom, client.nom);
    strcpy(newClient.adresse.rue, client.adresse.rue);
    newClient.adresse.numeroRue = client.adresse.numeroRue;
   	newClient.adresse.codePostal = client.adresse.codePostal;
    newClient.coord_bc.numero = client.coord_bc.numero;
	newClient.coord_bc.crypto = client.coord_bc.crypto;
	newClient.coord_bc.mois = client.coord_bc.mois;
	newClient.coord_bc.annee = client.coord_bc.annee;   

	printf("Client modifié\n");
	
	result = 0;

	return &result;
}

listeClients *
get_clients_1_svc(void *argp, struct svc_req *rqstp)
{
	static listeClients  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
set_location_client_1_svc(p_location_client *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

listeModeles *
get_modeles_1_svc(void *argp, struct svc_req *rqstp)
{
	static listeModeles  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
set_location_modele_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

listeModelesParams *
get_modele_params_1_svc(int *argp, struct svc_req *rqstp)
{
	static listeModelesParams  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
set_location_modele_params_1_svc(p_location_params_modele *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

listeAssurances *
get_assurances_1_svc(void *argp, struct svc_req *rqstp)
{
	static listeAssurances  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
set_location_assurance_1_svc(p_location_assurance *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
set_location_date_1_svc(p_location_date *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
confirmer_location_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}
