#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,somme;
    printf("entrez la taille du tableau:");
    scanf("%d",&n);
    int tableau[n];
    for(i=0;i<n;i++){
            printf("element %d:",i+1);
            scanf("%d",&tableau[i]);
            somme+=tableau[i];
    }
    printf("la somme est:%d",somme);

    return 0;
}

