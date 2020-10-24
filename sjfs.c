//sjfs
#include<stdio.h>
#define maxm 10

void swapping(int * a, int * b) {
    int q = 0;
    q = * a;
    * a = * b;
    * a = q;
}

int main() {
    int j, n, min, k = 1, b1 = 0, q = 0, ta = 0, sum = 0, bt[maxm], at[maxm], wt[maxm], tt[maxm], p[maxm];
    float totalWT = 0, totalTAT = 0, sumTAT = 0, sumWT = 0;
    wt[0] = 0; 
    printf("Enter Number of process : ");
    scanf("%d", & n);
    printf("Enter Burst time : ");
    for (int i = 0; i < n; i++)
        scanf("%d", & bt[i]);
    printf("Enter Arrival Time : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", & at[i]);
        p[i] = i;
    }
    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (at[i] < at[j]) {
                swapping( & p[j], & p[i]);
                swapping( & at[j], & at[i]);
                swapping( & bt[j], & bt[i]);
            }
        }
    }
    for (j = 0; j < n; j++) {
        b1 += bt[j];
        min = bt[k];
        for (int i = k; i < n; i++) {
            if ((bt[i] < min) && (b1 >= at[i])) {
                swapping( & p[k], & p[i]);
                swapping( & at[k], & at[i]);
                swapping( & bt[k], & bt[i]);
            }
        }
        k++;
    }
    int i = 0;
    while(i < n){
        sum = sum + bt[i - 1];
        wt[i] = sum - at[i];
        sumWT = sumWT + wt[i];
        i++;
    }
    totalWT = (sumWT / n);
    printf("\nAverage WT : %.2f", totalWT);
    i = 0;
    while(i < n){
        ta = ta + bt[i];
        tt[i] = ta - at[i];
        sumTAT = sumTAT + tt[i];
        i++;
    }
    totalTAT = (sumTAT / n);
    printf("\nAverage TAT : %.2f", totalTAT);
    return 0;
}