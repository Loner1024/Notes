# Ubuntu配置python环境

为windows10下的ununtu子系统配置python环境。

## 更换apt源为国内

备份原有配置文件

```shell
sudo cp /etc/apt/sources.list /etc/apt/sources.list.bak
```

编辑源列表文件

```shell
sudo vim /etc/apt/sources.list
```

将原有内容替换为

```shell
deb http://mirrors.aliyun.com/ubuntu/ bionic main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-security main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-updates main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-proposed main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-backports main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-security main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-updates main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-proposed main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-backports main restricted universe multiverse
```

这里使用的是阿里云的源

替换保存后运行命令更新软件列表和软件包

```shell
sudo apt-get update
sudo apt-get upgrade
```

## 安装python3

```python

```

## 安装pip

安装pip时需要切换到root账户，使用su命令输入密码后切换

```shell
su
```

如果输入密码后出现如下错误

```shell
su: Authentication failure
```

可以使用下面的命令来重新设置密码解决

```shell
sudo passwd root
```

再次使用`su`，输入密码后完成切换。

然后安装pip

```shell
apt install python-pip
```

等待安装完成。

至此已经配置完成。