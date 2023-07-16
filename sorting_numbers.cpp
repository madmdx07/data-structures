#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size){
    int i, j, count=1;

    for(i=0; i<size; i++){
        cout<<count<<" comparistion: "<<arr[i]<< " with";
        for(j=i+1; j<size; j++){
            cout<<" "<<arr[j]<<"\n";
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
            count =+ 1;
           
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
    bubbleSort(arr, N);
    cout<<"The sorted array is:\n";
    printArray(arr, N);
    return 0;

}