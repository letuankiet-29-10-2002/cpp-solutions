/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n;
	do
	{
	printf("\nNhap n(n > 0): ");
	scanf("%d", &n);
	  if(n <= 0)
	   {
		printf("\n N phai > 0. Xin nhap lai !");
	   }
	}while(n <= 0);
    i = 1;

	printf("\nCac uoc so le cua so %d la: ",n);
	while(i <= n)
	{
		if(n % i == 0)
		{
			if(i % 2 == 1)
			printf("%4d", i);
		}
			i++;
	}

	getch();
	return 0;
}