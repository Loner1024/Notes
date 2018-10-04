# 为git添加代理服务

打开用户文件夹，找到`.ssh`文件夹，然后找到`config`文件（没有的话就新建一个），修改内容为：

```
Host github.com
ProxyCommand connect -H 127.0.0.1:1080 %h 22
```

其中127.0.0.1是代理地址，1080是代理端口。

以上仅适用于`windows`及`ssh`服务，不适用与其他操作系统及HTTPS。