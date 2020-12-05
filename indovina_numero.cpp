#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    string difficoltà;
    long int n;
    int ngiusto;
    long int tentativi;

    cout << "benvenuto!\n";
    cout << "per iniziare seleziona la difficoltà:\n";
    cout << "easy\nmedium\nhard\nextreme\nimpossible\n?\n\n";

    cin >> difficoltà;

    if (difficoltà == "easy")
    {
        n = rand() % 10;
        while (true)
        {
            tentativi++;
            cout << "indovina il numero da 1 a 10:\n";
            cin >> ngiusto;
            if (ngiusto == n)
            {
                cout << "hai indovinato\n";
                cout << "il numero era: " << n << "\n";
                return 0;
            }
            else if (ngiusto < n)
            {
                cout << "di più\n";
            }
            else if (ngiusto > n)
            {
                cout << "di meno\n";
            }
            if (tentativi == 10)
            {
                cout << "hai finito i tentativi\n";
                return 0;
            }
        }
    }

    if (difficoltà == "medium")
    {
        n = rand() % 100;
        while (true)
        {
            tentativi++;
            cout << "indovina il numero da 1 a 100:\n";
            cin >> ngiusto;
            if (ngiusto == n)
            {
                cout << "hai indovinato\n";
                cout << "il numero era: " << n << "\n";
                return 0;
            }
            else if (ngiusto < n)
            {
                cout << "di più\n";
            }
            else if (ngiusto > n)
            {
                cout << "di meno\n";
            }
            if (tentativi == 10)
            {
                cout << "hai finito i tentativi\n";
                return 0;
            }
        }
    }

    if (difficoltà == "hard")
    {
        n = rand() % 1000;
        while (true)
        {
            tentativi++;
            cout << "indovina il numero da 1 a 1000\n";
            cin >> ngiusto;
            if (ngiusto == n)
            {
                cout << "hai indovinato\n";
                cout << "il numero era: " << n << "\n";
                return 0;
            }
            else if (ngiusto < n)
            {
                cout << "di più\n";
            }
            else if (ngiusto > n)
            {
                cout << "di meno\n";
            }
            if (tentativi == 10)
            {
                cout << "hai finito i tentativi\n";
                return 0;
            }
        }
    }

    if (difficoltà == "extreme")
    {
        n = rand() % 10000;
        while (true)
        {
            tentativi++;
            cout << "indovina il numero da 1 a 10000\n";
            cin >> ngiusto;
            if (ngiusto == n)
            {
                cout << "hai indovinato\n";
                cout << "il numero era: " << n << "\n";
                return 0;
            }
            else if (ngiusto < n)
            {
                cout << "di più\n";
            }
            else if (ngiusto > n)
            {
                cout << "di meno\n";
            }
            if (tentativi == 5)
            {
                cout << "hai finito i tentativi\n";
                return 0;
            }
        }
    }

    if (difficoltà == "impossible")
    {
        n = rand() % 438156;
        while (true)
        {
            tentativi++;
            cout << "indovina il numero da 1 a 43815637465874653846\n";
            cin >> ngiusto;
            if (ngiusto == n)
            {
                cout << "?????come hai fatto?????\n";
                cout << "il numero era " << n << "\n";
                return 0;
            }
            else if (ngiusto < n)
            {
                cout << "di più\n";
            }
            else if (ngiusto > n)
            {
                cout << "di meno\n";
            }
            if (tentativi == 2)
            {
                cout << "hai finito i tentativi\n";
                return 0;
            }
        }
    }

    if (difficoltà == "?")
    {
        n = rand() % 2;
        while (true)
        {
            tentativi++;
            cout << "indovina il numero misterioso\n";
            cin >> ngiusto;
            if (ngiusto == n)
            {
                cout << "uau\n";
                cout << "il numero era: " << n;
                return 0;
            }
            if (tentativi == 289015)
            {
                cout << "mamma mia!\n";
            }
        }
    }
}