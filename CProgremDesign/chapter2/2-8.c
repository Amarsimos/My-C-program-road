#include<stdio.h>
#include<limits.h>
unsigned int  RightRot(unsigned int a , int n)
{
	unsigned int  nMaxValue = ~(~0 << n);
	int b = nMaxValue & a;//��ȡnλ
	a = a >> n;//����nλ 
	b = b << (32 - n);//����ȡ��λ���������λ 
	return a | b;//���ȫ������ 
}

int main()
{
	int x = 0xbc;
	int y = RightRot(x,4);
	printf("%x",y);
}   

// 1000 1111 
// 0000 0001
//  
// 0000 0001
