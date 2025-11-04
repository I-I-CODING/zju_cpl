## 函数定义
```c
//函数头
void       sum   (int begin, int end)
//函数类型  函数名       参数表 
{
    //函数体
    int i;
    int sum = 0;
    for ( i = begin ; i <= end; i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d \n", begin, end, sum);
}
```

---
## 调用函数
```c
sum();          // 调用函数一定要加()
sum(1, 10);     // 参数
```

---
## 函数返回
- return停止函数执行，并返回一个值
- 根据函数类型决定返回值
void 类型不用返回
int 类型返回int值
- 返回值返回到调用处
```c
int sum(int begin, int end)
{
    int i;
    int sum = 0;
    for ( i = begin ; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}
a = sum(1, 10);
// 结果: a = 55;

```
- 提前返回避免执行不必要的代码

---

## 函数声明
```c
void sum(int b, int b);     // 函数声明，目的是把函数体放在后面

int main()
{

}

void sum(int a, int b)
{

}
```

---
## 参数传递
- c语言调用函数时给的值和参数类型可以不同，编译器会自动转换
