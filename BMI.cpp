#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a + b) / 2;
}

string Status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main(){
    float nilBI, nilMT, rerata;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;

    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    rerata = Rata_rata(nilBI, nilMT);

    cout << "Status kelulusan = ";
    cout << Status_lulus(rerata);
    cout << ", dengan nilai rerata = ";
    cout << rerata << endl;

    return 0;
}