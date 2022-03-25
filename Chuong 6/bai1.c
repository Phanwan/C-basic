#include <stdio.h>

int main()
{
    float a, b, c, d, e, f;
    float D, Dx, Dy, x, y;
    printf("Nhap a, b, c, d, e, f: ");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    D = a*e - d*b;
    Dx = c*e - f*b;
    Dy = a*f - d*c;
    if (D==0){
        if (Dx==0 && Dy==0) 
            printf("Vo so nghiem");
        else if (Dx!=0 || Dy!=0)
        {
            printf("Vo nghiem");
        }
    }else{
        x = Dx/D;
        y = Dy/D;
        printf("He phuong trinh co 2 nghiem x, y: %.2f, %.2f", x, y);
    }
    return 0;
}