#include <stdio.h>

int number(void){
    int x,n;
    while (x<=100){
        x++;
        if (x%10==9 || x/10==9){
            n++;
        }
    }
    return n;
}

int main()
{
    printf("%d\n",number());
    return 0;
}
