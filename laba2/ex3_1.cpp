#include <stdio.h>
#include <iostream>
using namespace std;

void v1(){
    cout<<"\nВариант 1: статический массив + индексная адресация\n";
    int arr[10];
    
    for (int i = 0; i < 10; ++i){
        arr[i] = i*i;
    }
    for (int i = 0; i  < 10; ++i){
        cout<<i<<" "<<arr[i]<<"\n";
    }
}

void v2(){
    cout<<"\nВариант 2: статический массив + адресация с помощью указателя\n";
    int arr[10];
    for (int *ptr = arr; ptr < arr +10; ++ptr){
        *ptr = (ptr - arr)*(ptr - arr);
    }
    for (int *ptr = arr; ptr < arr +10; ++ptr){
        cout<< (ptr-arr) << " " << *ptr <<"\n";
    }
}

void v3(){
    cout<<"\nВариант 3: динамический массив + индексная адресация\n";
    int *arr = new int[10];

    for (int i = 0; i < 10; ++i){
        arr[i] = i*i;
    }
    for (int i = 0; i  < 10; ++i){
        cout<<i<<" "<<arr[i]<<endl;
    } 
    delete[] arr;
}

void v4(){
    cout<<"\nВариант 4: динамический массив + адресация с помощью указателя\n";
    int *arr = new int [10];
    
    for (int *ptr = arr; ptr < arr +10; ++ptr){
        *ptr = (ptr - arr)*(ptr - arr);
    }
    for (int *ptr = arr; ptr < arr +10; ++ptr){
        cout<< (ptr-arr) << " " << *ptr <<"\n";
    }
    delete[] arr;
}


int main() {
    v1();
    v2();
    v3();
    v4();
    return 0;
}