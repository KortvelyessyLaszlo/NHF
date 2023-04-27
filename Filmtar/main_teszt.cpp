#include "film.h"
#include "csaladi.h"
#include "dokumentum.h"
#include "tar.h"

using namespace std;

int main(){
    Tar tar;
    char valasztas;
    while(valasztas != 'e'){
        cout << endl << "a: Hozzaadas" << endl << "b: Torles" << endl << "c: Listazas" << endl << "e: EXIT" << endl;
        cin >> valasztas;
        cin.ignore();
        switch(valasztas){
            case 'a':{
                char tipus;
                cout << endl << "a: Film" << endl << "b: Csaladifilm" << endl << "c: Dokumentumfilm" << endl << "e: VISSZA" << endl;
                cin >> tipus;
                cin.ignore();
                switch(tipus){
                    case 'a':{
                        Film film;
                        film.beolvas();
                        tar.add(new Film(film));
                    }
                    break;
                    case 'b':{
                        Csaladi csaladi;
                        csaladi.beolvas();
                        tar.add(new Csaladi(csaladi));
                    }
                    break;
                    case 'c':{
                        Dokumentum dokumentum;
                        dokumentum.beolvas();
                        tar.add(new Dokumentum(dokumentum));
                    }
                    break;
                    case 'e':
                        break;
                    default:
                        cout << "Ilyen film tipus nincsen!" << endl;
                }
            }break;
            case 'b':{

            }break;
            case 'c':{

            }break;
            case 'e':
                break;
            default:
                cout << "Az alabbi menupontok kozul valasszon!" << endl;
        }
    }
    return 0;
}
