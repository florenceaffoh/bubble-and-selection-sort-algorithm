#include <iostream>

using namespace std;

void bubbleSort(int array[], int size)
{
  for (int step = 0; step < size - 1; ++step)
  {
    for (int i = 0; i < size - step - 1; ++i)
    {
      if (array[i] > array[i + 1])
      {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void displayArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cout << "  " << array[i];
  }
  cout << "\n";
}
 int main()
 {
  int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "The array before it was sorted is: ";
   displayArray(arr, n);
   bubbleSort(arr, n);
   cout << "The array after it has been sorted is: ";
   displayArray(arr, n);
 }
