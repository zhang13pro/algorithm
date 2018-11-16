/*
    version 2.0
    author ZBB

#include <iostream>
//#include <algorithm>
#include "SortTestHelper.h"

using namespace std;

void selectionSort(int arr[],int n){

    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    int n = 1000;
    int *arr = SortTestHelper::generateRandomArray(n,0,n);
    selectionSort(arr,n);
    //for(int i = 0;i < n;i++){
    //   cout << arr[i] <<" ";
    //}
    SortTestHelper::printArray(arr,n);

    delete[] arr;

    return 0;
}

*/


//  version 1.1
//  author ZBB
//  not only intArray this time

#include <iostream>
//#include <algorithm>
#include "SortTestHelper.h"
#include "Student.h"

using namespace std;

template<typename T>
void selectionSort(T arr[],int n){

    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionSort(a,10);
    for(int i = 0;i < 10;i++){
       cout << a[i] <<" ";
    }
    cout << endl;

    float b[4] = {5.5,6.3,3.2,1.5};
    selectionSort(b,4);
    for(int i = 0;i < 4;i++){
       cout << b[i] <<" ";
    }
    cout << endl;

    string c[4] = {"D","C","E","B"};
    selectionSort(c,4);
    for(int i = 0;i < 4;i++){
       cout << c[i] <<" ";
    }
    cout << endl;

    Student d[4] = {{"D",88},{"C",88},{"B",99},{"A",63}};
    selectionSort(d,4);
    for(int i = 0;i < 4;i++){
       cout << d[i] <<" ";
    }
    cout << endl;

    return 0;
}



