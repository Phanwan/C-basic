#include<stdio.h>

int max(int a, int b, int c, int d) {
	int max, max1, max2;
	if(a>=b) {
		max1 = a;
	} else {
		max1 = b;
	}
	if(c>=d) {
		max2 = c;
	} else {
		max2 = d;
	}
	if(max1 >= max2) {
		max = max1;
	} else {
		max = max2;
	}
}

int min(int a, int b, int c, int d) {
	int min, min1, min2;
		if(a<=b) {
		min1 = a;
	} else {
		min1 = b;
	}
	if(c<=d) {
		min2 = c;
	} else {
		min2 = d;
	}
	if(min1 <= min2) {
		min = min1;
	} else {
		min = min2;
	}
}

void nhap(int a[], int n) {
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

int main() {
	int a[1000], b[1000], c[1000], d[1000], n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("\nNhap mang a: ");
	nhap(a, n);
	printf("\nNhap mang b: ");
	nhap(b, n);	
	printf("\nNhap mang c: ");
	nhap(c, n);	
	printf("\nNhap mang d: ");
	nhap(d, n);
	
	for(int i = 0; i < n; i++){
		printf("%6d%6d%6d%6d%6d%6d\n", a[i], b[i], c[i], d[i], min(a[i], b[i], c[i], d[i]), max(a[i], b[i], c[i], d[i]));
	}
	return 0;
}