#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
}node_t;

int LeftOf(const int value, const node_t* root)
{
    // Nếu bạn muốn cây BST cho phép giá trị trùng lặp, hãy sử dụng dòng code thứ 2
    return value < root->data;
//    return value <= root->data;
}
 
int RightOf(const int value, const node_t* root)
{
    return value > root->data;
}

node_t* Insert(node_t* root, const int value)
{
    if (root == NULL)
    {
        node_t* node = (node_t*)malloc( sizeof(node_t) );
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    if (LeftOf( value, root))
        root->left = Insert(root->left, value);
    else if (RightOf(value, root))
        root->right = Insert(root->right, value);
    return root;
}

int Search(node_t* root,int value)
{
    if(root == NULL)  //nếu Tree trống thì không thể kiểm tra
        return 0;
    if(root->data==value)
        return 1;
    else if(LeftOf(value,root)){
        return Search(root->left,value);    //đệ quy để chuyển node root xuống các node root con
    }
    else if(RightOf(value,root)){
        return Search(root->right,value);
    }
    return 0;
}
void Sort_Tang(node_t* root)
{
    
    if(root!=NULL){   
        Sort_Tang(root->left);
        printf("%d ",root->data);
        Sort_Tang(root->right);  
      
    }
}

void Sort_Giam(node_t* root)
{
    
    if(root!=NULL){   
        Sort_Giam(root->right);
        printf("%d ",root->data); 
        Sort_Giam(root->left); 
    }
}

int main()
{
    node_t* root = NULL;
    int i, x , n, value;
 
    printf("Nhap so phan tu cua mang: "); 
    scanf("%d",&n);

    for(i=0;i<n;i++){  
        scanf("%d",&value);
        root = Insert(root,value);
    }

    printf("Nhap x: ");
    scanf("%d",&x);
    if(Search(root,x)!=0)
        printf("x nam trong mang\n");
    else
        printf("x khong nam trong mang\n");
    
    printf("Sort Tang: ");
    Sort_Tang(root);
    printf("\n");
    printf("Sort Giam: ");
    Sort_Giam(root);
    
    return 0;

}
