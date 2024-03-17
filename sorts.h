#include"includes.h"

void bubble_sort(std::vector<int>& arr){
    bool IsSwapped;
    do{
        IsSwapped = false;
        for (size_t i = 0; i<arr.size() - 1; ++i){
            if(arr[i]< arr[i+1]){
                std::swap(arr[i], arr[i+1]);
                IsSwapped = true;
            }
        }
    }
    while(IsSwapped);
}

void insertion_sort(std::vector<int>& arr){
    
}