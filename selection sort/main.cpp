#include <iostream>

using namespace std;

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

void display (int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size)
{
   for(i=0; i<(size-1); i++)
    {
        small = arr[i];
        for(j=(i+1); j<size; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                count++;
                index = j;
            }
        }
        if(count!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
        count=0;
    }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "The array before it was sorted is: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "The array after it has been sorted is: ";
   display(arr, n);
}
