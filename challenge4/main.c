#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, max,i;
    printf("entrez la taille du tableau:");
    scanf("%d",&n);
    int tableau[n];
    printf("entrez les elements du tableau:\n");
    for(i=0;i< n;i++){
        printf("element %d:",i+1);
        scanf("%d",&tableau[i]);
    }

        max=tableau[0];
    for(i=0;i < n;i++){
        if(tableau[i]>max)
            max=tableau[i];
            }


    printf("l element le plus grand du tableau est: %d ",max);
    return 0;
}
