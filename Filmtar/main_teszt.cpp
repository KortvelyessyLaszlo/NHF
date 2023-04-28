#include "film.h"
#include "csaladi.h"
#include "dokumentum.h"
#include "tar.h"

using namespace std;

int main(){
    Tar tar;
    char valasztas;
    while(valasztas != 'e'){
        cout << "a: Hozzaadas" << endl << "b: Torles" << endl << "c: Listazas" << endl << "e: EXIT" << endl;
        cin >> valasztas;
        cin.ignore();
        switch(valasztas){
            case 'a':{
                char tipus;
                cout << "a: Film" << endl << "b: Csaladifilm" << endl << "c: Dokumentumfilm" << endl << "e: VISSZA" << endl;
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
                tar.lista();
                cout << "Hanyadik elemet szeretne torolni?" << endl;
                size_t del;
                cin >> del;
                cin.ignore();
                try{
                    tar.torol(del - 1);
                }catch(out_of_range){
                    cout << "Nincs ilyen index!";
                }
            }break;
            case 'c':{
                tar.lista();
            }break;
            case 'e':
                break;
            default:
                cout << "Az alabbi menupontok kozul valasszon!" << endl;
        }
    }
    return 0;
}
