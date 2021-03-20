#define MAX 5

enum e_couleur { ROUGE, VERT, NOIR, BLANC };
typedef enum e_couleur couleur;

enum e_connectivite { G4, G5 };
typedef enum e_connectivite connectivite;

enum e_memoire { GO128, GO256, GO512 };
typedef enum e_memoire memoire;

enum e_mode_achat { location, achat };
typedef enum e_mode_achat mode_achat;

struct s_date { 
	int jour;
	int mois;
	int annee;
};

struct s_coord_bc {
    long int numero;
    int crypto;
    int mois;
    int annee;
};

struct s_adresse {
	int numeroRue;
    int codePostal;
	char rue[30];
};

struct s_modele {
    int id;
	char nom[15];
	float prix_achat;
    float prix_location;
	char description[255];
};

struct s_params_modele {
    int id_modele;
	e_couleur couleur;
	e_connectivite connectivite;
    e_memoire memoire;
    e_mode_achat mode_achat;
};

struct s_client {
    int id;
    char nom[15];
    char prenom[15];
    s_adresse adresse;
    s_coord_bc coord_bc;
};

struct s_assurance {
    int id;
	char titre[15];
	float prix;
	char description[255];
};

struct s_location {
    int id;
    int id_client; 
    int id_modele;
	int id_params_modele; 
    int id_assurance;
    int confirme;
    s_date date_livraison;
};


/* DEFINITION DES STRUCTS LISTES */

struct listeClients {
    s_client client[10];
    int nb_clients;
};

struct listeAssurances {
    s_assurance assurances[10];
    int nb_assurances;
};

struct listeModeles {
    s_modele modeles[10];
    int nb_modeles;
};

struct listeModelesParams {
    s_params_modele params_modele[10];
    int nb_modele_params;
};

/* DEFINITION DES PARAMETRES DE FONCTIONS */

struct p_create_client { 
    char nom[15]; 
    char prenom[15]; 
    s_adresse adresse; 
    s_coord_bc coord_bc; 
};

struct p_set_client { 
    int id; 
    char nom[15]; 
    char prenom[15]; 
    s_adresse adresse; 
    s_coord_bc coord_bc; 
};

struct p_location_client { 
    int id_location;
    int id_client; 
};

struct p_location_modele { 
    int id_location;
    int id_modele; 
};

struct p_location_params_modele { 
    int id_location;
    s_params_modele params_modele; 
};

struct p_location_assurance { 
    int id_location;
    int id_assurance;
};

struct p_location_date { 
    int id_location;
    s_date date_livraison;
};

program UP2USERVICE {
	version UP2USERVICE_V_1 {
		void INIT() = 1;
        int CREATE_CLIENT(p_create_client) = 2;
        int SET_CLIENT(p_set_client) = 3; 
        listeClients GET_CLIENTS() = 4;
        int SET_LOCATION_CLIENT(p_location_client) = 5;
        listeModeles GET_MODELES() = 6;
        int SET_LOCATION_MODELE(p_location_modele) = 7; 
        listeModelesParams GET_MODELE_PARAMS(int) = 8;
        int SET_LOCATION_MODELE_PARAMS(p_location_params_modele) = 9; 
        listeAssurances GET_ASSURANCES() = 10;
        int SET_LOCATION_ASSURANCE(p_location_assurance) = 11; 
        int SET_LOCATION_DATE(p_location_date) = 12;
        int CONFIRMER_LOCATION(int) = 13;
    } = 1;
} = 0x23456789;