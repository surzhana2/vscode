#include <iostream>
#include <cmath>
#include <stdio.h>


using namespace std;

int main()
{
   

    //Вычисление значения функции
    double x0;

    cout <<"Введите начальную точку: "<< endl;
    cin >> x0;

    double step = (4.0 - x0)/9.0;
    
    for (int i=0; i<10; i++) { 
        double x = x0 + step*i;
        double f = sin(x)/x ;
        cout << x << "\t " << f << endl;
    }


    //Числа Фибоначчи
    int f_m;
    cout << "Введите значение максимального: " << endl;
    cin >> f_m;

    int n = 0;
    int s = 0;
    int f1 = 0, f2 = 1;

    while (s <= f_m) {
        s += f2;
        ++n;
        int f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    cout <<"Количество чисел: "<<n<<endl;
    cout <<"Сумма: "<<s;
    return 0;
    

    //Кредит
    double sum, p; 
    int m;

    printf("Сумма (руб.) -> ");
    scanf("%lf", &sum);

    printf("Срок (мес.) -> ");
    scanf("%d", &m);

    printf("Процентная ставка (годовых) -> ");
    scanf("%lf", &p);

    double pay = sum/m;
    double k = 0.0;

    printf("\n%-4s %10s %10s %10s\n", "№", "Долг", "Процент", "Платеж");
    printf("----------------------------------------\n");

    for (int i=1; i <= m; i++) {
        double d = sum - (i-1)*pay;
        double k1 = d*p/12/100;
        double pay1 = p + k1;

        k+=k1;
        printf("%-4d %10.2f %10.2f %10.2f\n", i, d, k1, pay1);
    }

    // Итоговая сумма процентов
    printf("\nВсего процентов: %.2f\n", k);

    return 0;

    }
