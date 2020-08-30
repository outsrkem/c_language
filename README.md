# C_Language

#### 介绍
​		C语言是一门面向过程、抽象化的通用程序设计语言，广泛应用于底层开发。C语言能以简易的方式编译、处理低级存储器。C语言是仅产生少量的机器语言以及不需要任何运行环境支持便能运行的高效率程序设计语言。尽管C语言提供了许多低级处理的功能，但仍然保持着跨平台的特性，以一个标准规格写出的C语言程序可在包括一些类似嵌入式处理器以及超级计算机等作业平台的许多计算机平台上进行编译。 [1]

#### C 语言包含的数据类型
![数据类型](https://images.gitee.com/uploads/images/2019/1018/114336_801a031e_5330846.jpeg "在这里输入图片标题")

# Makefile

一个简单的Makefile,用于编译libraryNum.c文件

```
all:
	gcc -std=c99 libraryNum.c -lm -o libraryNum
clean: 
	rm -rf libraryNum libraryNum.o
```

