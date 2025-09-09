#include <stdio.h>
#include <stdlib.h>

int main(){


 int n,i;

    printf("entrez la taille du tableau1 :");
    scanf("%d",&n);
int tableau1[n];
    for(int i = 0 ; i < n ; i++){
        printf("entrez les elements du tableau1 :");
        printf("tableau1[%d]= ",i+1);
        scanf("%d" , &tableau1[i]);


}
int tableau2[i];
for (i=0;i<n;i++)
{
    tableau2[i]=tableau1[n-i-1];
}
printf("les elements du tableau2 est:%d",i+1,tableau2[i]);

return 0;
}
