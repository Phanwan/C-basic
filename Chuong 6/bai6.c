#include<stdio.h>
#include<math.h>

int main()
{
	float a[10][10], x[10], alp;
	int i, j, k , n ;
	
	printf("Nhap so phan tu cua ma tran A: \n");
	scanf("%d", &n);
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f", &a[i][j]);
		}
	}

	for(i=1;i<=n-1;i++)
	{
		// Chưa xét được TH a[i][i]=0
		for(j=i+1;j<=n;j++)
		{
			alp = a[j][i]/a[i][i];

			for(k=1;k<=n+1;k++)
			{
			  	a[j][k] = a[j][k] - alp*a[i][k];
			}
		}
	}

	x[n] = a[n][n+1]/a[n][n];

	for(i=n-1;i>=1;i--)
	{
		x[i] = a[i][n+1];
		for(j=i+1;j<=n;j++)
		{
		  	x[i] = x[i] - a[i][j]*x[j];
		}
		x[i] = x[i]/a[i][i];
	}

	printf("\nPhuong trinh co %d nghiem la: \n", n);
	for(i=1;i<=n;i++)
	{
	  	printf("x[%d] = %0.3f\n",i, x[i]);
	}
}