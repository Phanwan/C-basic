#include<stdio.h> 
typedef struct {
	char ho[10];
	char tenDem[10];
	char ten[10];
} Ten;

typedef struct {
	char xa[20];
	char huyen[20];
	char tinh[20];
} queQuan;

typedef struct {
	float diemToan;
	float diemLy;
	float diemHoa;
} diemSo;
typedef struct {
	Ten hoTen;
	queQuan que;
	char truong[30];
	char sbd[10];
	diemSo diem;
} sinhVien;

void inputTen(sinhVien *sv) {
	fflush(stdin);
	printf("Nhap ho: ");
	gets(sv->hoTen.ho);
	printf("Nhap ten dem: ");
	gets(sv->hoTen.tenDem);
	printf("Nhap ten ten: ");
	gets(sv->hoTen.ten);
}

void inputQue(sinhVien *sv) {
	printf("Nhap xa: ");
	gets(sv->que.xa);
	printf("Nhap huyen: ");
	gets(sv->que.huyen);
	printf("Nhap tinh: ");
	gets(sv->que.tinh);
}

void inputDiem(sinhVien *sv) {
	fflush(stdin);
	printf("Nhap diem toan: ");
	scanf("%f", &sv->diem.diemToan);
	printf("Nhap diem ly: ");
	scanf("%f", &sv->diem.diemLy);
	printf("Nhap diem hoa: ");
	scanf("%f", &sv->diem.diemHoa);
}

void input(sinhVien sv[], int *n) {
	printf("Nhap so luong: ");
	scanf("%d", n);
	for(int i = 0; i < *n; i++) {
		printf("====================\n");
		inputTen(&sv[i]);
		inputQue(&sv[i]);
		printf("Nhap truong: ");
		gets(&sv[i].truong);
		printf("Nhap SBD: ");
		gets(&sv[i].sbd);
		inputDiem(&sv[i]);
	}
}

void output(sinhVien sv[], int n)
{
	for(int i = 0; i < n; i++) {
		printf("-----------------------\n");
		printf("ho:%s dem:%s ten:%s \n", sv[i].hoTen.ho, sv[i].hoTen.tenDem, sv[i].hoTen.ten);
		printf("Truong: %s\n", sv[i].truong);
    	printf("SBD: %s\n",sv[i].sbd);
    	printf("diem toan:%.2f diem ly:%.2f diem hoa:%.2f\n", sv[i].diem.diemToan, sv[i].diem.diemLy, sv[i].diem.diemHoa);
    	printf("xa: %s huyen:%s tinh:%s\n",sv[i].que.xa, sv[i].que.huyen, sv[i].que.tinh);
	}
}

void outputEach(sinhVien sv)
{
	printf("-----------------------\n");
	printf("ho:%s dem:%s ten:%s \n", sv.hoTen.ho, sv.hoTen.tenDem, sv.hoTen.ten);
	printf("Truong: %s\n", sv.truong);
    printf("SBD: %s\n",sv.sbd);
    printf("diem toan:%.2f diem ly:%.2f diem hoa:%.2f\n", sv.diem.diemToan, sv.diem.diemLy, sv.diem.diemHoa);
    printf("xa: %s huyen:%s tinh:%s\n",sv.que.xa, sv.que.huyen, sv.que.tinh);
}

void timKiem(sinhVien sv[], int n) {
	for(int i = 0; i < n; i++) {
		if(sv[i].diem.diemHoa + sv[i].diem.diemLy + sv[i].diem.diemToan >= 15) {
			outputEach(sv[i]);
		}
	}
}
int main() {
	sinhVien sv[1000];
	int n;
	input(sv, &n);
	output(sv, n);
	printf("\n\nSinh vien diem tren 15: \n");
	timKiem(sv, n);
	return 0;
}