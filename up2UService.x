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
	char[30] rue;
};

struct modele {
	char[15] nom;
	float prix;
	char[255] description;
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
	char[15] titre;
	float prix;
	char[255] description;
};

struct client {
    char[15] nom;
    char[15] prenom;
    adresse adresse;
    char[100] coordonneeBanc;
}


struct p_create_client { char[15] nom; char[15] prenom; adresse adresse; char[30] coordonneeBanc; };
struct p_set_client { int id; char[15] nom; char[15] prenom; adresse adresse; char[30] coordonneeBanc; };
struct p_params_mobile { couleur couleur; connectivite connectivite; memoire memoire; };
struct p_location_mobile { couleur couleur; connectivite connectivite; memoire memoire; };


program UP2USERVICE {
	version UP2USERVICE_V_1 {
		void INIT() = 1;
        int CREATE_CLIENT(p_create_client) = 2;
        int SET_CLIENT(p_set_client) = 3;
        int INIT_LOCATION() = 4;
        int GET_CLIENTS() = 5;
        client GET_CLIENT(int) = 6;
        int SET_LOCATION_CLIENT(client) = 7;
        int GET_MOBILES() = 8;
        int GET_MOBILE_PARAMS() = 9;
        int SET_PARAMS_MOBILE(p_params_mobile) = 10;
        int SET_LOCATION_MOBILE(mobile) = 11;
        int GET_ASSURANCES() = 12;
        int SET_LOCATION_ASSURANCES() = 13;
        int CREATE_LIVRAISON(location) = 14;
    } = 1;
} = 0x23456789;