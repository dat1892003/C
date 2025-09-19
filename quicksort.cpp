#include<stdio.h>
#include<iostream>
using namespace std;
 
//t?o h�m swap d? tr�o d?i c�c v? tr�
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
  
//  ph�n do?n trong m?ng
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // khai b�o ph?n t? d�nh d�u pivot
    int left = low;   //khai b�o bi?n b�n tr�i
    int right = high - 1; //khai b�o bi?n b�n ph?i
    while(true){
        while(left <= right && arr[left] < pivot) left++; // t�m ph?n t? >= ph?n t? pivot trong m?ng
        while(right >= left && arr[right] > pivot) right--; // t�m ph?n t? <= ph?n t? pivot trong m?ng
        if (left >= right) break; // sau khi duy?t xong th� tho�t kh?i v�ng l?p
        swap(arr[left], arr[right]); // n?u chua xong th� s? d?ng h�m swap() d? tr�o d?i.
        left++; // V� left hi?n t?i d� x�t, n�n c?n tang
        right--; // V� right hi?n t?i d� x�t, n�n c?n gi?m
    }
    swap(arr[left], arr[high]);
    return left; // Tr? v? ch? s? s? d�ng d? chia d�i m?ng
}
  
/* H�m th?c hi?n gi?i thu?t quick sort */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // index l� ch? s? noi ph?n t? n�y d� d?ng d�ng v? tr� v� d�y l� ph?n t? chia m?ng l�m 2 m?ng con tr�i & ph?i 
        int index = partition(arr, low, high);
  
        // G?i d? quy s?p x?p 2 m?ng con tr�i v� ph?i
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}
  
/* H�m xu?t m?ng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i];
        cout<<"\t";
      }
}
   
int main()
{
    int arr[] = {7,2,1,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
   
    cout<<"M?ng sau khi du?c s?p x?p: \n";
    printArray(arr, n);
   
    cout<<"\n---------------------------------------\n";
    cout<<"Chuong tr�nh n�y du?c dang t?i Freetuts.net";
}
