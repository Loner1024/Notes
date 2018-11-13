/*习题2*/
#include <stdio.h>

void fenjie(int x)
{
    printf("十位是：%d\n",x/10);
    printf("个位是：%d\n",x%10);
}

int main(void)
{
    fenjie(98);
    return 0;
}