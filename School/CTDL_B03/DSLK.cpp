	#include <stdlib.h>
	#include <stdio.h>
	#include <conio.h>
	#include <iostream>
	using namespace std;

	
	typedef int ElementType;
	
	typedef struct Node
	{
		ElementType Element;
		Node    *Next;
	}pNode;

	typedef Node *PtrToNode;
	typedef PtrToNode Position;
	typedef PtrToNode List;

	void Makenull_List( List &L );
	int IsEmpty_List( List L );
	int IsLast( Position P);
	
	//3 ham nay chi dung chi kieu int
	Position Locate( ElementType X, List L ); 
	void Delete_List( ElementType X, List L );
	Position LocatePrevious( ElementType X, List L );
	
	void Insert_List( ElementType X, Position P, List L );
	void Delete_All_List( List L );
	Position Header( List L );
	Position First_List( List L );
	Position End_List( List L);
	Position Advance( Position P );
	ElementType Retrieve( Position P );
	void Read_List(List L);
	void Write_List(List L);
	//void Sort_List(List L);
	

/* MAIN PROGRAM */
int main()
{
	List L;
	
	printf("\n Nhap vao danh sach \n");
	Makenull_List(L);
	Read_List(L);
	printf("\n Danh sach  vua nhap \n");
	Write_List(L);
	//printf("\n Danh sach sau khi sap xep\n");
	//Sort_List(L);	
	//Write_List(L);
	if(!IsEmpty_List(L))
	{
		Position P = First_List(L);
		ElementType min = P->Element;
		
		while (P != NULL)
		{
			if (P->Element < min)
			{	
				min = P->Element;
			}
			P = P -> Next;
		}
		
		printf("\nGia tri nho nhat trong danh sach la: %d", min);	
	}
	else
	{
		printf("Danh sach rong!");
	}	
	
	getch();
	return 1;

}

/* Cai dat cac ham*/
	/*Tao 1 danh sach rong*/
	void  Makenull_List(List  &L)
	{
		L = new Node;
		if (L== NULL){
			printf("Khong du bo nho");
			exit(1);
		}
		L->Next = NULL;
	}

	/* Kiem tra danh sach rong? */
	int IsEmpty_List( List L )
	{
		return L->Next == NULL;
	}

	/* Kiem tra P co tro den phan tu cuoi cua ds khong? */

	int IsLast( List P )
	{
		return P->Next == NULL;
	}

	//ham nay chi dung chi kieu int
	/* Tim vi tri phan tu x trong ds */
	Position  Locate( ElementType X, List L )
	{
	  Position P;

	  P = L->Next;
	  while( P != NULL && P->Element != X )
		  P = P->Next;

	  return P;
	}

	//ham nay chi dung chi kieu int
	/* Xoa 1 phan tu */
	void	Delete_List( ElementType X, List L )
	{
		Position P, TmpCell;
		P = LocatePrevious( X, L );
		if( !IsLast(P) )
		{
			TmpCell = P->Next;
			P->Next = TmpCell->Next;
			free( TmpCell );
		}
	}

	//ham nay chi dung chi kieu int
	/* Tim vi tri cua phan tu X  */
	Position	LocatePrevious( ElementType X, List L )
	{
		Position P;

	  P = L;
	  while( P->Next != NULL && P->Next->Element != X )
		  P = P->Next;

	  return P;
	}


	/* Chen 1 phan tu vao danh sach */
	void  Insert_List( ElementType X, List P, List L )
	{
		Position TmpCell;
		TmpCell = new Node;
		
		if (TmpCell == NULL)
		{
			printf("Khong du bo nho");
			exit(1);
		}
		TmpCell->Element = X;
		TmpCell->Next = P->Next;
		P->Next = TmpCell;
	}

	
	/* Tim phan tu header */
	Position	Header( List L )
	{
		return L;
	}

	/* Tim phan tu dau tien */
	Position       First_List( List L )
	{
		return L->Next;
	}

	/* Tim phan tu ke tiep */
	Position	Advance( Position P )
	{
		return P->Next;
	}

	/* Tim gia tri cua 1 phan tu */
	ElementType	Retrieve( Position P )
	{
		return P->Element;
	}

	/* Nhap danh sach */
	/* Gia su gia tri cac phan tu la so nguyen - int */
	void Read_List(List L)
	{	int i,n;
		ElementType x;		Position P;
		printf("So phan tu cua danh sach = "); 
		scanf("%d",&n);
		P = Header(L);
		i = 1;
		while(i<=n)
		{	printf("Phan tu %d = ",i); 
			scanf("%d",&x);
			Insert_List(x,P,L); //Chen x vao sau vi tri P
			P = P->Next;
			i++;
		}
	}


	/* In danh sach */
	void Write_List(List L)
	{	Position P;
		if(!IsEmpty_List(L))
		{	P = First_List(L);
			while(P != NULL)
			{
				printf("%3d",P->Element);
				P = P->Next;
			}
		}
		else
			printf("List is empty!");
		printf("\n");
	}
	
	
