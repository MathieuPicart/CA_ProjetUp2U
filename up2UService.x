#define MAX 5

enum couleur { ROUGE, VERT, NOIR, BLANC };
typedef enum couleur couleur;

enum connectivite { G4, G5 };
typedef enum connectivite connectivite;

enum memoire { GO128, GO256, GO512 };
typedef enum memoire memoire;

struct date {
	int jour;
	int mois;
	int annee;
};

struct adresse {
	int numeroRue;
    int codePostal;
	char rue[30];
};

struct modele {
	char nom[15];
	float prix;
	char description[255];
};

struct appareil {
	modele modele;
	couleur couleur;
	connectivite connectivite;
    memoire memoire;
};

struct location {
    client client;
	appareil appareil;
    assurance assurance;
};

struct assurance {
	char titre[15];
	float prix;
	char description[255];
};

struct client {
    char nom[15];
    char prenom[15];
    adresse adresse;
    char coordonneeBanc[100];
};

struct clients {
    client clients[MAX];
    int nbClients;
};
  
struct assurances {
    assurance assurances[MAX];
    int nbAssurances;
} ;


struct p_create_client { char nom[15]; char prenom[15]; int numeroRue; int codePostal; char rue[30]; char coordonneeBanc[30]; };
struct p_set_client { int id; char nom[15]; char prenom[15]; adresse adresse; char coordonneeBanc[30]; };
struct p_params_mobile { couleur couleur; connectivite connectivite; memoire memoire; };
struct p_location_mobile { location location; appareil appareil; };
struct p_location_assurance {location location; assurance assurance; };
struct p_create_livraison {location location; date date;};


program UP2USERVICE {
	version UP2USERVICE_V_1 {
		void INIT() = 1;
        client CREATE_CLIENT(p_create_client) = 2;
        client SET_CLIENT(p_set_client) = 3;
        int INIT_LOCATION() = 4;
        clients GET_CLIENTS() = 5;
        client GET_CLIENT(int) = 6;
        location SET_LOCATION_CLIENT(client) = 7;
        mobile GET_MOBILES() = 8;
        p_params_mobile GET_MOBILE_PARAMS() = 9;
        p_params_mobile SET_PARAMS_MOBILE(p_params_mobile) = 10;
        location SET_LOCATION_MOBILE(p_location_mobile) = 11;
        assurances GET_ASSURANCES() = 12;
        location SET_LOCATION_ASSURANCES(p_location_assurance) = 13;
        p_create_livraison CREATE_LIVRAISON(p_create_livraison) = 14;
    } = 1;
} = 0x23456789;