#include<ios>
#include<limits>

#include "memtrace.h"
#include "gtest_lite.h"
#include "film.h"
#include "csaladi.h"
#include "dokumentum.h"
#include "tar.h"
#include "menu.h"

using namespace std;

void Test1(){// A beolvaso es kiiro fuggvenyek tesztelese
    cout << "--->Test1: A filmek beolvasasanak es kiirasanak a tesztelese<---" << endl << endl;

    cout << "---Film tipusu film beolvasasa---" << endl;
    Film film;
    film.beolvas();
    film.kiir();

    cout << "---Dokumentum tipusu film beolvasasa---" << endl;
    Dokumentum dok;
    dok.beolvas();      
    dok.kiir();

    cout << "---Csaladi tipusu film beolvasasa---" << endl;
    Csaladi csal;
    csal.beolvas();
    csal.kiir();
}

int main(){

    Test1(); //Film osztaly es leszarmazottak tesztelese

    TEST(Test2,Tarolo){
        Tar tarolo;

        cout << endl << "--- Tar::hozzaad()---" << endl;
        tarolo.hozzaad(new Film("Bosszuallok",124,2010));
        tarolo.hozzaad(new Dokumentum("A Fold", 83, 2002,"reszletes leiras..."));
        tarolo.hozzaad(new Csaladi("Mickey eger", 23, 1950, 6));
        cout << "A hozzaadott filmek listaja:" << endl;
        tarolo.lista();

        cout << endl << "--- Tar::torol()---" << endl;
        cout << "A torlendo elem indexe:" << endl;
        size_t index;
        cin >> index;
        try{tarolo.torol(index - 1);}catch(out_of_range& e){cout << "Helytelen index!" << endl;}
        cout << endl << "A lista ujra:" << endl;
        tarolo.lista();
        EXPECT_THROW(tarolo.torol(3),out_of_range&);     // Hibas indexeleskor std::out_of_range
    }ENDM

    TEST(Test3,Menu_es_Fajlkezeles){
        Menu menu;
        Tar tar;

        EXPECT_THROW(tar.betolt("hibasfajlnev.txt"),const char*); //Ha nem letezik a fajl akkor a program beolvasaskor hibat dob
        EXPECT_NO_THROW(tar.betolt("adat.txt"));
        try{
            cout <<endl << "A fajlbol beolvasott lista:" << endl;
            tar.lista();

            cout << endl << "---'A' menupont(Film Hozzadasa) tesztje---" << endl;
            menu.A(tar);

            cout << endl << "---'B' menupont(Film Torlese) tesztje---" << endl;
            menu.B(tar);

            cout << endl << "---'C' menupont(Listazas)---" << endl;
            menu.C(tar);

        }catch(out_of_range& e){cout << "Helytelen index!" << endl;}

        tar.mentes("adat.txt"); //Nem szukseges kivetelt dobnia, mert letrehozza a parameterben levo fajlt, ha az meg nem letezik
    }ENDM

    return 0;
}
