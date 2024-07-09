// 验证表达式getchar（）！=EoF的值是O还是l。

#include <stdio.h>

main()
{
    int c;
    c = getchar() != EOF;
    printf("%d", c);
}
// 输入其他值，c值为1（true） ,输入ctrl+z（windows中的EOF）,c值为0（false）
