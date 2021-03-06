/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "up2UService.h"

s_client listeClients[10];
int nb_clients = 0;

s_modele listeModeles[10];
int nb_modeles = 0;

s_assurance listeAssurances[10];
int nb_assurances = 0;

void *
init_1_svc(void *argp, struct svc_req *rqstp)
{
	printf("Initialisation du serveur\n");

	static char * result;

	strcpy(listeClients[0].nom, "PICART");
	strcpy(listeClients[0].prenom, "Mathieu");
	listeClients[0].adresse.codePostal = 29200;
	listeClients[0].adresse.numeroRue = 1;
	strcpy(listeClients[0].adresse.rue, "Rue de Roubaix");
	strcpy(listeClients[0].coordonneeBanc, "test");

	strcpy(listeClients[0].nom, "LE BEC");
	strcpy(listeClients[0].prenom, "Owen");
	listeClients[0].adresse.codePostal = 29200;
	listeClients[0].adresse.numeroRue = 1;
	strcpy(listeClients[0].adresse.rue, "Rue de Roubaix");
	strcpy(listeClients[0].coordonneeBanc, "test");
	
	nb_clients = 2;

	strcpy(listeModeles[0].nom, "Iphone X");
	strcpy(listeModeles[0].description, "Au top !");
	listeModeles[0].prix = 39.99;
	
	strcpy(listeModeles[1].nom, "Galaxy S20");
	strcpy(listeModeles[1].description, "Description...");
	listeModeles[1].prix = 37.88;
	
	strcpy(listeModeles[2].nom, "Galaxy S20+");
	strcpy(listeModeles[2].description, "Description...");
	listeModeles[2].prix = 42.04;
	
	nb_modeles = 3;

	strcpy(listeAssurances[0].titre, "Samsung Care+ Paiement Unique");
	strcpy(listeAssurances[0].description, "Description");
	listeAssurances[0].prix = 89.00;

	strcpy(listeAssurances[0].titre, "Samsung Care+ Souscription");
	strcpy(listeAssurances[0].description, "Description");
	listeAssurances[0].prix = 4.99;

	nb_assurances = 2;		

	return (void *) &result;
}

s_client *
create_client_1_svc(p_create_client *client, struct svc_req *rqstp)
{
	static s_client * newClient;

	strcpy(newClient->prenom, client->prenom);
    strcpy(newClient->nom, client->nom);
    strcpy(newClient->adresse.rue, client->rue);
    strcpy(newClient->adresse.numeroRue, client->numeroRue);
    strcpy(newClient->adresse.codePostal, client->codePostal);
    strcpy(newClient->coordonneeBanc, client->coordonneeBanc);

    listeClients[nb_clients] = *newClient;
    nb_clients++;

	return &newClient;
}

s_client *
set_client_1_svc(p_set_client *param, struct svc_req *rqstp)
{
//int id; char nom[15]; char prenom[15]; s_adresse adresse; char coordonneeBanc[30];

    static s_client uptClient;

    s_client client = listeClients[param->id];

    strcpy(uptClient.prenom, client.prenom);
    strcpy(uptClient.nom, client.nom);
    strcpy(uptClient.adresse.rue, client.adresse.rue);
	uptClient.adresse.numeroRue = client.adresse.numeroRue ;
	uptClient.adresse.codePostal = client.adresse.codePostal;
    strcpy(uptClient.coordonneeBanc, client.coordonneeBanc);

    client = uptClient;

	return &uptClient;
}

int *
init_location_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

s_clients *
get_clients_1_svc(void *argp, struct svc_req *rqstp)
{
	static s_clients  result;

	/*
	 * insert server code here
	 */

	return &result;
}

s_client *
get_client_1_svc(int *argp, struct svc_req *rqstp)
{
	static s_client  result;

	/*
	 * insert server code here
	 */

	return &result;
}

s_location *
set_location_client_1_svc(s_client *argp, struct svc_req *rqstp)
{
	static s_location  result;

	/*
	 * insert server code here
	 */

	return &result;
}

s_modele *
get_mobiles_1_svc(void *argp, struct svc_req *rqstp)
{
	static s_modele  result;

	/*
	 * insert server code here
	 */

	return &result;
}

p_params_mobile *
get_mobile_params_1_svc(void *argp, struct svc_req *rqstp)
{
	static p_params_mobile  result;

	/*
	 * insert server code here
	 */

	return &result;
}

p_params_mobile *
set_params_mobile_1_svc(p_params_mobile *argp, struct svc_req *rqstp)
{
	static p_params_mobile  result;

	/*
	 * insert server code here
	 */

	return &result;
}

s_location *
set_location_mobile_1_svc(p_location_mobile *argp, struct svc_req *rqstp)
{
	static s_location  result;

	/*
	 * insert server code here
	 */

	return &result;
}

s_assurances *
get_assurances_1_svc(void *argp, struct svc_req *rqstp)
{
	static s_assurances  result;

	/*
	 * insert server code here
	 */

	return &result;
}

s_location *
set_location_assurances_1_svc(p_location_assurance *argp, struct svc_req *rqstp)
{
	static s_location  result;

	/*
	 * insert server code here
	 */

	return &result;
}

p_create_livraison *
create_livraison_1_svc(p_create_livraison *argp, struct svc_req *rqstp)
{
	static p_create_livraison  result;

	/*
	 * insert server code here
	 */

	return &result;
}
