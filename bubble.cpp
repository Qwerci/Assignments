#include<iostream>
using namespace std;
void swapping(int &a, int &b) {      //swap the content of a and b
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
void bubbleSort(int *array, int size) {
   for(int i = 0; i<size; i++) {
      int swaps = 0;         //flag to detect any swap is there or not
      for(int j = 0; j<size-i-1; j++) {
         if(array[j] > array[j+1]) {       //when the current item is bigger than next
            swapping(array[j], array[j+1]);
            swaps = 1;    //set swap flag
         }
      }
      if(!swaps)
         break;       // No swap in this pass, so array is sorted
   }
}
int main() {
   int a;
   cout << "Enter the number of elements: ";
   cin >> a;
   int arr[a];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<a; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   show(arr, a);
   bubbleSort(arr, a);
   cout << "Array after Sorting: ";
   show(arr, a);
}
