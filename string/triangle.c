#include <stdio.h>
int main()
{
    int x;
    int i = 1;
    int j = 0;
    int k;
    int t = 0;

    printf("entrer x: ");
    scanf("%d", &x);

    while (i <= x){
        j = 0;
        t = 0;
        if (i % 2 != 0) {
            k = (x - i) / 2;
            while (t < k){
                printf(" ");
                t++;
            }
            while (j < i){
                printf("*");
                j++;
            }
            printf("\n");
        }
        i++;
    }
}