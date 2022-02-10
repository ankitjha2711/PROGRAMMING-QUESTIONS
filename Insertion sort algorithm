#include <bits/stdc++.h> 
using namespace std; 
void insertionSort(int arr[], int n) 
{ 
int i, key, j; 
for (i = 1; i < n; i++) 
{ 
key = arr[i]; 
j = i - 1; 
while (j >= 0 && arr[j] > key) 
{ 
arr[j + 1] = arr[j]; 
j = j - 1; 
} 
arr[j + 1] = key; 
} 
} 
void printArray(int arr[], int n) 
{ 
int i; 
for (i = 0; i < n; i++) 
cout << arr[i] << " "; 
cout << endl; 
} 
int main() 
{ 
int n; 
cout<<"Enter size of array: "<<" "; 
scanf("%d",&n); 
int *arr = new int[n]; 
cout<<"Enter the elements of array: "<<" "; 
for(int i = 0 ; i < n; i++){ 
scanf("%d",&arr[i]); 
} 
insertionSort(arr, n); 
cout<<"The elements after sorting is: "<<" "; 
printArray(arr, n); 
return 0; 
}
