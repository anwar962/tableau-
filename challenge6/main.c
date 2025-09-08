#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, min,i;
    printf("entrez la taille du tableau:");
    scanf("%d",&n);
    int tableau[n];
    printf("entrez les elements du tableau:\n");
    for(i=0;i< n;i++){
        printf("element %d:",i+1);
        scanf("%d",&tableau[i]);
    }

        min=tableau[0];
    for(i=0;i < n;i++){
        if(min<tableau[i])
            min=tableau[i];
            }


    printf("l element le min du tableau est: %d ",min);
    return 0;
}
