#include <stdio.h>
#include <stdlib.>

enum categorie_avion
{
    avions_de_ligne,
    avions_daffaires,
    avions_legers
}

enum categorie_piste
{
    moyenne,
    grande,
    petite
}

typedef struct avion
{
    int identifiant;
    int categorie_avion;
    int etat;
    int nb_passager;
}

typedef struct attente attente;
struct attente
{
    avion avion;
    avion *suivant;
}

typedef struct piste
{
    int nb_piste;
    int longueur;
    int categorie_piste
    int nb_att_max;
    attente* attente
}




