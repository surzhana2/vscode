#include <iostream>
#include <stdio.h>

using namespace std;

void change(int &s, int *u){
    s += 1;
    *u += 2;
}

int main() {
    int a = 3, b = 5;
    change(a, &b);
    cout<< "a = " << a << ", b = " << b<< endl;
    return 0;

}


