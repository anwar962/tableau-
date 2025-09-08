#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n , j;

    printf("entrez la tailee du tableau :");
    scanf("%d" , &n);
       int tableau[n] ;
    for(int i = 0 ; i < n ; i++){
        printf("entrez les elements du tableau :");
        scanf("%d" , &tableau[i]);

    }

    for (int i = 0; i < n - 1; i++) {

        for(int j = 0 ; j < n - 1 ; j++)
        {
            if(tableau[j] > tableau[j+1]){
                int s = tableau[j] ;
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = s ;
            }
        }

     }
     for(int i = 0 ; i < n ; i++){
        printf("%d" , tableau[i]);
     }

    return 0;
 }

