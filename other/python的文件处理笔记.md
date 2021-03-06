# python的文件操作笔记

## 读文件

```python
f = open(file = '文件路径',mode = '模式', encoding = '字符编码') #打开文件
data = f.read() #读取文件到data里
print(data) #输出
f.close() #关闭文件

#也可以写成下面这样，省略一些东西
f = open('文件路径'，'模式','字符编码')
```

## 写文件

```python
f = open(file = '文件路径',mode = '模式', encoding = '字符编码') #打开文件
f.write(#欲写入的内容) #写入文件
f.close() #关闭文件
```

在以上读和写的操作中，文件路径可以使用`绝对路径`，也可以使用`相对路径`，字符编码可以省略，在python3中默认使用`utf-8 `。

## 追加模式

在上面的文件写入中，写入的内容是以覆盖的方式写入的，当我们不想覆盖原来的内容，而只是想在原来的内容后添加一些内容时，我们可以采用`追加模式` ，追加模式的写法为`ab`。追加模式同样是文件的写入，只是写入方法不同。

## 读写混合操作

有读写模式（`r+`）和写读模式（`w+`）两种。读写模式是以读的方式打开，同时支持写；写读模式是以写的方式打开，同时支持读。

## 更好的方法

在上面的代码中，我们发现在文件处理的最后，我们都要以`close()`来关闭文件，在实际使用中我们通常用`with`语句来帮我们调用close()

```python
with open('文件路径','模式')
	#欲执行的文件操作
```

## 文件模式

打开文件的模式有下面这些：

| 写法 | 模式       |
| ---- | ---------- |
| `r`  | 只读       |
| `rb` | 二进制读取 |
| `w`  | 写入       |
| `wb` | 二进制写入 |
| `ab` | 追加模式   |
| `r+` | 读写模式   |
| `w+` | 写读模式   |

## 智能检测文件编码

在实际使用中，我们可能不知道文件使用了什么编码，因此我们可以使用`chardet`模块来智能检测文件编码。代码如下：

```python
result=chardet.detect(open('log','rb').read())
print(result)
```

[^注意]: `chardet`是一个第三方库，因此，你需要自己安装它

## 最后

笔记只是文件处理的基本操作，没有涉及一些高级方法。

