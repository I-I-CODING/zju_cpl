# 函数原型

## 参数列表

- 不允许的内容
```c
// 错误：缺少参数类型
void func(x);           // 错误！x的类型未指定

// 错误：参数列表包含函数体
void func(int a) {}     // 这是函数定义，不是原型

// 错误：重复的参数名
void func(int a, int a); // 编译错误

// 错误：不完整的类型（在标准C中）
void func(int a[]);     // 可以，但实际是指针
void func(int a[][]);   // 错误！多维数组需要除第一维外的所有维度
```

- 允许的内容
```c
// 正确：各种有效的参数声明
void func1(void);                      // 无参数
void func2(int a);                     // 基本类型
void func3(int a, float b);            // 多个参数
void func4(int *ptr);                  // 指针
void func5(int arr[], int size);       // 数组
void func6(const char *str);           // 常量指针
void func7(int (*cmp)(int, int));      // 函数指针
void func8(struct Student s);          // 结构体
void func9(char format[], ...);        // 可变参数
```

- 注意事项
    1. 在函数原型中，参数名是可选的
    ```c
    int max(int a, int b);  // 带参数名
    int max(int, int);      // 不带参数名 - 同样有效
    ```
    
    2. 在函数定义中，参数名是必需的
    ```c
    // 原型（声明）
    int multiply(int, int);

    // 定义
    int multiply(int x, int y) {  // 必须提供参数名
        return x * y;
    }
    ```