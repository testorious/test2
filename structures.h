typedef struct Coordonnees Coordonnees;
struct Coordonnees
    {
        int varx;
        int vary;
    };

typedef struct Personne Personne;
struct Personne
    {
        char nom[100];
        char prenom[100];
        char adresse[1000];

        int age;
        int garcon; //booléen : 1=garçon    0=fille
    };
