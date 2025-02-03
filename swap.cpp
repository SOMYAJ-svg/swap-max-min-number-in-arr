#include<iostream>
using namespace std;
void finmaxmin(int *arr,int size,int *max,int *min){
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
void swap(int* arr, int size, int max, int min){
    for (int i = 0; i < size; i++) {
        if (arr[i] == max) {
            arr[i] = min;
        }else if(arr[i]==min){
            arr[i]=max;
        }
}
}
void printarr(int* arr, int size){
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int* arr = new int[size];
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    int max,min;
    finmaxmin(arr,size,&max,&min);
    cout<<"Max element is "<<max<<endl;
    cout<<"Min element is "<<min<<endl;
    cout<<"real arr: ";
    printarr(arr,size);
    swap(arr, size, max, min);
    cout << "Array after swapping max and min: ";
    printarr(arr, size);

    delete[] arr;
    
    return 0;
}
