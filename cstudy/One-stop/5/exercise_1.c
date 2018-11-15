/*编写一个布尔函数int is_leap_year(int year)，判断参数year是不是闰年。
（如果年份能被4整除，但不能被100整除，那么这一年就是闰年，此外，能被400整除的年份也是闰年）*/
#include <stdio.h>

int is_leap_year(int year){
    
    if (year%4 == 0 && year%100 != 0 || year == 400) {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void){
    if (is_leap_year(2013)){
        printf("是闰年\n");
    }
    else{
        printf("不是闰年\n");
    }
    return 0;
}