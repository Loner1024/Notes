# Sanic安装的坑

windows10环境下安装Sanic，使用pip命令

```shell
pip install sanic
```

报错：

```shell
        raise RuntimeError('uvloop does not support Windows at the moment')
    RuntimeError: uvloop does not support Windows at the moment

    ----------------------------------------
Command "python setup.py egg_info" failed with error code 1 in 
```

Google后发现遇到这个问题的不止我，是由于uvloop对于windows的支持问题，使得sanic并不能很好的在windows上安装，好在windows10上可以在应用商店里安装ubuntu子系统，可以在ubuntu上继续。