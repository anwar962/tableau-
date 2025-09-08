#include <stdio.h>
#include <stdlib.h>

int main(){

int taille,i;
printf("entrez le nombre d'element du tableau:");
scanf("%d",&taille);
int tableau[taille];
for(i=0;i<taille;i++){

printf("entrez l'element %d:\n",i+1);
scanf("%d",&tableau[i]);
}
printf("les elements du tableau sont:%d\n");
for(i=0;i<taille;i++){
    printf("%d",tableau[i]);
}
printf("\n");
return 0;
}
