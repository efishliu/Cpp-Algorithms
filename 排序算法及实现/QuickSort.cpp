#include <iostream>
#include <algorithm>
using namespace std;

//传统划分算法：用两个变量分别从右往左，从左往右进行遍历，
//并将比基准点小的换到左边，比基准点大的换到右边
//时间复杂度：最坏情况O(N^2),平均O(N*logN)
template <typename T>
int __Partition(T arr[],int l,int r){
    T pivot = arr[l];
    while(l < r){
        while(l < r && arr[r] > pivot)  r--;
        arr[l] = arr[r];
        
        while(l < r && arr[l] < pivot)  l--;
        arr[r] = arr[l];
    }
    arr[l] = pivot;
    return l;
}

//第二种划分方法：从左往右遍历，只要遇到小于基准点的数就换到左边
template <typename T>
int __Partition2(T arr[],int l,int r){
    T pivot = arr[l];
    int i = l;
    int j;
    for(j = l + 1;j <= r;j++)
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    swap(arr[l],arr[j]);//此时arr[j]小于pivot
    return j;
}

template <typename T>
void __QuickSort(T arr[],int l,int r){
    if(l < r){
        int pos = __Partition(arr,l,r);
        //int pos = __Partition2(arr,l,r);
        __QuickSort(arr,l,pos-1);
        __QuickSort(arr,pos+1,l);
    }

}

template <typename T>
void QuickSort(T arr[],int n){
    __QuickSort(arr,0,n-1);
}
