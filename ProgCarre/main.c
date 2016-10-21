#include <stdio.h>
#include <stdlib.h>

int main()
{
int l;
int L;
int a;
int b;

printf("Entrez la largeur l\n");
scanf("%d",&l);
printf("Entrez la longueur L\n");
scanf("%d",&L);

for(a=1;a<=l;a++){

    for(b=1;b<=L;b++){

        if (a==1 || a==l || b==1 || b==L)
            printf("*");
        else
            printf("+");
            }
    printf("\n");
}

return 0;

}
