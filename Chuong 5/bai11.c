#include <stdio.h>
int main(){
    int i, j;
    int count = 0;
    for (i = 0; i <= 40; ++i)
        for (j = 0; j <= 100; ++j)
            if (5*i + 2*j <= 200)
            {
                printf(" So to 5000, 2000 va 1000 la: %d, %d, %d", i, j, 200 - 5*i - 2*j);
                printf("\n");
                count++;
            }
        printf("\n");
}