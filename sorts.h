#include "includes.h"

void bubble_sort(std::vector<int> &arr)
{
    bool IsSwapped;
    do
    {
        IsSwapped = false;
        for (size_t i = 0; i < arr.size() - 1; ++i)
        {
            if (arr[i] < arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                IsSwapped = true;
            }
        }
    } while (IsSwapped);
}

void insertion_sort(std::vector<int> &arr)
{
    for (size_t i = 0; i < arr.size(); ++i)
    {
        const int key = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[i] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// quick sort

int partition(int list[], int start, int pivot)
{
    int i = start;
    while (i < pivot)
    {
        if (list[i] > list[pivot] && i == pivot - 1)
        {
            std::swap(list[i], list[pivot]);
            pivot--;
        }

        else if (list[i] > list[pivot])
        {
            std::swap(list[pivot - 1], list[pivot]);
            std::swap(list[i], list[pivot]);
            pivot--;
        }

        else
            i++;
    }
    return pivot;
}

void quickSort(int list[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(list, start, end);

        quickSort(list, start, pivot - 1);
        quickSort(list, pivot + 1, end);
    }
}

// merge sort

void merge(int list[], int start, int end, int mid)
{
    int mergedList[8];
    int i, j, k;
    i = start;
    k = start;
    j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (list[i] < list[j])
        {
            mergedList[k] = list[i];
            k++;
            i++;
        }
        else
        {
            mergedList[k] = list[j];
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        mergedList[k] = list[i];
        k++;
        i++;
    }

    while (j <= end)
    {
        mergedList[k] = list[j];
        k++;
        j++;
    }

    for (i = start; i < k; i++)
    {
        list[i] = mergedList[i];
    }
}

void mergeSort(int list[], int start, int end)
{
    int mid;
    if (start < end)
    {

        mid = (start + end) / 2;
        mergeSort(list, start, mid);
        mergeSort(list, mid + 1, end);
        merge(list, start, end, mid);
    }
}

void shellSort(int list[], int listLength)
{
	for(int step = listLength/2; step > 0; step /= 2)
	{
		for (int i = step; i < listLength; i += 1)
        {       
			int j = i;
			while(j >= step && list[j - step] > list[i])
			{
				std::swap(list[j], list[j - step]);
				j-=step;
				std::cout<<"\ndid";
			}
        }
	}
}

// heap sort

void heapify(int list[], int listLength, int root)
{
	int largest = root;
	int l = 2*root + 1;
	int r = 2*root + 2;
	  
	if (l < listLength && list[l] > list[largest])
		largest = l;
	  
	if (r < listLength && list[r] > list[largest])
		largest = r;

	if (largest != root)
	{
		std::swap(list[root], list[largest]);
		heapify(list, listLength, largest);
	}
}
  
void heapSort(int list[], int listLength)
{
	for(int i = listLength / 2 - 1; i >= 0; i--)
		heapify(list, listLength, i);
	 
	for(int i = listLength - 1; i >= 0; i--)
	{
		std::swap(list[0], list[i]);
		heapify(list, i, 0);
	}
}