#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,index;
    float WT,TurnAroundTime,temp;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    float *bt = (float *)malloc(n * sizeof(float));
    float *wt = (float *)malloc(n * sizeof(float));
    float *tt = (float *)malloc(n * sizeof(float));
    printf("Enter the burst times of %d processes: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &bt[i]);
    }

    for(i = 0; i < n-1; i++){
        // index = i;
        for(j=0; j < n-i-1; j++){

            if(bt[j]>bt[j+1]){
                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;
            }



        }
    }



 printf("\nThe details of the processes are as below:\nProcess\tBurst Time\tTurn Around Time\tWaiting Time\n");
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            wt[0] = 0;
        }
        else
        {
            wt[i] = bt[i - 1] + wt[i - 1];
        }
        tt[i] = bt[i] + wt[i];
        printf("%d\t%f\t%f\t\t%f\n", i + 1, bt[i], tt[i], wt[i]);
        WT = WT + wt[i];
        TurnAroundTime = TurnAroundTime + tt[i];
    }
    printf("The average waiting time is: %f", WT/(float)n);
    printf("\nThe average turn around time is: %f", TurnAroundTime/n);
    return 0;
}
