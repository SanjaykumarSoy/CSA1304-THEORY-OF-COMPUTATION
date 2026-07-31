#include <stdio.h>
int n, e[10][10], visited[10];
void epsilonClosure(int state)
{
    int i;
    visited[state] = 1;
    printf("q%d ", state);
    for(i = 0; i < n; i++)
    {
        if(e[state][i] == 1 && !visited[i])
            epsilonClosure(i);
    }
}
int main()
{
    int i, j;
    printf("Enter the number of states: ");
    scanf("%d", &n);
    printf("Enter the epsilon transition matrix (0/1):\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &e[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            visited[j] = 0;

        printf("\nEpsilon-Closure(q%d) = { ", i);
        epsilonClosure(i);
        printf("}");
    }
    return 0;}
