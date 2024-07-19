/* strlen: return length of s */
#include <stdio.h>
#include <string.h>
int mstrlen(char s[])
{
int i=0;
while (s[i] != '\0')
++i;
return i;
}
int main(){
	int a = 0;
	int b;
	int c;
	char i[101];
	
	while (( c = getchar()) != EOF){
		if(a < 100){
			i[a] = c;
			++a;
		}
		
	}
	
	i[a] = '\0';
	printf("%d",mstrlen(i));
	return 0;
}
