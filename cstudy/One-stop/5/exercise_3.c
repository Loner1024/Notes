#include <stdio.h>

int number(int a,int b){
    int g;
    if (a%b == 0){
        return b;
    }
    else{
        number(b,a%b);
    }
}

int main(int argc, char const *argv[])
{
    printf("%d\n",number(319,377));
    printf("%d\n",number(24,60));
    return 0;
}
