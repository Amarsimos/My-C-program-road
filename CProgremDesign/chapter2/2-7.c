#include<stdio.h>
#include<limits.h>
unsigned int minvert(unsigned int x, int p , int n )
{
	int nStartBit = p + 1 - n;	
	unsigned int  nMaxValue = ~(~0 << n);//00000111,n��1 
	int b = ~x;// ��x��λȡ�� ,0100 0011
	int a = ~(nMaxValue << nStartBit);//1100 0111,��1�Ƶ���ʼλ ,ȡ�� 
	x = x & a;//����1��λ,������x ,1011 1100->1000 0100,����������λ,��0Ҫ�ƶ���λ 
	unsigned int c = b & ~a;// ����ȡ��λ,����λ���� 
	
	
	return x | c;//1010 1100,��������λ,��0��=����;��������λ,x�ж�ӦλΪ0,y�ж�Ӧλ���� 
}


int main()
{
	unsigned int z = 0xbc;//1011 1100
	
	unsigned int y = minvert(z,3,3);//5=0000 0101
	printf("%x\n%x",z,y);
	//x = x & 0177; 
	//x = x >> 2; 
}   

// 1110 0011 a
// 0001 1100 ~a
// 1011 1100 z
// 1010 0000 x
// 0100 0011 b
// 0000 0000 c
// 1010 0000 y
// 1010 0000 y
// 1110 0011 1100 0001
// 0000 0000 0000 0000
// 0001 1100 1100 0001
