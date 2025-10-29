switch case结构
switch (控制表达式) {
    case 常量: 
        语句
        ...
    case 常量:
        语句
        ...
    default:
        语句
        ...
}

控制表达式只能是整数型结果

case只是入口，从对应的case进入后一直执行后面的语句，直至break
for example:
switch (3)
{
    case 1:
    case 2:
        printf("a");
        break;
    case 3:
        printf("b");
    case 4:
        printf("c");
        break;
    default:
        printf("error");
        break;
}
result: bc