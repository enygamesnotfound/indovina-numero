/**
 * @file indovina_numero.cpp
 * @author eny (enea.romanno@gmail.com)
 * @brief indovina il numero, ma con i power up!!!
 * @version 2.0
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <iostream>
#include <conio.h>

using namespace std;

/*ci sono i power up!!!!
t++ = ti da 5 tentativi in più
n++ = ti da il numero giusto(attenzione! usarlo solo in caso di emergenza, non barare!!!!)
*/

/*i power up negativi!!!(per i più bravi)
t-- = ti toglie 5 tentativi
n-- = cambia il numero che devi indovinare
*/

/*i power up casuali che aumentano!!!(per chi è bravo o non)
t+? = ti da un numero casuale di tentativi
n+? = cambia il numero e lo rende casualissimo
*/

/*e i power up casuali che diminuiscono!!!(per chi è bravo e non)
t-? = ti toglie un numero casuale di tentativi
*/

int main()
{

    string difficoltà;
    string powerup;
    long int n;
    int ngiusto;
    long int tentativi;

    cout << "benvenuto!\n";
    cout << "per iniziare seleziona la difficoltà:\n";
    cout << "easy\nmedium\nhard\nextreme\nimpossible\n?\n";
    cout << "attento a non scrivere male nei power up\n";
    cout << "intendo che se vuoi usare un powerup\n\n";
    cout << "1 devi stare attento alla scritta\n\n";
    cout << "2 ci sono 6 power up e puoi scrivere:\n";
    cout << "t++ = da 5 tentativi in più\n";
    cout << "n++ = ti da un numero giusto\n";
    cout << "t-- = ti toglie 5 tentativi\n";
    cout << "n-- = cambia il numero che devi scoprire\n";
    cout << "t+? = ti da un numero casuale di tentativi\n";
    cout << "n+? = ti cambia il numero e lo rende casualissimo\n";
    cout << "t-? = ti toglie un numero casuale di tentativi\n";

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
            cout << "\n";
            cout << "scrivi una qialsiasi lettera per non avere powerup\n";
            cin >> powerup;
            if (powerup == "t++")
            {
                tentativi -= 5;
                cout << "ti ho dato 5 tentativi";
            }
            else if (powerup == "n++")
            {
                cout << "il numero era: " << n << "\n";
            }
            else if (powerup == "t--")
            {
                tentativi += 5;
            }
            else if (powerup == "n--")
            {
                n = rand() % 10;
            }
            else if (powerup == "t+?")
            {
                tentativi = rand() % 10;
            }
            else if (powerup == "n+?")
            {
                n = rand();
            }
            else if (powerup == "t-?")
            {
                tentativi += rand();
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
            cout << "\n";
            cout << "scrivi una qialsiasi lettera per non avere powerup\n";
            cin >> powerup;
            if (powerup == "t++")
            {
                tentativi -= 5;
                cout << "ti ho dato 5 tentativi";
            }
            else if (powerup == "n++")
            {
                cout << "il numero era: " << n << "\n";
            }
            else if (powerup == "t--")
            {
                tentativi += 5;
            }
            else if (powerup == "n--")
            {
                n = rand() % 100;
            }
            else if (powerup == "t+?")
            {
                tentativi = rand() % 10;
            }
            else if (powerup == "n+?")
            {
                n = rand();
            }
            else if (powerup == "t-?")
            {
                tentativi += rand();
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
            cout << "\n";
            cout << "scrivi una qialsiasi lettera per non avere powerup\n";
            cin >> powerup;
            if (powerup == "t++")
            {
                tentativi -= 5;
                cout << "ti ho dato 5 tentativi";
            }
            else if (powerup == "n++")
            {
                cout << "il numero era: " << n << "\n";
            }
            else if (powerup == "t--")
            {
                tentativi += 5;
            }
            else if (powerup == "n--")
            {
                n = rand() % 1000;
            }
            else if (powerup == "t+?")
            {
                tentativi = rand() % 10;
            }
            else if (powerup == "n+?")
            {
                n = rand();
            }
            else if (powerup == "t-?")
            {
                tentativi += rand();
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
            cout << "\n";
            cout << "scrivi una qialsiasi lettera per non avere powerup\n";
            cin >> powerup;
            if (powerup == "t++")
            {
                tentativi -= 5;
                cout << "ti ho dato 5 tentativi";
            }
            else if (powerup == "n++")
            {
                cout << "il numero era: " << n << "\n";
            }
            else if (powerup == "t--")
            {
                tentativi += 5;
            }
            else if (powerup == "n--")
            {
                n = rand() % 10000;
            }
            else if (powerup == "t+?")
            {
                tentativi = rand() % 10;
            }
            else if (powerup == "n+?")
            {
                n = rand();
            }
            else if (powerup == "t-?")
            {
                tentativi += rand();
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
            cout << "\n";
            cout << "scrivi una qialsiasi lettera per non avere powerup\n";
            cin >> powerup;
            if (powerup == "t++")
            {
                tentativi -= 5;
                cout << "ti ho dato 5 tentativi";
            }
            else if (powerup == "n++")
            {
                cout << "il numero era: " << n << "\n";
            }
            else if (powerup == "t--")
            {
                tentativi += 5;
            }
            else if (powerup == "n--")
            {
                n = rand() % 438156;
            }
            else if (powerup == "t+?")
            {
                tentativi = rand() % 10;
            }
            else if (powerup == "n+?")
            {
                n = rand();
            }
            else if (powerup == "t-?")
            {
                tentativi += rand();
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
            cout << "\n";
            cout << "scrivi una qialsiasi lettera per non avere powerup\n";
            cin >> powerup;
            if (powerup == "t++")
            {
                tentativi -= 5;
                cout << "ti ho dato 5 tentativi";
            }
            else if (powerup == "n++")
            {
                cout << "il numero era: " << n << "\n";
            }
            else if (powerup == "t--")
            {
                tentativi += 5;
            }
            else if (powerup == "n--")
            {
                n = rand() % 2;
            }
            else if (powerup == "t+?")
            {
                tentativi = rand() % 10;
            }
            else if (powerup == "n+?")
            {
                n = rand();
            }
            else if (powerup == "t-?")
            {
                tentativi += rand();
            }
        }
    }
}