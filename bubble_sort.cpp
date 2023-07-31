#include<iostream>

using namespace std;

void bubbleSort(int a[], int n){    //function for sorting array using bubble sort algorithm
    int temp, m, i;
    m = n-1;                         //for bubble sort we need n-1 steps
    for(int j=0; j<m; j++){
        for(i=0; i<n; i++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    } 
}

void display(int arr[], int n){     //function to display the array
    int i;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 3, 4, 2, 7, 9, 8, 6, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    display(arr, n);
    return 0;
}