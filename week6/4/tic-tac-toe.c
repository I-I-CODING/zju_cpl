#include <stdio.h>

int main()
{
    const int size = 3;
    int i, j;
    int board[size][size];
    int numofX;
    int numofO;
    int result = -1;

    // 填入棋盘情况
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]); // 1代表X，0代表O
        }
    }

    // 检查行
    if (result == -1)
    {
        for (i = 0; i < size && result == -1; i++)
        {
            numofX = numofO = 0;
            for (j = 0; j < size; j++)
            {
                if (board[i][j] == 1)
                {
                    numofX++;
                }
                else if (board[i][j] == 0)
                {
                    numofO++;
                }
            }
            if (numofX == size)
            {
                result = 1;
            }
            else if (numofO == size)
            {
                result = 0;
            }
        }
    }

    // 检查列
    if (result == -1)
    {
        for (j = 0; j < size && result == -1; j++)
        {
            numofX = numofO = 0;
            for (i = 0; i < size; i++)
            {
                if (board[i][j] == 1)
                {
                    numofX++;
                }
                else if (board[i][j] == 0)
                {
                    numofO++;
                }
            }
            if (numofX == size)
            {
                result = 1;
            }
            else if (numofO == size)
            {
                result = 0;
            }
        }
    }
    // 检查正对角线
    if (result == -1)
    {
        for (i = 0; i < size && result == -1; i++)
        {
            numofX = numofO = 0;
            if (board[i][i] == 1)
            {
                numofX++;
            }
            else if (board[i][i] == 0)
            {
                numofO++;
            }
            if (numofX == size)
            {
                result = 1;
            }
            else if (numofO == size)
            {
                result = 0;
            }
        }
    }

    // 检查反对角线
    if (result == -1)
    {
        for (i = 0; i < size && result == -1; i++)
        {
            numofX = numofO = 0;
            if (board[i][size - i - 1] == 1)
            {
                numofX++;
            }
            else if (board[i][size - i - 1] == 0)
            {
                numofO++;
            }
            if (numofX == size)
            {
                result = 1;
            }
            else if (numofO == size)
            {
                result = 0;
            }
        }
    }

    if (result == 1)
    {
        printf("X is win\n");
    }
    else if (result == 0)
    {
        printf("O is win \n");
    }
    else
    {
        printf("the result is a draw \n");
    }

    return 0;
}