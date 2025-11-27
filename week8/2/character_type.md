# 字符类型
- `char`是一种整数，也是一种特殊的类型：字符
- `'1'`是字符，表示字符对应的ASCII编码值
- 用%c输出字符
```c
char c;
char d;
c = 1;
d = '1';
printf("c = %d", c);
printf("d = %c", d);

c = 1
d = 49
```

# 字符的输入输出
- 代码1
```c
#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);  // 读取一个字符
    printf("c=%d\n", c);  // 打印字符的ASCII码值
    printf("c=%c'\n", c); // 打印字符本身
    return 0;
}
```
结果
```c
c = 49
c = '1'
```
输入`1`时，`scanf("%c", &c)`将输入视为字符，读取的是字符`1`，其ASCII码为49

- 代码2
```c
#include <stdio.h>

int main()
{
    int i;
    char c;
    scanf("%d", &i);  // 读取一个整数
    c = i;            // 将整数赋值给字符变量
    printf("c=%d\n", c);  // 打印字符的整数值
    printf("c=%c'\n", c); // 打印字符对应的ASCII字符
    return 0;
}
```
结果：
```c
c = 1
c =''
```
输`1`时，`scanf("%d", &i)`将输入视为整数，变量`i`被赋值为1
`c = i`将整数值1赋给字符变量`c`，而1在ASCII码中对应一个不可打印的字符

# 字符输入的空格处理
- 对于`scanf("%d %c)`
输入`10X` 输出` i = 10, c = 'X'`
输入`10  X` 输出 `i = 10, c = 'X'`

- 对于`scanf("%d%c)`
输入`10X` 输出` i = 10, c = ' X'`
输入`10 X` 输出`i = 10, c =' ' `

总结
- 有空格：会跳过数字后面所有的空格，读取字符
- 无空格：会立即读取数字后面的第一个字符

# 字符的运算
```c
char c = 'A';
c++;
printf("%c\n", i);
int i = 'Z' - 'A';
printf(%d\n", i);
```
结果
```c
B
25
```
- 一个字符加1得到ASCII码表后一个字符
- 两个字符做差，得到他们在表中的距离
- 大小写转换
```c
'a' - 'A' // a和A之间的距离，大写字母编号小于小写字母
char upper = 'B';
char lower = upper + 'a' - 'A'; // 将 'B' 转换为 'b'

char lower2 = 'm';
char upper2 = lower2 + 'A' - 'a'; // 将 'm' 转换为 'M'
```