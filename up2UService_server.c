/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "up2UService.h"

void *
init_1_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}

s_client *
create_client_1_svc(p_create_client *client, struct svc_req *rqstp)
{
	static s_client newClient;

	strcpy(client.prenom, newClient->prenom);
    strcpy(client.nom, newClient->nom);
    strcpy(client.adresse.rue, newClient->adresse.rue);
    strcpy(client.adresse.numeroRue, newClient->adresse.numeroRue);
    strcpy(client.adresse.codePostal, newClient->adresse.codePostal);
    strcpy(client.coordonneeBanc, newClient->coordonneeBanc);

    listeClients.clients[listeClients.nbClients] = client;
    listeClients.nbClients++;

	return &newClient;
}

s_client *
set_client_1_svc(p_set_client *param, struct svc_req *rqstp)
{
//int id; char nom[15]; char prenom[15]; s_adresse adresse; char coordonneeBanc[30];

    static s_client uptClient;

    s_client client = listeClients[param.id];

    strcpy(client.prenom, uptClient->prenom);
    strcpy(client.nom, uptClient->nom);
    strcpy(client.adresse, uptClient->adresse.rue);
    strcpy(client.coordonneeBanc, uptClient->coordonneeBanc);

    client = uptClient;

	return uptClient;
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

clients *
get_clients_1_svc(void *argp, struct svc_req *rqstp)
{
	static clients  result;

	/*
	 * insert server code here
	 */

	return &result;
}

client *
get_client_1_svc(int *argp, struct svc_req *rqstp)
{
	static client  result;

	/*
	 * insert server code here
	 */

	return &result;
}

location *
set_location_client_1_svc(client *argp, struct svc_req *rqstp)
{
	static location  result;

	/*
	 * insert server code here
	 */

	return &result;
}

mobile *
get_mobiles_1_svc(void *argp, struct svc_req *rqstp)
{
	static mobile  result;

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

location *
set_location_mobile_1_svc(p_location_mobile *argp, struct svc_req *rqstp)
{
	static location  result;

	/*
	 * insert server code here
	 */

	return &result;
}

assurances *
get_assurances_1_svc(void *argp, struct svc_req *rqstp)
{
	static assurances  result;

	/*
	 * insert server code here
	 */

	return &result;
}

location *
set_location_assurances_1_svc(p_location_assurance *argp, struct svc_req *rqstp)
{
	static location  result;

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
