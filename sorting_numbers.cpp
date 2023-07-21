#include <iostream>

using namespace std;

void sort(int arr[], int size){
    int i, j;

    for(i=0; i<size; i++){

        for(j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
           
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

int main(){
    int arr[] = {1,6,9,3,2,8,7,0,4,5};
    int N = sizeof(arr)/sizeof(arr[8]);
    sort(arr, N);
    cout<<"The sorted array is:\n";
    printArray(arr, N);
    return 0;

}