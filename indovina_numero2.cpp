#include <bits/stdc++.h>

using namespace std;

struct difficolta_t {
    string nome;
    size_t limite;
    int64_t tentativi;
};

int main() {
    vector<difficolta_t> difficolta_disponibili = {
        difficolta_t{ .nome = "easy", .limite = 10, .tentativi = 4 },
        difficolta_t{ .nome = "medium", .limite = 100, .tentativi = 7 },
        difficolta_t{ .nome = "hard", .limite = 1000, .tentativi = 10 },
        difficolta_t{ .nome = "extreme", .limite = 10000, .tentativi = 14 },
        difficolta_t{ .nome = "impossible", .limite = 3815637465874653846, .tentativi = 62 },
        difficolta_t{ .nome = "?", .limite = 2, .tentativi = 289015 },
    };

    auto gestisciPowerup = [](string powerup, size_t &numero, int64_t &tentativi, size_t limite) {
        if (powerup == "t+") {
            tentativi -= 5;
            cout << "Sono stati aggiunti 5 tentativi" << endl;
        } else if (powerup == "t-") {
            tentativi += 5;
            cout << "Sono stati tolti 5 tentativi" << endl;
        } else if (powerup == "t+?") {
            tentativi -= random_device()() % 100;
            cout << "Sono stati aggiunti ? tentativi" << endl;
        } else if (powerup == "t-?") {
            tentativi += random_device()() % 100;
            cout << "Sono stati tolti ? tentativi" << endl;
        } else if (powerup == "n+") {
            cout << "Il numero e': " << numero << endl;
        } else if (powerup == "n-") {
            numero = random_device()() % limite + 1;
            cout << "Il numero e' stato cambiato" << endl;
        }
    };

    cout << "Benvenuto!\nI powerup disponibili sono:\n - t+\tAggiunge 5 tentativi\n - t-\tToglie 5 "
            "tentativi\n - t+?\tAggiunge un numero casuale di tentativi\n - t-?\tToglie un numero "
            "casuale di tentativi\n - n+\tRivela il numero da indovinare\n - n-\tAggiorna il "
            "numero da indovinare\nI powerup si possono usare durante la digitazione del "
            "numero\n\nPer iniziare seleziona la difficolta':"
         << endl;
    for (auto &el : difficolta_disponibili) cout << "- " << el.nome << endl;
    cout << endl << "La tua scelta: ";
    string difficolta_scelta;
    cin >> difficolta_scelta;
    bool trovato = false;
    for (auto &el : difficolta_disponibili)
        if (el.nome == difficolta_scelta) {
            trovato       = true;
            size_t numero = random_device()() % el.limite + 1;
            int64_t tentativi;
            bool indovinato = false;
            cout << "Indovina il numero compreso tra 1 e " << el.limite << endl;
            for (tentativi = 0; tentativi < el.tentativi && !indovinato; tentativi++) {
                cout << "Inserisci il numero: ";
                string scelto;
                cin >> scelto;
                if ('0' <= scelto[0] && scelto[0] <= '9') {
                    if (stoull(scelto) == numero) indovinato = true;
                    else if (stoull(scelto) < numero)
                        cout << "Il numero e' piu' alto di quello inserito" << endl;
                    else
                        cout << "Il numero e' piu' basso di quello inserito" << endl;
                } else {
                    gestisciPowerup(scelto, numero, tentativi, el.limite);
                    tentativi--;
                }
            }
            if (indovinato) cout << "Complimenti! Hai indovinato il numero" << endl;
            else
                cout << "Non sei riuscito ad indovinare il numero! Era: " << numero << endl;
        }
    if (!trovato) cout << "Difficolta' scelta non disponibile" << endl;
    return 0;
}