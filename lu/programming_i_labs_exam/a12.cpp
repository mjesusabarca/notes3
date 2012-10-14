#include <iostream>
#include <math.h>
using namespace std;
// Prasības:
// 01) Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs paziņojums.
// 02) Jābūt iespējai programmu izpildīt atkārtoti.
// Atrādot programmu, jāatrāda
// a) programmas teksts,
// b) testa piemēri,
// c) programma darbībā.
// Precīzākas prasības sk. Laboratorijas darbu noteikumos.
// A12. Dots naturāls skaitlis n.
// Izdrukāt skaitli, kurš iegūts no dotā skaitļa, izmetot ciparu k.
// (Piemēram, ja n=12025 un k=2, jāiegūst 105).
// Skaitļa dalīšana ciparos jāveic skaitliski.

int number_order(const int base, const int number)
{
    int order = 0;
    while (pow(base, order) <= number) order++;
    return --order;
}
int digit(const int number, int nth)
{
    const int base = 10;
    return number/ (int)pow(base, nth);
}

int main()
{
    int number;
    const int base = 10;
    cout << "Enter positive integer to process: ";
    // cin >> number;
    // number = 12025;
    number = 4321;
    int order = number_order(base, number);
    int *digits = new int[order+1]; // array to store number's digits; +1 cell for '\0'

    int current_order = order;
    cout << current_order;
    for(int i = 0; i <= order; i++)
    {
        digits[i] = digit(number, current_order);
        current_order--;
    }

    for (int i = 0; i <= order; i++) cout << endl << "digit " << i << " is " << digits[i];

    system("pause");
    return 0;
}
