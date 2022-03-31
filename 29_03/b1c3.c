#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// tạo Node
struct Node{
    int Inf;
    struct Node *Next;
};
typedef struct Node LIST;

struct oddlist {
	LIST* pHead;
	LIST* pTail;
};

typedef struct oddlist OddList;

LIST * getNode (int a){
    LIST* l = (LIST*)malloc(sizeof(LIST)); // cấp phát bộ nhớ động
	if(l == NULL) {
		printf("Loi cap phat bo nho");
		return NULL;
	}
	l->Inf = a;
	l->Next = NULL;
	return l;
}

void init(OddList *o) // khởi tạo danh sách rỗng
{
    o->pHead = o->pTail = NULL;
}

void addTail(OddList *o,LIST *l)
{
    if(o->pHead == NULL)
    {
        o->pHead = o->pTail = l;
    }
    else {
        o->pTail->Next=l;
        o->pTail=l;
    }
}

int getInt()
{
    int b;
    scanf("%d",&b);
    return b;
}

void input (OddList *o, int *n)
{
    int a;
    printf("nhap so luong phan tu: ");
    scanf("%d",n);
    init(o);
    for(int i=1;i<=*n;i++)
    {
        LIST *l = getNode(getInt()); // tạo node
        addTail(o,l); // thêm phần tử vừa tạo vào danh sách
    } 
}


void output(OddList o)
{
    for(LIST *l = o.pHead; l!=NULL; l=l->Next)
    {
        if(l->Inf%2!=0)
        {
            printf("%d ",l->Inf);
        }
    }
}

void deleteNode(OddList *o) {
	LIST *l;
	while(o->pHead != NULL) {
		l = o->pHead;
		o->pHead = o->pHead->Next;
		free(l);
	}
}

int main()
{
    OddList o;
    int n;
    input(&o,&n);
    output(o);
    deleteNode(&o);
    return 0;
}