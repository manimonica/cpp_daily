/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int *a,int l,int m,int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    cout << "in merge" << endl;
    int p[n1],q[n2];
    int i=0,j=0,k=l;
    
    for(i=0;i<n1;i++)
        p[i] = a[l+i];
    for(j=0;j<n2;j++)
        q[j] = a[m+1+j];
    i=0;j=0;
    while(i<n1 && j < n2)
    {
        if(p[i]<q[j])
        {
            a[k] = p[i];
            i++;
        }
        else
        {
            a[k] = q[j];
            j++;
        }
        k++;
    }
    
    while(i < n1)
    {
     a[k] = p[i];
            i++; k++;  
    }
    while(j<n2)
    {
        a[k] = q[j];
            j++; k++;
    }
    
   cout << "end merge" << endl; 
   for(int i = 0;i <= r;i++)
        cout << a[i];
    
}

int mergesort(int *a,int l, int r)
{
    if(r>l)
    {
        cout << "in mergesort" << endl;
        int m = l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
    
    else
        return 0;
}

int main()
{
    cout<<"Hello World";
    
    int max , n ;
    cout << "enter the max number of element in an array :" << endl;
    cin >> max;
    int arr[max];
    for(int i = 0;i < max;i++)
        cin >> arr[i];
    n = sizeof(arr)/sizeof(arr[0]);
    cout << "array elements:" << endl;
    for(int i = 0;i < n;i++)
        cout << arr[i];
    mergesort(arr,0,n-1);
    
    
    return 0;
}