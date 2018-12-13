# 第七章 结构体

## 符合类型与结构体

在编程中，最基本的、不可再分的数据类型称为基本类型，例如整型、浮点型；根据语法规则由基本类型组合而成的类型称为复合类型。

在有些场合下要把复合类型当成一个整体来用，而另外一些场合下需要分解组成这个复合类型的各种基本类型，复合类型的这种两面性称为数据抽象奠定了基础。

在学习一门编程语言时需要特别注意以下三方面：

1. 这门语言提供了哪些基本类型。
2. 这门语言提供了哪些组合规则。
3. 这门语言提供了哪些抽象机制，包括数据抽象和过程抽象。

如果用实部和虚部表示一个复数，我们可以写成由两个double型组成的结构体：

```c
struct complex_struct{
    double x,y;
};
```

这一句定义了标识符complex_struct，这种标识符在C语言中称为Tag，struct complex_struct{double x,y;}整个可以看做一个类型名，就像int和double一样，只不过它是一个复合类型，如果用这个类型名来定义变量，可以这样写：

```c
struct {
    double x,y;
} z1,z2;
//或者写成一行更容易理解
struct {double x,y;} z1,z2;
```

这样的结构体无法被再次引用，因为它没有名字。

每个复数变量都有两个成员x和y，可以用`.`后缀运算符来访问，这两个成员的存储空间是相邻的，合在一起组成复数变量的存储空间。

定义和访问结构体：

```c
#include <stdio.h>

int main(void){
    struct complex_struct{double x,y;} z;
    double x = 3.0;
    z.x = x;
    z.y = 4.0;
    if (z.y < 0)
        printf("z=%f%fi\n",z.x,z.y);
    else
        printf("z=%f+%fi\n",z.x,z.y);
    return 0;
}
```

上面的的变量x和变量z的成员x并不冲突，因为z的变量成员x只能通过表达式z.x来访问。

结构体也可以在定义时初始化：

```C
struct complex_struct z = {3.0,4.0}
printf
```





