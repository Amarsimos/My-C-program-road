#include <stdio.h>
#define SIZE 30

int IsWordEnd(char cch, int iflag);
int IsWord(char cch);
int CountChar(char cch);
int main(void)
{
    char cch = 0;
    int iword_count = 0;
    int ich_count = 0;
    float favg_word_ch = 0;
    int iflag_word = 0;
    int iflag = 0;
    int ij = 0;
    printf("Enter a string: \n");

    while ((cch = getchar()) != EOF)
    {
        iflag = IsWordEnd(cch, iflag_word);
        iflag_word = IsWord(cch);
        if (iflag == 1)
        {
            iword_count++;
        }
        if (cch != ' ' && cch != '\t' && cch != '\n') // 使用&&进行判断,cch!=其中任何字符才行
        {
            ich_count++;
        }
    }
    favg_word_ch = (float)ich_count / (float)iword_count;
    printf("Word count: %d\n", iword_count);
    printf("Average word length: %.2f\n", favg_word_ch);
    return 0;
}

int IsWordEnd(char str, int iflag) // 判断单词的逻辑为前一位是不是空格或制表符,如果是的话,则当前字符为单词的结束符,返回1,否则返回0
{
    int is_space = 0;

    if (str == ' ' || str == '\t' || str == '\n')
    {
        if (iflag == 1)
        {
            is_space = 1;
        }
        else
        {
            is_space = 0;
        }
    }
    else
    {
        is_space = 0;
    }

    return is_space;
}
int IsWord(char str)
{
    int is_space = 0;

    if (str == ' ' || str == '\t' || str == '\n')
    {
        is_space = 0;
    }
    else
    {
        is_space = 1;
    }

    return is_space;
}
int CountChar(char str)
{
    int count = 0;
    if (str >= 'A' && str <= 'Z')
    {
        count++;
    }
    return count;
}
