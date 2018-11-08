# 程序设计与C语言

## 计算机和编程语言

导论部分，帮助建立关于计算机工作方式和编程语言的正确概念

解释：借助⼀个程序，那个程序能试图理解你的程序，然后按照你的要求执⾏

编译：借助⼀个程序，就像⼀个翻译，把你的程序翻译成计算机真正能懂的语⾔——机器语——写的程序，然后，这个机器语⾔写的程序就能直接执⾏了

## C语言

C语言在工业界有重要的地位，在很多领域无可替代，几乎所有和硬件打交道的地方都得要用C语言。

以下是2018年9月的编程语言排名

| Sep 2018 | Sep 2017 | Change                                               | Programming Language | Ratings | Change |
| -------- | -------- | ---------------------------------------------------- | -------------------- | ------- | ------ |
| 1        | 1        |                                                      | Java                 | 17.436% | +4.75% |
| 2        | 2        |                                                      | C                    | 15.447% | +8.06% |
| 3        | 5        | ![change](https://www.tiobe.com/images/up.png)       | Python               | 7.653%  | +4.67% |
| 4        | 3        | ![change](https://www.tiobe.com/images/down.png)     | C++                  | 7.394%  | +1.83% |
| 5        | 8        | ![change](https://www.tiobe.com/images/up.png)       | Visual Basic .NET    | 5.308%  | +3.33% |
| 6        | 4        | ![change](https://www.tiobe.com/images/down.png)     | C#                   | 3.295%  | -1.48% |
| 7        | 6        | ![change](https://www.tiobe.com/images/down.png)     | PHP                  | 2.775%  | +0.57% |
| 8        | 7        | ![change](https://www.tiobe.com/images/down.png)     | JavaScript           | 2.131%  | +0.11% |
| 9        | -        | ![change](https://www.tiobe.com/images/upup.png)     | SQL                  | 2.062%  | +2.06% |
| 10       | 18       | ![change](https://www.tiobe.com/images/upup.png)     | Objective-C          | 1.509%  | +0.00% |
| 11       | 12       | ![change](https://www.tiobe.com/images/up.png)       | Delphi/Object Pascal | 1.292%  | -0.49% |
| 12       | 10       | ![change](https://www.tiobe.com/images/down.png)     | Ruby                 | 1.291%  | -0.64% |
| 13       | 16       | ![change](https://www.tiobe.com/images/up.png)       | MATLAB               | 1.276%  | -0.35% |
| 14       | 15       | ![change](https://www.tiobe.com/images/up.png)       | Assembly language    | 1.232%  | -0.41% |
| 15       | 13       | ![change](https://www.tiobe.com/images/down.png)     | Swift                | 1.223%  | -0.54% |
| 16       | 17       | ![change](https://www.tiobe.com/images/up.png)       | Go                   | 1.081%  | -0.49% |
| 17       | 9        | ![change](https://www.tiobe.com/images/downdown.png) | Perl                 | 1.073%  | -0.88% |
| 18       | 11       | ![change](https://www.tiobe.com/images/downdown.png) | R                    | 1.016%  | -0.80% |
| 19       | 19       |                                                      | PL/SQL               | 0.850%  | -0.63% |
| 20       | 14       | ![change](https://www.tiobe.com/images/downdown.png) | Visual Basic         | 0.682%  | -1.07% |

各语言最新的排名在：<https://www.tiobe.com/index.php/content/paperinfo/tpci/index.html> 

C语言是伴随着Unix一起起来的，作为一个有着40多年历史的语言，它是当代很多新兴语言的基础参考体系，但是它也无可避免地带着1970年代的时代烙印。今天的编程语言，基本上都是一家主持的，标准统一，编译运行环境单纯。而C语言只有所谓的标准，每个实现C语言编译器和运行库的厂家都在往里面加入自己的方言。

C语言标准的最新版本是2011年的C11，但是目前编译器支持得最好的是1999年的C99。

现代编程语言在语法上差异很小，几乎都是C-like语言。

语言的能力/适用领域主要是由库和传统所决定的。

C语言是从B语言发展而来的，当然，B语言上面并没有A语言，B语言是从BCPL发展而来的，BCPL是从FORTRAN发展而来的。而FORTRAN是人类历史上第一个高级编程语言。

1973年3月，第三版的Unix上出现了C语言的编译器

1973年11月，第四版的Unix(System Four)发布了，这个版本是完全用C语言重新写的。

### C的发展与版本

- K&R
  - 经典C，又被叫做"K&R the C"
- 标准
  - 1989年ANSI发布了一个标准——ANSI C
  - 1990年ISO接受了ANSI的标准——C89
  - C的标准在1995年、1999年和2011年三次更新——C95、C99和C11
- 所有的当代语言都支持C99

## 第一个程序

### Hello,World！

```c
#include <stdio.h>

int main()
{
    printf("Hello,World!\n");
    return 0;
}
```

`\n`表示需要在输出结果后换行

### 做计算

```c
#include <stdio.h>

int main()
{
	printf("%d\n",12+34);
}
```

| 四则运算 | C符号 | 意义 |
| -------- | ----- | ---- |
| +        | +     | 加   |
| -        | -     | 减   |
| ×        | *     | 乘   |
| ÷        | /     | 除   |
|          | %     | 取余 |
| ()       | ()    | 括号 |

