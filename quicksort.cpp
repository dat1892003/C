#include<stdio.h>
#include<iostream>
using namespace std;
 
//t?o hàm swap d? tráo d?i các v? trí
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
  
//  phân do?n trong m?ng
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // khai báo ph?n t? dánh dâu pivot
    int left = low;   //khai báo bi?n bên trái
    int right = high - 1; //khai báo bi?n bên ph?i
    while(true){
        while(left <= right && arr[left] < pivot) left++; // tìm ph?n t? >= ph?n t? pivot trong m?ng
        while(right >= left && arr[right] > pivot) right--; // tìm ph?n t? <= ph?n t? pivot trong m?ng
        if (left >= right) break; // sau khi duy?t xong thì thoát kh?i vòng l?p
        swap(arr[left], arr[right]); // n?u chua xong thì s? d?ng hàm swap() d? tráo d?i.
        left++; // Vì left hi?n t?i dã xét, nên c?n tang
        right--; // Vì right hi?n t?i dã xét, nên c?n gi?m
    }
    swap(arr[left], arr[high]);
    return left; // Tr? v? ch? s? s? dùng d? chia dôi m?ng
}
  
/* Hàm th?c hi?n gi?i thu?t quick sort */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // index là ch? s? noi ph?n t? này dã d?ng dúng v? trí và dây là ph?n t? chia m?ng làm 2 m?ng con trái & ph?i 
        int index = partition(arr, low, high);
  
        // G?i d? quy s?p x?p 2 m?ng con trái và ph?i
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}
  
/* Hàm xu?t m?ng */
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
    cout<<"Chuong trình này du?c dang t?i Freetuts.net";
}
