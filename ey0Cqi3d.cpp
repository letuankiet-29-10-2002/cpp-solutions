/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int DemSoDuongChiaHetCho7(int a[], int n)
{
	 int dem = 0;
	 for(int i = 0; i < n; i++)
	 {
		 if(a[i] > 0 && a[i] % 7 == 0)
		 {
			 dem++;
		 }
	 }
	 return dem;
}

int main()
{
	int n;
	int a[MAX];
	int x;

	nhap(a, n);
	xuat(a, n);

	int SoDuongChiaHetCho7 = DemSoDuongChiaHetCho7(a, n);
	printf("\nSo luong so duong chia het cho 7 la %d", SoDuongChiaHetCho7);
	

	getch();
	return 0;
}