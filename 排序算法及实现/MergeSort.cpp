#include <iostream>

using namespace std;

template <typename T>
void __Merge(T arr[],int left,int mid,int right);

template <typename T>
void __MergeSort(T arr[],int left,int right){
    if(left >= right)   return;
    int mid = (left + right) / 2;
    __MergeSort(arr,left,mid);
    __MergeSort(arr,mid+1,right);
    
    //改进：对于基本有序的数组效果很好
    //if(arr[mid] > arr[mid+1])
    //    merge_t(arr,left,mid,right);
    __Merge(arr,left,mid,right);
}

template <typename T>
void __Merge(T arr[],int left,int mid,int right){
    T *temp = new T[right - left + 1];
    
    for(int i = left;i <= right;i++)
        temp[i - left] = arr[i];
    
    int i = left,j = mid + 1;
    int k;
    for(k = left;i <= mid && j <=right;k++){
        if(temp[i - left] < temp[j - left]){
            arr[k] = temp[i - left];
            i++;
        }
        else{
            arr[k] = temp[j - left];
            j++;
        }
    }
    while(i <= mid){
        arr[k++] = temp[i - left];
        i++;
    }
    while(i <= mid){
        arr[k++] = temp[j - left];
        j++;
    }
}


template <typename T>
void __Merge2(T arr[],int left,int mid,int right){
    T *temp = new T[right - left + 1];
    
    for(int i = left;i <= right;i++)
        temp[i - left] = arr[i];
    
    int i = left,j = mid + 1;
    for(int k = left;k <= right;k++){
        if(i > mid){
            arr[k] = temp[j - left];
            j++;
        }
        else if(j > right){
            arr[k] = temp[i - left];
            i++;
        }
        else if(arr[i] < arr[j]){
            arr[k] = temp[i - left];
            i++;
        }
        else{
            arr[k] = temp[j - left];
            j++;
        }
    
    }
}

template <typename T>
void MergeSort(T arr[],int n){
    __MergeSort(arr,0,n-1);
}



