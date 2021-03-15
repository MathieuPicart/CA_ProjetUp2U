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
	char * rue;
};

struct modele {
	char * nom;
	float prix;
	char * description;
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
	char * titre;
	float prix;
	char * description;
};

struct client {
    char * nom;
    char * prenom;
    char * login;
    char * mdp;
    adresse adresse;
    char * coordonneeBanc;
}

typedef struct mobile liste_mobiles[nbMaxMobiles];
typedef struct assurance liste_assurances[nbMaxAssurances];
typedef struct commande liste_commandes[nbMaxCommandes];


program UP2USERVICE {
	version UP2USERVICE_V_1 {
		void INIT() = 1;
        int CREATE_CLIENT(client) = 2;
        int SET_CLIENT(int, client) = 3;
        int INIT_LOCATION() = 4;
        int GET_CLIENTS() = 5;
        int SET_LOCATION_CLIENT(client) = 6;
        int GET_MOBILES() = 7;
        int GET_MOBILE_PARAMS(mobile) = 8;
        int SET_PARAMS_MOBILE() = 9;
        int SET_LOCATION_MOBILE(mobile) = 10;
        int GET_ASSURANCES() = 11;
        int SET_LOCATION_ASSURANCES() = 12;
        int CREATE_LIVRAISON(location) = 13;
    } = 1;
} = 0x23456789;