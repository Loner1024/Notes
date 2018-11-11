# 第三章 简单函数

### 在C语言中使用数学函数的例子：

```c
#include <math.h>
#include <stdio.h>

int main(void)
{
    double pi = 3.1416;
    printf("sin(pi/2)=%f\nln1=%f\n",sin(pi/2),log(1.0));
    return 0;
}
```

在编译上面的代码时，会出现**undefined reference to `sin'**的错误，在编译时加上`-lm`即可解决，即：

```
gcc main.c -lm -o main
```

### 最简单的自定义函数

```c
#include <stdio.h>

void newline(void)
{
    printf("\n");
}

int main()
{
    printf("First Line.\n");
    newline();
    printf("Second Line.\n");
    return 0;
}
```

执行结果：

```
First Line.

Second Line.
```

1. 同一个函数可以多次被调用；
2. 可以用一个函数调用另一个函数，后者再去调用第三个函数；
3. 通过自定义函数可以给一个复杂的操作起一个简单的名字；
4. 使用自定义函数可以使代码更简洁。

## 形参和实参

我们需要在函数定义中指明参数的个数和每个参数的类型，定义参数就像定义变量一样，需要为每个参数指明类型，参数的命名也要遵循标识符命名规则。

带参数的自定义函数：

```c
#include <stdio.h>

void print_time(int hour,int minute)
{
    printf("%d:%d\n",hour,minute);
}

int main(void)
{
    print_time(23,59);
    return 0;
}
```

如果写一个非定义的函数声明，可以只写参数类型而不写参数名，例如:

```c
void print_time(int,int);
```

**注意：定义变量时可以把相同类型的变量放在一起，而定义参数却不可以。**

