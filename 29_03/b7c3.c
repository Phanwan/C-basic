#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
    LIST* l = (LIST*)malloc(sizeof(LIST));
	if(l == NULL) {
		printf("Loi cap phat bo nho");
		return NULL;
	}
	l->Inf = a;
	l->Next = NULL;
	return l;
}

void init(OddList *o)
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
        LIST *l = getNode(getInt());
        addTail(o,l);
    }
}


void output(OddList o)
{
    for(LIST *l = o.pHead; l!=NULL; l=l->Next)
    {

            printf("%d ",l->Inf);
    }
}
void removeDuplicates(OddList* o)
{
    // do nothing if the list is empty
    if (o->pHead == NULL) {
        return;
    }

    LIST *p = o->pHead;

    // compare the current node with the next node
    while (p->Next != NULL)
    {
        if (p->Inf == p->Next->Inf)
        {
            LIST *nextNext = p->Next->Next;
            free(p->Next);
            p->Next = nextNext;
        }
        else {
            p = p->Next;    // only advance if no deletion
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
    removeDuplicates(&o);
    output(o);
    deleteNode(&o);
    return 0;
}