#include <iostream>
#include <algorithm>

using namespace std;

int counting_sort(int a[], int n) {
    int largest_element = -1;
    for (int i = 0; i < n; i++)
        largest_element = max(largest_element, a[i]);

    //create a frequency array to store the the frequency of all the elements
    int * frequecy_array = new int[largest_element + 1];

    for (int i = 0; i < n; i++) {
        //e.g. a[] = {1,2,3} and b[] = {10,20,30}
        //      b[a[0]] gives 20
        //      a[0] = 1
        //      b[1] = 20
        frequecy_array[a[i]]++;
    }

    //put elements back into frequency array by reading the frequency array
    int j = 0;
    for (int i = 0; i <= largest_element; i++) {
        while (frequecy_array[i] > 0) {
            a[j] = i;
            frequecy_array[i]--;
            j++;
        }
    }
    return 0;
}

int main() {

    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    counting_sort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << "|";

    return 0;
}