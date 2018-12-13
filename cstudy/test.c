#include <stdio.h>
int main()
{
    char c = 'a';
    int n = c;		  //将c赋值给n
    float f = c;      //将c赋值给f
    double d = c;     //将c赋值给d
    printf("%d\n",n);
    printf("%f\n",f);
    printf("%lf\n",d);
    return 0;    
}