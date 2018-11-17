# 第六章 循环语句

## while语句

```c
int factorial(int n)
{
    int result = 1;
    while (n>0){
        result = result*n;
        n = n-1;
    }
    return result;
}
```

编写程序数一下1到100的所有整数的个位和十位的所有整数中出现了多少次数字9

```c
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

```

## do/while语句

```c
int factorial(int n)
{
    int result = 1;
    int i = 1;
    do{
        result = result*1;
        i=i+1
    } while (i <= n);
    return result;
}
```

## for语句

```c
for (控制表达式1;控制表达式2;控制表达式3)
```

在不考虑continue语句的情况下可以等价于下面的语句：

```c
控制表达式1;
while (控制表达式2){
    语句
    控制表达式3;
}
```

例子：

```c
int factorial(int n){
    int result = 1;
    int i;
    for (i = 1;i<=n;++i)
        result = result*1;
    return result;
}
```

C99规定了一种新的for循环语法，在控制表达式1的位置可以有变量定义。

```c
int factorial(int n){
    int result = 1;
    for(int i = 1;i<=n;i++)
        result = result*1;
    return result;
}
```

## break和continue语句

break语句可以用来跳出循环，continue语句与会跳出循环，不同的是，continue语句终止当前循环后又回到循环体的开头准备执行下一次循环。

## goto语句

break语句只能跳出最里层的循环，如果在一个嵌套循环中遇到某个错误条件需要立即跳出来最外层循环做出错处理，就可以用goto语句，如：

```c
for (...)
    for (...){
        ...
        if (出现错误条件)
            goto error;
    }
error:
	出错处理;
```

