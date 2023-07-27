#include <bits/stdc++.h>
using namespace std;

int main()
{
    string set1 = "\t1 3 5 7\n\t9 11 13 15\n\t17 19 21 23\n\t25 27 29 31\n";

    string set2 = "\t2 3 6 7\n\t10 11 14 15\n\t18 19 22 23\n\t26 27 30 31\n"; 

    string set3 = "\t4 5 6 7\n\t12 13 14 15\n\t20 21 22 23\n\t28 29 30 31\n"; 

    string set4 = "\t8 9 10 11\n\t12 13 14 15\n\t24 25 26 27\n\t28 29 30 31\n"; 

    string set5 = "\t16 17 18 19\n\t20 21 22 23\n\t24 25 26 27\n\t28 29 30 31\n"; 

    int day = 0;
    int ans = 0;

    cout << "\nIs your birthday in set1?\n"
         << endl;
    cout << set1 << endl;
    cout << "Enter 0 for No and 1 for Yes : ";
    cin >> ans;

    if (ans == 1)
    {
        day += 1;
    }

    cout << "\nIs your birthday in set2?\n"
         << endl;
    cout << set2 << endl;
    cout << "Enter 0 for No and 1 for Yes : ";
    cin >> ans;

    if (ans == 1)
    {
        day += 2;
    }

    cout << "\nIs your birthday in set3?\n"
         << endl;
    cout << set3 << endl;
    cout << "Enter 0 for No and 1 for Yes : ";
    cin >> ans;

    if (ans == 1)
    {
        day += 4;
    }

    cout << "\nIs your birthday in set4?\n"
         << endl;
    cout << set4 << endl;
    cout << "Enter 0 for No and 1 for Yes : ";
    cin >> ans;

    if (ans == 1)
    {
        day += 8;
    }

    cout << "\nIs your birthday in set5?\n"
         << endl;
    cout << set5 << endl;
    cout << "Enter 0 for No and 1 for Yes : ";
    cin >> ans;

    if (ans == 1)
    {
        day += 16;
    }

    cout << "\nYour birthday is " << day << "!\n"
         << endl;

    return 0;
}

// Vedanshu Garg.