#include<bits/stdc++.h>
using namespace std;
void insert(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void print(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    insert(ar,n);
    print(ar,n);
    return 0;
}
