#include<stdio.h>

int main(){

    int a[1000]; 
    int Sduong,Sam; 
    int i,n,demduong = 0,demam = 0; 
    float TBCDuong,TBCAm;
    printf("Nhap n: ");
    scanf("%d",&n); 
    Sduong = 0;
    Sam = 0; 
    for (i=0;i<n;i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);

        if (a[i]>0){
            Sduong+=a[i];
            demduong++;
        }else if(a[i] < 0){ 
            Sam+=a[i];
            demam++;
    	}
    	
	}
	if(demduong > 0) {
		TBCDuong =(float) Sduong*1.0/demduong;
	}
	if(demam > 0) {	
    	TBCAm = (float) Sam*1.0/demam;
	}

    printf("TBC so duong : %.2f ", TBCDuong);
    printf("TBC so am : %.2f ", TBCAm);
    return 0;
}