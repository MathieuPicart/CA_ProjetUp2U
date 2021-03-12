enum couleur {
    ROUGE = 1,
    VERT = 2,
    NOIR = 3,
    BLANC = 4,
};
typedef enum couleur couleur;

enum memoire {
    128 = 1,
    256 = 2,
    512 = 3,
};
typedef enum memoire memoire;

enum connectivite {
    4G = 1,
    5G = 2,
};
typedef enum connectivite connectivite;

struct appareil {
	char * nom;
	float prix;
	char * description;
};

struct date {
	int jour;
	int mois;
	int annee;
};

struct location {
	appareil appareil;
	couleur couleur;
	connectivite connectivite;
};

struct client {
    char * nom;
    char * prenom;
    char * login;
    char * mdp;
    char * adresse;
    char * coordonneeBanc;
}


program UP2USERVICE {
	version UP2USERVICE_V_1 {
		void INIT() = 1;
		historiqueCommande HISTORIQUE_COMMANDE(date) = 2;
        } = 1;
} = 0x23456789;