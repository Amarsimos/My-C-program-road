#include<stdio.h>
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


void squ(char s1[], char s2[])
{
	int i, j;
	for (i = j = 0;s1[i] != '\0';i++){//��ֵΪ0,�ı�δ����֮ǰһֱ���� 
		int c = s1[i];//����Ϊ��s1��ֵ��c 
		
		if (!IsCharExist(s2,c)){//֮�ж��Ƿ���ڴ����򲻽��и�ֵ,������һ��ѭ��,����������丳ֵ 
			s1[j++] = s1[i];
		}
	}
	s1[j] = '\0';
}
int main()
{
	char s[100] = "12 3 abc";
	char *d = "1b ";
	squ(s,d);
	printf("%s\n",d);
	printf("%s\n",s);
	//printf("666");
}
