#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char imie[25];
    unsigned char wiek; // 0-255
}osoba;


int main()
{
    osoba tab[5];
    int i;
    
    for (i=0;i<5;i++)
    {
        scanf("%s %d",tab[i].imie, (int*)&tab[i].wiek);
    }
    
    for (i=0;i<5;i++)
    {
        printf("%s %d\n",tab[i].imie, tab[i].wiek);
    }
   
    
    
    osoba *dyn=malloc(5*sizeof(osoba));
    for (i=0;i<5;i++)
    {
        scanf("%s %d",dyn[i].imie, (int*)&dyn[i].wiek);
    }
    
    for (i=0;i<5;i++)
    {
        printf("%s %d\n",dyn[i].imie, dyn[i].wiek);
    }
    
    //tablica wskaznikow na struktry
    osoba **dyn2=malloc(5*sizeof(osoba*));
    for (i=0;i<5;i++)
    {
        dyn2[i]=malloc(sizeof(osoba));
        scanf("%s %d",dyn2[i]->imie, (int*)&dyn2[i]->wiek);
    }
    
    for (i=0;i<5;i++)
    {
        printf("%s %d\n",dyn2[i]->imie, dyn2[i]->wiek);
    }
    
    
    
    return 0;
}
