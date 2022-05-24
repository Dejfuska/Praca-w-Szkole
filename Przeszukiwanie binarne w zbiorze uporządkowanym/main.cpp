#include <iostream>

using namespace std;
const int N=5;
int a[N];
int znajdz_dana(int wartosc)
{
    int poczatek, koniec, srodek;
    poczatek = 0;
    koniec = N-1;
    do
    {
        srodek = (poczatek + koniec) / 2;
        if(a[srodek]==wartosc)
            return srodek;
        else if(wartosc>a[srodek])
            poczatek = srodek+1;
        else
            koniec = srodek-1;
    }
    while(poczatek <=koniec);
    return -1;
}
int main()
{
    int wynik;
    int w;
    for(int i=0; i<N; i++)
    {
        cout<<"Podaj element nr "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<< "Podaj wartosc: ";
    cin>>w;
    wynik=znajdz_dana(w);
    if(wynik==-1)
        cout<<"Funkcja nie znalazla indeksu szukanej wartosci"<<endl;
    else
        cout<<"Indeks wartosci szukanej: "<<wynik+1;
    return 0;
}
