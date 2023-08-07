#define ASK(top) do{\
	p=(ADDR *)malloc(sizeof(ADDR));\
	if (p==NULL){printf("memory fail!");exit(-1);}\
}while(0)
#define LEN sizeof(ADDR)
extern int count;
typedef struct address{
	char name[8];
	char tel[20];
	struct address *next;
}ADDR;

