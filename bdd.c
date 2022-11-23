#include <stdlib.h>
#include <stdio.h>
#include "structure.h"
#include <time.h>

int main(void)
{  
    srand(time(NULL));
    avion a;
    for(i=0;i<50;i++)
    {
        a.identifiant=i;
        int r=rand() % 3;
        switch(r)
        {
            case 0:
                a.categorie_avion=avions_de_ligne;
                r2= 80 + rand() % 71; 
                break;
            
            case 1:
                a.categorie_avion=avions_daffaires;
                r2= 40 + rand() % 41; 

            case 2:
                a.categorie_avion=avions_legers;
                r2= 1 + rand() % 4; 

        }
        int r3 = rand() %  2;
        a.etat=r3;
            
    }
    return 0;
}