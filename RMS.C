#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, n;

    printf("Enter the number of tasks: ");
    scanf("%d", &n);
    int taskid[n];
    float period[n], execution[n], deadline[n], start[n], finish[n], u = 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter the execution time and period for task %d: ", i + 1);
        scanf("%f%f", &execution[i], &period[i]);
        taskid[i] = i;
        u += execution[i] / period[i];
        deadline[i] = period[i];
    }
    if (u * 1.0 > n * (pow(2.0, 1.0 / n) - 1))
    {
        printf("Utilization factor is greater than 1!");
        exit(0);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            float temp;
            if (period[i] > period[j])
            {
                temp = period[i];
                period[i] = period[j];
                period[j] = temp;

                temp = execution[i];
                execution[i] = execution[j];
                execution[j] = temp;

                temp = taskid[i];
                taskid[i] = taskid[j];
                taskid[j] = temp;
            }
        }
    }

    start[0] = 0;
    finish[0] = execution[0];
    deadline[0] = period[0];
    for (i = 1; i < n; i++)
    {
        start[i] = finish[i - 1];
        finish[i] = start[i] + execution[i];
        deadline[i] = deadline[i - 1] + period[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("\nTask%d -> starts:%0.3f, ends:%0.3f, execution time:%0.3f, period:%0.3f", taskid[i] + 1, start[i], finish[i], execution[i], period[i]);
    }
    return 0;
}
