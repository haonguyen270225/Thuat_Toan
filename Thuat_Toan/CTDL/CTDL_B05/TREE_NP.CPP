#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;


typedef int ElementType;
struct TreeNode;
typedef struct TreeNode *Node;
typedef struct TreeNode *Tree;

//Khai bao cay nhi phan
struct TreeNode
{
	ElementType Element;
	Node Left;	//Con tro Trai
	Node Right;	//Con tro Phai
};
Tree 	Makenull_Tree(Tree T);
Tree 	Insert(ElementType X, Tree T);
Node	Find(ElementType X , Tree T);
Tree 	Delete ( ElementType X, Tree T);
ElementType Retrieve(Node P);

Tree 	Xoa(Tree T);
int IsEmpty_Tree(Tree  T);
Node LeftChild(Tree  p);
Node RightChild(Tree p);
int IsLeaf(Tree p);
Node 	FindMin(Tree T);

void PreOrder(Tree T); //NLR(Tree T);
void InOrder(Tree T); //LNR(Tree T);
void PosOrder(Tree T); //LRN(Tree T);
int NutTrungGian(Tree P);



int main()
{

	Tree T;
	Node P;
	int x;
	T = Makenull_Tree(NULL);
	do{
		printf("\n Nhap vao nut cua cay (-1) de thoat nhap):");
		scanf("%d",&x);
		if(x!=-1)
			T=Insert(x,T);
	}while(x!=-1);
	
	
	printf("\nDuyet Tien tu: \n");
	PreOrder(T);
	printf("\nDuyet Trung tu: \n");
	InOrder(T);
	printf("\nDuyet Hau tu: \n");
	PosOrder(T);
	cout << "\nSo nut trong cay nhi phan la: ";
	cout << NutTrungGian(T);
	cout << IsLeaf(T) << 
	getch();
	return 1;
	
}
//Xoa cay
Tree Xoa(Tree T)
{
	if(T!=NULL)
	{
		Xoa(T->Left);
		Xoa(T->Right);
		T=Delete(Retrieve(T),T);
	}
	return T;
}
//Tao cay rong
Tree Makenull_Tree(Tree T)
{
	if(T!=NULL)
	{
		Makenull_Tree(T->Left);
		Makenull_Tree(T->Right);
		free(T);
	}
	return NULL;
}

//Kiem tra cay rong?
int IsEmpty_Tree(Tree  T)
	{
		  return (T==NULL);
	}

//Xac dinh nut con trai
Node LeftChild(Tree  p)
	{ 	if (p!=NULL) 
			return p->Left; 
		else 
			return NULL; 
	} 

//Xac dinh nut con pahi
Node RightChild(Tree  p)
	{ 	if (p!=NULL)
			return p->Right;
		else 
			return NULL; 
	} 

//Kiem tra cp phai la nut la ?
int IsLeaf(Tree p)
	{ 	if(p!=NULL)
			return ((LeftChild(p)==NULL) &&(RightChild(p)==NULL));
		else 
			return 0; 
	} 

//Chen 1 phan tu vao cay
Tree Insert(ElementType X,Tree T)
{
	if(T==NULL)
	{
		//Creat and return a one-node tree
		T= (TreeNode*)malloc(sizeof(struct TreeNode) );
		if(T==NULL)
			printf("Out of space!");//Loi
		else
		{
			T->Element = X;
			T->Left = T->Right = NULL;
		}
	}
	else
		if(X < T->Element)
			T->Left = Insert(X, T->Left);
		else
			if(X > T->Element)
				T->Right = Insert(X,T->Right);
				//else x is in this tree already; we'll do nothing
	return T;
}

Node Find(ElementType X, Tree T)
{
	if(T == NULL)
		return NULL;
	if(X < T->Element)
		return Find ( X, T->Right);
	else
		if(X > T->Element)
			return Find(X, T->Right);
		else
			return T;
}

Node FindMin(Tree T)
{
	if(T==NULL)
		return NULL;
	else
		if(T->Left == NULL)
			return T;
		else
			return FindMin(T->Left);
}

Tree Delete(ElementType X,Tree T)
{
	Node TmpCell;

	if(T== NULL)
		printf("Element not found");
	else
		if (X < T->Element)
			T->Left = Delete(X, T->Left);
		else
			if(X > T->Element)
				T-> Right = Delete(X, T->Right);
			else
				//Nut co 2 con
				if(T->Left!=NULL && T->Right!=NULL)
				{
					TmpCell = FindMin(T->Right);
					T->Element = TmpCell->Element;
					T->Right = Delete(T->Element, T->Right);
				}
				else
				{
					TmpCell = T;
					//Nut co 1 con ben phai
					if (T->Left == NULL)
						T = T->Right;
					//Nut co 1 con ben trai
					else if (T->Right == NULL)
						T = T->Left ;
					//Xoa nut
					free(TmpCell);
				}
		return T;

}

ElementType Retrieve(Node P)
{
	return P->Element;
}

void PreOrder(Tree T)
	{
		printf("\t%d",T->Element);
		if (LeftChild(T)!=NULL)
			PreOrder(LeftChild(T));
		if (RightChild(T)!=NULL)
			PreOrder(RightChild(T));
	}

void InOrder(Tree T)
{
	if (LeftChild(T)!=NULL)
		InOrder(LeftChild(T));
	printf("\t%d",T->Element);
	if (RightChild(T)!=NULL)
		InOrder(RightChild(T)); 
} 

void PosOrder(Tree T)
{ 
	if (LeftChild(T)!=NULL) 
		PosOrder(LeftChild(T)); 
	if (RightChild(T)!=NULL)
		PosOrder(RightChild(T)); 
	printf("\t%d ",T->Element); 
} 
	
int nb_node(Tree T)
{
	
	if(IsEmpty_Tree(T))
		return 0;
		else
		return 1 + nb_node(LeftChild(T))
	             + nb_node(RightChild(T));	             
}	
	
int IsLeaf_node(Tree P)
{
	if(P!=NULL)
		return((LeftChild(P)==NULL)&&(RightChild(P)==NULL));
	else
		return 0;
}

int NutTrungGian(Tree P)
{
	if(P == NULL){
		return 0;
	}
	else{
	return 1 + NutTrungGian(LeftChild(P)) + NutTrungGian(RightChild(P));
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
