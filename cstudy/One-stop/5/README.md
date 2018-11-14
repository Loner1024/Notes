# 第五章 深入理解函数

## return语句

return语句的作用是提供整个函数的返回值，并结束当前函数返回到调用他的地方。

在没有返回值的函数中也可以使用return语句，例如：当检查到一个错误时提前结束当前函数的执行并返回。

```
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

```
/*上面的函数调用可以用下面的代码来帮助理解*/
int 临时变量 = !(x % 2);
函数退出，局部变量x的存储空间释放；
if (临时变量) {/*临时变量用完就释放*/
	/*do something*/
} else{
    /*do some other thing*/
}
```

