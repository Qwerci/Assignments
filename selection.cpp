#include<iostream>
using namespace std;
void swapping(int &a, int &b) {         //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void show(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selec_Sort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
}
int main() {
   int a;
   cout << "Enter the number of elements: ";
   cin >> a;
   int arr[a];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<a; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   show(arr, a);
   selec_Sort(arr, a);
   cout << "Array after Sorting: ";
   show(arr, a);
}
