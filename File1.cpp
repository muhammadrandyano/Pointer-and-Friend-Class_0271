#include <iostream>
using namespace std;

class PersegiPanjang
{
    public:
    int panjang, lebar;

    public:

    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran O1;

};

class Lingkaran
{
    public:
    int jarijari;

    void input()
    {
        cout << "Masukkan jari-jari : ";
        cin  >> jarijari;
    }
    int luaslingkaran(int r)
    {
        return 3.14 * r * r;
    }
};