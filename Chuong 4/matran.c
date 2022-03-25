#include <stdio.h>
   
int main () {
    int i, j;
    int m, n;
     
    printf("Nhap so cot m cua ma tran: ");
    scanf("%d", &m);
    printf("Nhap so hang n cua ma tran: ");
    scanf("%d", &n);
     
    int a[m][n];
     
    printf("Nhap cac phan tu cua ma tran: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
 
    printf("Cac phan tu cua ma tran: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
    }
     
    return 0;
}