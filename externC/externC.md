# extern C的用法

简单来讲，被extern "C"修饰的代码将按照C语言的方式去编译

```c++
extern "C" {}
```

extren C 将代码按照C语言的的方式去编译
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

考虑错误的情况

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

回顾：在重载时，也有类似歧义的场景。两个函数名是不能相同的，会引发歧义，即二义性



# C与C++混合

假设以c语言创建了一个math函数，实现加减乘除的函数
那么在C++文件使用时直接进行如下定义

```c
extern "C" {  //需要定义该头文件，存放math.c的函数声明
#include "math.h"
}

```

