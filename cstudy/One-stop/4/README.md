# 第四章 分支语句

关系运算符和相等性运算符：

| 运算符 | 含义       |
| ------ | ---------- |
| `==`   | 等于       |
| `!=`   | 不等于     |
| `>`    | 大于       |
| `<`    | 小于       |
| `>=`   | 大于或等于 |
| `<=`   | 小于或等于 |

- 如果表达式中的关系成立则为真（True），否则为假（False），在C语言中分别用`int`型的`0`和`1`表示。
- 这些运算符的两个操作数应该是相同类型的，两边都是整型或者都是浮点型可以做比较，但两个字符串不能做比较。
- ==和!=称为相等性运算符，其余四个称为关系运算符，相等性运算符优先级低于关系运算符。

在C语言中，任何允许语句出现的地方既可以是由;号结尾的一条语句，也可以是由{}括起来的若干条语句或声明组成的语句块。**注意：在语句块的}后面不需要加;号，如果在语句块的}后面加了;号，则这个;号本身又是一条新的语句了，在C语言中，一个单独的;号表示一条空语句。**

## switch语句

switch语句可以产生具有多个分支的控制流程。

```
switch (控制表达式){
    case 常量表达式: 零或多条语句
    case 常量表达式: 零或多条语句
    ...
    default: 零或多条语句
}
```

