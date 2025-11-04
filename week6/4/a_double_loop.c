#include <stdio.h>

int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int result = -1;

    // 读入棋盘
    printf("请输入9个数字(0或1)，表示3x3棋盘：\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    // 使用双重循环同时检查行和列
    for (i = 0; i < size && result == -1; i++)
    {
        int rowX = 0, rowO = 0; // 第i行的计数器
        int colX = 0, colO = 0; // 第i列的计数器

        for (j = 0; j < size; j++)
        {
            // 检查第i行 (board[i][j])
            if (board[i][j] == 1)
            {
                rowX++;
            }
            else if (board[i][j] == 0)
            {
                rowO++;
            }

            // 检查第i列 (board[j][i])
            if (board[j][i] == 1)
            {
                colX++;
            }
            else if (board[j][i] == 0)
            {
                colO++;
            }
        }

        // 判断第i行是否获胜
        if (rowX == size)
        {
            result = 1;
        }
        else if (rowO == size)
        {
            result = 0;
        }

        // 如果行检查没有结果，再判断第i列是否获胜
        if (result == -1)
        {
            if (colX == size)
            {
                result = 1;
            }
            else if (colO == size)
            {
                result = 0;
            }
        }
    }

    // 检查对角线（保持不变）
    if (result == -1)
    {
        int diag1X = 0, diag1O = 0; // 正对角线
        int diag2X = 0, diag2O = 0; // 反对角线

        for (i = 0; i < size; i++)
        {
            // 正对角线 (board[i][i])
            if (board[i][i] == 1)
            {
                diag1X++;
            }
            else if (board[i][i] == 0)
            {
                diag1O++;
            }

            // 反对角线 (board[i][size-i-1])
            if (board[i][size - i - 1] == 1)
            {
                diag2X++;
            }
            else if (board[i][size - i - 1] == 0)
            {
                diag2O++;
            }
        }

        if (diag1X == size || diag2X == size)
        {
            result = 1;
        }
        else if (diag1O == size || diag2O == size)
        {
            result = 0;
        }
    }

    // 输出结果
    if (result == 1)
    {
        printf("X wins\n");
    }
    else if (result == 0)
    {
        printf("O wins\n");
    }
    else
    {
        printf("The game is a draw\n");
    }

    return 0;
}