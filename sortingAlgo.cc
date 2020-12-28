#include <iostream>
#include <algorithm>
using namespace std;

//  PRINTING FUNCTION
void printing(int a[], int n) {
    cout << "\n\nAns -> |";
    for (int i = 0; i < n; i++)
        cout << a[i] << "|";
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    printing(a, n);
}

void insertionSort(int a[], int n) {
    for (int i = 1; i <= n - 1; i++) {
        int idx = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > idx) {
            a[j + 1] = a[j];
        }
        a[j + 1] = idx;
    }
    printing(a, n);
}

int main() {

    int n, a[10];
    cout << "Enter array limt : ";
    cin >> n;
    cout << "\nEnter array elements : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    char q;

    do {

        cout << "\nWhich Sorting you want to apply ? \n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n4.Merge Sort\n5.Quick Sort\n6.Counting Sort\n7.DNF Sort\n8.Bucket Sort\n9.Wave Sort";
        cout << endl;
        cout << "\nEnter Choice : ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                bubbleSort(a, n);
                break;
            case 2:
                insertionSort(a, n);
                break;
                // case 3:
                //     selectionSort(a, n);
                //     break;
                // case 4:
                //     mergeSort(a, n);
                //     break;
                // case 5:
                //     quickSort(a, n);
                //     break;
                // case 6:
                //     countingSort(a, n);
                //     break;
                // case 7:
                //     dnfSort(a, n);
                //     break;
                // case 8:
                //     bucketSort(a, n);
                //     break;
                // case 9:
                //     waveSort(a, n);
                //     break;


            default:
                cout << "\nWrong Choice, enter again!!!" << endl;
                break;
        }
        cout << "\n\nContinue : Y or N" << endl;
        cin >> q;

    } while (q == 'Y' || q == 'y');
    return 0;
}