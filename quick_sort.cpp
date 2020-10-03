/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *arr,int l,int r)
{
    int pivot = arr[r];
    
    int i = (l-1);
    
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    
    cout << "return value:" << i+1 << endl;
    return(i+1);
}

void quicksort(int *arr,int l , int h)
{
    if(l<h)
    {
        int pi = partition(arr,l,h);
        
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
}

int main()
{
    int max;
    cin >> max;
    int arr[max];
    for(int i =0 ; i < max;i++)
        cin >> arr[i];
    quicksort(arr,0,max-1);
    for(int i = 0 ; i< max;i++)
        cout << arr[i] << endl;
    return 0;
}
