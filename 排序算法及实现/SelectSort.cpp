#include <iostream>

using namespace std;

//选择排序基础算法
//算法思想：对数据进行N次遍历，每次遍历找到最小值并进行交换，时间复杂度：Ｏ(N^2)
template <typename T>
void selectSort(T arr[],int n){
  for(int i = 0 ;i < n ;i++){
    int min_index = i;
    for(int j = i + 1;j < n ;j++){
      if(arr[j] < arr[min_index])
        min_index = j;
      swap(arr[i],arr[min_index]);
    }
  }
  
//选择排序改进算法
//算法思想：每次遍历同时找到最小值和最大值并进行交换
  template <typename T>
  void selectSort2(T arr[],int n){
    int left = 0,right = n-1;
    while(left < right){
      
      if(arr[left] > arr[right])
        swap(arr[left],arr[right]);
      
      int min_index = left;
      int max_index = right;
      
      for(int i = left + 1;i < right;i++){
        if(arr[i] < arr[left])
          min_index = i;
        if(arr[i] > arr[right])
          max_index = i;
      }
      
      swap(arr[left],arr[min_left]);
      swap(arr[right],arr[max_left]);
      
      left++;
      right--;
      
    }
  
  }
