#include <bits/stdc++.h>

using namespace std;

struct difficolta_t {
    string nome;
    size_t limite;
    size_t tentativi;
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

    cout << "Benvenuto!\nPer iniziare seleziona la difficolta':" << endl;
    for (auto &el : difficolta_disponibili) cout << "- " << el.nome << endl;
    cout << endl << "La tua scelta: ";
    string difficolta_scelta;
    cin >> difficolta_scelta;
    bool trovato = false;
    for (auto &el : difficolta_disponibili)
        if (el.nome == difficolta_scelta) {
            trovato         = true;
            size_t numero   = random_device()() % el.limite + 1, scelto, tentativi;
            bool indovinato = false;
            cout << "Indovina il numero compreso tra 1 e " << el.limite << endl;
            for (tentativi = 0; tentativi < el.tentativi && !indovinato; tentativi++) {
                cout << "Inserisci il numero: ";
                cin >> scelto;
                if (scelto == numero) indovinato = true;
                else if (scelto < numero)
                    cout << "Il numero e' piu' alto di quello inserito" << endl;
                else
                    cout << "Il numero e' piu' basso di quello inserito" << endl;
            }
            if (indovinato) cout << "Complimenti! Hai indovinato il numero" << endl;
            else
                cout << "Non sei riuscito ad indovinare il numero! Era: " << numero << endl;
        }
    if (!trovato) cout << "Difficolta' scelta non disponibile" << endl;
    return 0;
}