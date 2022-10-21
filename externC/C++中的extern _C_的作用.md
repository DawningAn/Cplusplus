🌟
😊😊😊
📝

@[TOC](目录)

---

# 📝 extern C的用法

简单来讲，被extern "C"修饰的代码将按照C语言的方式去编译

```cpp
extern "C" {}
```

**extren C 将代码按照C语言的的方式去编译**

加入我们需要在项目中需要使用到C语言的第三方库/框架，那么相当于C与C++联合开发

对函数使用时将extern "C" 放在函数声明前面，而并不放在函数定义前面;两个地方都放也是可以的



```c
extern "C" int add(int x, int y);
int main() {
	cout << add(10,20) << endl;
}

int add(int x, int y) {
	return x + y;
}
```

*考虑错误的情况*

```c
extern "C" int add(int x, int y);
int add(int x, int y);
//显然这两个函数同时存在的，会引发歧义
int main() {
	cout << add(10,20) << endl;
}

int add(int x, int y) {
	return x + y;
}
int add(int x, int y) {
	return x + y;
}
//报错！！！
```

回顾：在重载时，也有类似歧义的场景。两个函数名是不能相同的，会引发歧义，即二义性。

---

# 📝 C与C++混合

假设以c语言创建了一个math函数，实现加减乘除的函数
那么在C++文件使用时直接进行如下定义

```c
extern "C" {  //需要定义该头文件，存放math.c的函数声明
#include "math.h"
}
```

```c
//但是要注意，C语言文件下是无法使用该方法的
//当我们再想在C程序里也想用被extern "C"修饰的代码，相当于这部分我想让C和C++都可以使用
//希望实现在C文件里就去掉extern "C" ，而遇到C++环境就加上
#define __cplusplus  //这个宏就是C++文件默认会定义的，只要是C++文件就会有，而C文件是没有的
```

我们可以使用宏，结合条件编译，实现我们的想法

`#define __cplusplus  //这个宏就是C++文件默认会定义的，只要是C++文件就会有，而C文件是没有的`

例如：在math.c里定义C语言的求和函数，并在math.h头文件里使用如下方法进行修饰：
```cpp
#ifdef __cplusplus
extern "C" {
#endif 
	int sum(int x, int y);

#ifdef __cplusplus
}
#endif
```

**即在头文件里我们使用条件编译，检测到环境是C++时就加上extern "C"**
![在这里插入图片描述](https://img-blog.csdnimg.cn/f4f27e36e9f640ebbf614ea9892a698f.png)

验证在C环境下也能使用：

![在这里插入图片描述](https://img-blog.csdnimg.cn/4f69287b12ec421b828642c08c7ef0b3.png)


那么很显然，这样就实现了sum函数既可以在C编译环境下使用，也可以在C++编译环境下使用。


---

# 总结

将上述例子直观理解就是把头文件的包含直接替换：

C++：(test.cpp)

```cpp
//#include "math.h"  //相当于替换如下
#ifdef __cplusplus
extern "C" {
#endif 
	int sum(int x, int y);

#ifdef __cplusplus
}
#endif
//并测试C也能使用sum
extern "C" int sum(int x, int y);
int main() {
	sum(100, 200);
	return 0;
}
```

C：(math.c)

```c
//#include "math.h"  //相当于替换如下
#ifdef __cplusplus
extern "C" {
#endif 
	int sum(int x, int y);

#ifdef __cplusplus
}
#endif 
#include <stdio.h>
int sum(int x, int y) {
	printf("测试C环境\n");
	return x + y;
}
```
那么显然这两种是不同的。

---
