#include<stdio.h>
#include<limits.h>
unsigned int setbits(unsigned int x, int p , int n ,unsigned int y)
{
	int nStartBit = p + 1 - n;	
	unsigned int  nMaxValue = ~(~0 << n);//00000111,n��1 
	int a = ~(nMaxValue << nStartBit);//1100 0111,��1�Ƶ���ʼλ ,ȡ�� 
	x = x & a;//����1��λ,������x ,1011 1100->1000 0100,����������λ,��0Ҫ�ƶ���λ 
	
	y = y << nStartBit;//��y����nλ ,0010 1000,�����õ�λ�Ƶ�ָ��λ��, 
	
	
	return x | y;//1010 1100,��������λ,��0��=����;��������λ,x�ж�ӦλΪ0,y�ж�Ӧλ���� 
}


int main()
{
	int x = 0xbc;//1011 1100
	int y = setbits(x,4,3,5);//5=0000 0101
	//x = x & 0177; 
	//x = x >> 2; 
}   

// 1000 1111 1110 0001
// 1110 0011 1100 0001
