# C语言数据类型转换

## 自动类型转换

```C
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
```

如上代码，字符型的变量在整个过程中被转换成了整型、单精度浮点型、双精度浮点型。

## 强制类型转换

强制类型转换是通过定义类型转换运算来实现的。其一般形式为：

 **(数据类型) (表达式)** 

```C
#include <stdio.h>
int main()
{
    double num = 2.5;      //定义浮点型变量num并赋值为2.5
    int num2 = (int)num;
    printf("num的整数部分是%d\n", num2);  
    return 0;
}
```

如上代码双精度浮点型的`num`通过`(int)num`被强制转换为整型并赋值给`num2`