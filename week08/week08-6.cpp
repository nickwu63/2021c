#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");

    int n=4;
    for(int i=1;i<=n;i++){
        printf("%d: ", i);///ÆN¬[¡Ai¼h¼Ó
        ///i¼h¼Ó,¦³iÁû¬P
        for(int k=1; k<=i; k++) printf("*");

        printf("\n");
    }
}

