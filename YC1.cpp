#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n, m, x[100][100], key;
	while(true)
	{
		system("cls");
		printf("***************************************\n");
		printf("**     1.Nhap/Xuat mang              **\n");
		printf("**     2.Sap xep mang                **\n");
		printf("**     3.Tinh tong chia het 3        **\n");
		printf("**     0.Thoat                       **\n");
		printf("***************************************\n");
		printf("\t\t Nhap phim: ");
		scanf("%d",&key);
		switch(key)
		{
			case 1:
				system("cls");
				fflush(stdin);
				nhapxuatmang(a, i, j, m, n);
				break;
		
			case 2:
				system("cls");
				sapxepmang(a ,m, n, i, j);
				break;
				
			case 3:
				system("cls");
				chia3(arr, sum, i, j);
				break;
				
			case 4:
				system("cls");
				printf("\n Nhan Enter de thoat! ");
				break;
		}
	} while(key !=4)
}
void nhapxuatmang(int a[100][100], int i,int j, int m, int n)
{
	printf("Nhap so dong n=");
	scanf("%d", &n);
	printf("Nhap so cot m=");
	scanf("%d", &m);
	printf("Nhap vao ma tran: \n ");
 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void sapxepmang(int a[50][50], int m, int n, int i, int j)
{ 
    printf("nhap so dong n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
// in ra ma tran vua nhap duoi dang bang
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
}
void chia3()
{
	int arr[10][10] = {
		{2, 3, 5, 7, 11, 13, 17, 19, 23, 29},
		{4, 6, 8, 10, 12,  14, 16, 18, 20, 22},
		{5, 7, 11, 13, 17, 19, 23, 29, 31, 37},
		{6, 8, 10, 12, 14, 16, 18, 20, 22, 24},
		{7, 11, 13, 17, 19, 23, 29, 31, 37, 41},
		{8, 10, 12, 14, 16, 18, 20, 22, 24, 26},
		{9, 11, 13, 17, 19, 23, 29, 31, 37, 41},
		{10, 12, 14, 16, 18, 20, 22, 24, 26, 28},
		{11, 13, 17, 19, 23, 29, 31, 37, 41, 43},
	};	
	int sum = 0;
	for (int i=0;i<10;i++)
	{
		for (int j=0; j<10;j++)
		{
			if (arr[i][j] % 3 == 0) 
			{
				sum += arr[i][j];
			} 
		}
	}
}



