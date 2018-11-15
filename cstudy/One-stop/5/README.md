# 第五章 深入理解函数

## return语句

return语句的作用是提供整个函数的返回值，并结束当前函数返回到调用他的地方。

在没有返回值的函数中也可以使用return语句，例如：当检查到一个错误时提前结束当前函数的执行并返回。

```c
#include <stdio.h>

int is_even(int x){
    if (x%2 == 0)
        return 1;
    else
        return 0;
}
/*一个返回布尔值的函数*/
int main(void)
{
	int i = 19;
	if (is_even(i)) {
        /*do sonethong*/
	}
	else{
        /*do some other something*/
	}
    return 0;
}
```

返回布尔值的函数是一类非常有用的函数，在程序中充当控制表达式。

返回值应当这样理解：**函数返回一个值相当于定义一个和返回值类型相同的临时变量并用return后面的表达式来初始化。**

```c
/*上面的函数调用可以用下面的代码来帮助理解*/
int 临时变量 = !(x % 2);
函数退出，局部变量x的存储空间释放；
if (临时变量) {/*临时变量用完就释放*/
	/*do something*/
} else{
    /*do some other thing*/
}
```

### 习题

- 编写一个布尔函数int is_leap_year(int year)，判断参数year是不是闰年。（如果年份能被4整除，但不能被100整除，那么这一年就是闰年，此外，能被400整除的年份也是闰年）

```c
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
```

- ​	编写一个函数 double myround(double x)，输入一个小数，将它四舍五入（例如：myground(-3.15)的值为-4.0）可以调用math.h中的库函数ceil和floor实现这个函数。

C标准库参考手册：http://wiki.jikexueyuan.com/project/c/c-standard-library.html

```c
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
    //此处转义符为何是%1.1f？？？
    printf("%1.1f \n",myround(-3.51));
    printf("%1.1f \n",myround(4.49));
    return 0;
}
```

