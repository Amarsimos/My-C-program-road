#include<stdio.h>
#include<limits.h>
int IsCharExist(char s[], int c)//�ж��Ƿ���ڸ��ַ� 
{
	int i = 0;
	while(s[i] != '\0'){//��s2�ı�δ���� 
		if(s[i] == c){//���c���ַ���s[i]���ַ���� 
			return 1;//�ͷ���1 
		}
		i++;//Ȼ��i����,��Ȼһֱ��ʹ��i=0�ж� ,ѭ���ж� 
	}
	return 0;//һֱѭ�����ı�����,�򷵻�0 
}


int any(char s1[],char s2[])
{
	int i = 0;
	
	for (i = 0;s1[i] !='\0'; i++){
		int c = s1[i];
		if (IsCharExist(s2,c)){
			return i+1;
		}
		
	}
	return -1;
} 

int any2(char s1[],char s2[])//�Ż�����ÿ�ζ�ѭ������ 
{
	int i = 0;
	unsigned char map[UCHAR_MAX+1];
	for (i = 0;i < UCHAR_MAX+1;i++) {
		map[i] = 0;
	}
	for (i = 0; s2[i] != '\0'; i++){
		map[(unsigned char)s2[i]] =1;
	}
	
	for (i = 0;s1[i] !='\0'; i++){
		int c = s1[i];
		if (map[c] == 1){
			return i+1;
		}
		
	}
	return -1;
} 


int main()
{
	char *q = "abc12345";
	char *t = "zzz2ddd";
	int n = any(q,t);
	printf("%d",n);
}
