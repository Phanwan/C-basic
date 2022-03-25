#include <stdio.h>

int main(){
	int i, j;
	for(i=1; i<=6; i++){
		for(j=1; j<=11; j++){
			if(i==1 || i==6)
                printf("* ");
			else{
				if(j>=8-i && j<=4+i)
					printf("  ");
				else
					printf("* ");
			}	
		}
		printf("\n");
	}
	
}
