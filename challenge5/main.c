#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
int facteur;
printf("entrez la taille du tableau:");
scanf("%d",&n);
int tableau[n];
printf("entrez les elements du tableau:");
for(i=0;i<n;i++){
    printf("element %d:",i+1);
    scanf("%d",&tableau[i]);
}
printf("entrez le facteur de multiplication:");
scanf("%d",&facteur);
for(i=0;i<n;i++){
    tableau[i]=facteur*tableau[i];
}
printf("le tableau resultant apres la multiplication:\n");
for(i=0;i<n;i++){
    printf("l'element %d " , tableau[i]);
}
return 0;
}




