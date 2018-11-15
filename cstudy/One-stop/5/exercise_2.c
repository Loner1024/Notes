/*编写一个函数 double myround(double x)，输入一个小数，将它四舍五入
（例如：myground(-3.15)的值为-4.0）可以调用math.h中的库函数ceil和floor实现这个函数。*/
#include <stdio.h>
#include <math.h>

double myround(double x){
    if (x-floor(x) >= 0.5){
        return ceil(x);
    }
    else{
        return floor(x);
    }
}

int main(void)
{ 
    printf("%1.1f \n",myround(4.51));
    printf("%1.1f \n",myround(-3.51));
    printf("%1.1f \n",myround(4.49));
    return 0;
}
