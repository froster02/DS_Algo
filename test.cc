#include <stdio.h> 

int find1(int i, int j, int a[], int key, int n) {
    int l = i + 1, h = j - 1, mid, flag = 0;
    mid = l + (h - l) / 2;
    while (l <= h) {
        if (a[mid] == key) 
            return mid;
        if (a[mid] < key) {
            l = mid + 1;
            mid = l + (h - l) / 2;
        } else {
            h = mid - 1;
            mid = l + (h - l) / 2;
        }
    }
    return -1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int i, j, k, n, p;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = n - 1; i > 0; i--) {
            for (j = 0; j < n; j++) {
                p = find1(j, i, a, a[i] - a[j], n);
                if (p != -1) {
                    printf("%d %d %d", (j+1), (p+1), (i+1));
                    printf("\n");
                    break;
                }
            }
            if (p != -1) break;
        }
        if (p == -1)
            printf("No Sequence Found");
    }
}