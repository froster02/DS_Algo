//fcfs
#include<stdio.h>
#define maxm 10

void swapping(int * a, int * b) {
    int q = 0;
    q = * a;
    * a = * b;
    * a = q;
}

int main() {
    int n, i, j, bt[maxm], at[maxm], wt[maxm], tt[maxm], p[maxm];
    int k = 0, temp = 0, sum1 = 0, sum2 = 0;
    float avgWT = 0, avgTAT = 0, sumTAT = 0, sumWT = 0, tp = 0, cpu = 0;

    printf("Enter number of processes : ");
    scanf("%d", & n);
    wt[0] = 0;
    printf("Burst time : ");
    for (i = 0; i < n; i++)
        scanf(" %d", & bt[i]);
    printf("Arrival time : ");
    for (i = 0; i < n; i++) {
        scanf(" %d", & at[i]);
        p[i] = i;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (at[i] < at[j]) {
                swapping( & p[j], & p[i]);
                swapping( & at[j], & at[i]);
                swapping( & bt[j], & bt[i]);
            }
        }
    }
    for (i = 1; i < n; i++) {
        sum1 += bt[i - 1];
        wt[i] = sum1 - at[i];
        sumWT += wt[i];
    }
    avgWT = (sumWT / n);
    sum2 = 0;
    for (i = 0; i < n; i++) {
        sum2 += bt[i];
        tt[i] = sum2 - at[i];
        sumTAT += tt[i];
    }
    avgTAT = (sumTAT / n);
    temp = sum2;
    tp = n / temp;
    cpu = ((temp - k) / temp) * 100;
    printf("\nAverage Response Time : %.2f", avgWT);
    printf("\nAverage Wait Time : %.2f", avgWT);
    printf("\nAverage Turn Around Time : %.2f", avgTAT);
    printf("\nCPU : %.2f", cpu);
    printf("\nThroughput : %.2f", tp);
    return 0;
}