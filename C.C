#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_SQUARES 101

int snakeLadder(int A[][2], int A_size, int B[][2], int B_size)
{
    int moves[MAX_SQUARES];
    int vis[MAX_SQUARES];
    int snake[MAX_SQUARES];
    int ladder[MAX_SQUARES];

    for (int i = 0; i < MAX_SQUARES; i++)
    {
        moves[i] = INT_MAX;
        vis[i] = 0;
        snake[i] = 0;
        ladder[i] = 0;
    }

    for (int i = 0; i < A_size; i++)
    {
        ladder[A[i][0]] = A[i][1];
    }

    for (int i = 0; i < B_size; i++)
    {
        snake[B[i][0]] = B[i][1];
    }

    int queue[MAX_SQUARES * MAX_SQUARES];
    int front = 0, rear = 0;

    moves[1] = 0;
    queue[rear++] = 1;
    vis[1] = 1;
    int roll = 0;

    while (front < rear)
    {
        int sz = rear - front;

        for (int i = 0; i < sz; i++)
        {
            int square = queue[front++];

            if (square == 100)
                return roll;

            for (int dice = 6; dice >= 1; dice--)
            {
                int ns = square + dice;

                if (ns <= 100 && !vis[ns])
                {
                    if (ladder[ns] != 0)
                        queue[rear++] = ladder[ns];
                    else if (snake[ns] != 0)
                        queue[rear++] = snake[ns];
                    else
                        queue[rear++] = ns;

                    vis[ns] = 1;
                }
            }
        }

        roll++;
    }

    return -1;
}

int main()
{
    // Define your input matrices A and B
    int A[][2] = {
        {32, 62},
        {42, 68},
        {12, 98}};
    int A_size = sizeof(A) / sizeof(A[0]);

    int B[][2] = {
        {95, 13},
        {97, 25},
        {93, 37},
        {79, 27},
        {75, 19},
        {49, 47},
        {67, 17}};
    int B_size = sizeof(B) / sizeof(B[0]);

    int result = snakeLadder(A, A_size, B, B_size);
    printf("Minimum rolls needed: %d\n", result);

    return 0;
}
