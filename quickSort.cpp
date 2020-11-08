 #include <iostream>
 #include <algorithm>
 #define maxm 1000
 using namespace std;

 int partision(int * a, int s, int e) {
     int i = s - 1;
     int j = s;
     int pivot = a[e];

     for (; j <= e - 1;) {
         if (a[j] <= pivot) {
             i++;
             swap(a[i], a[j]);
         }
         j++;
     }
     //place the pivot element in the correct index
     swap(a[i + 1], a[e]);
     return (i + 1);
 }

 void quickSort(int *a, int s, int e) {
     //base case
     if (s >= e)
         return;
     //recursive case 
     int p = partision(a, s, e);

     //left part of partision
     quickSort(a, s, p - 1);
     //right part of partision
     quickSort(a, p + 1, e);
 }

 int main() {

     int n, a[maxm];
     cin >> n;
     for (int i = 0; i < n; i++)
         cin >> a[i];

     quickSort(a, 0, n - 1);

     for (int i = 0; i < n; i++)
         cout << a[i] << " ";

     return 0;
 }