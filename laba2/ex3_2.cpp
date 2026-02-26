#include <iostream>

using namespace std;

int main(){
    int size1 = 5;
    int size2 = 4;

    int* arr1 = new int[size1]{1, 3, 4, 6, 9};
    int* arr2 = new int[size2]{2, 5, 7,8};
    int* res = new int[size1 + size2];

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2){
        if (arr1[i] < arr2[j]){
            res[k] = arr1[i];
            i++;
        } else {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    while ( i < size1){
        *(res + k) = *(arr1 + i);
        i++;
        k++;
    }

    while (j < size2){
        res[k] = arr2[j];
        j++;
        k++;
    }

    cout<<"Результат слияния: ";
    for ( int m = 0; m < size1 + size2; m++){
        cout<<res[m]<<" ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] res;
    
    return 0;

}