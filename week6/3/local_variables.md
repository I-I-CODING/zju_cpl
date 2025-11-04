## 函数变量空间独立
```c
void swap(int a, int b);
int main()
{
    int a = 5;
    int b = 6;

    swap(a, b);                           // 将a,b的值传给swap函数

    printf("a = %d, b = %d \n", a, b);

    return 0;
}

void swap(int a, int b)                   // a, b传递进入swap函数，作用域仅在swap函数{}内
{
    int t = a;
    a = b;
    b = t;
}                                         // swap函数运行结束，a, b生存期结束，交换数字后的a, b不存在了
```

---
## 本地变量
- 函数的每次运行，就产生了一个独立的变量空间，在这个空间中的变量，是函数的这次运行所独有的，称作本地变量
- 定义在函数内部（即{}内）的变量就是本地变量
- 参数（即函数名后的()内）也是本地变量

---
## 变量的生存期和作用域
- 生存期：变量出现和消亡之间
- 作用域：在可以访问这个变量（这个变量可以起作用）的范围内
- 统一答案是在{}内

---
## 本地变量的规则
- 块：{}
- 本地变量是定义在块内的
    - 函数的块内
    - 语句的块内(如if (){})
    - 只要是在{}内
- 程序运行进入这个块之前，其中的变量不存在，离开这个块，其中的变量就消失了
- 块外面的定义的变量在块厘米仍然有效
- 块里面定了和外面同名的变量则掩盖了外面的变量
- 不能再一个块内定义同名的变量
- 本地变量不会被默认初始化
- 参数在进入函数的时候会被初始化，如`add(1, 2)`

---
## 其他
- 参数表里的参数要写全，没有则要写`(void)`
- 逗号作为运算符和分隔符
    - 在函数调用中，都好主要用于分隔参数，如：
    ```c
    f(a, b);
    ```

    - 连接表达式时作为运算符，并返回最后一个表达式的值，例如：
    ```c
    int result = (a, b); // 先计算a, 然后计算b, 最后将b的值赋给result
    ```

    - 在函数调用中，如果逗号出现在括号内（尤其是内部括号），它可能被视为运算符。例如：
    ```c
    f((a, b));
    ```

- c语言不允许函数的嵌套定义，需要平行定义
嵌套定义：
```c
#include <stdio.h>

// 主函数
int main() {
    int num1, num2;
    
    printf("请输入两个整数: ");
    scanf("%d %d", &num1, &num2);
    
    // 错误：在main函数内部定义另一个函数
    int add(int a, int b) {  // 编译错误！
        return a + b;
    }
    
    int result = add(num1, num2);
    printf("结果是: %d\n", result);
    
    return 0;
}
```

平行定义：
```c
#include <stdio.h>

// 正确：在main函数外部定义add函数
int add(int a, int b) {
    return a + b;
}

// 主函数
int main() {
    int num1, num2;
    
    printf("请输入两个整数: ");
    scanf("%d %d", &num1, &num2);
    
    int result = add(num1, num2);
    printf("结果是: %d\n", result);
    
    return 0;
}
```

- 可以写`int main (void)`
- `return 0;`有意义

---

## 不建议的写法
```c
// 不推荐 - 混合声明
int i,j,sum(int a, int b);

// 推荐 - 分开声明
int i, j;                    // 变量声明
int sum(int a, int b);       // 函数声明

// 不推荐，容易误以为return是函数
return (i);
```
