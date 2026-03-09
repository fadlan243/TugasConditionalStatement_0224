#include <iostream>
using namespace std;

// Prosedur untuk memasukkan data
void inputData(float &berat, float &tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
float hitungBMI(float berat, float tinggi){
    float bmi;
    bmi = berat / (tinggi * tinggi);
    return bmi;
}

// Fungsi untuk menentukan status berat badan
string statusBMI(float bmi){
    if(bmi < 18.5){
        return "Berat Badan Kurang";
    }
    else if(bmi < 25){
        return "Berat Badan Normal";
    }
    else if(bmi < 30){
        return "Berat Badan Kelebihan";
    }
    else{
        return "Obesitas";
    }
}

int main(){
    float berat, tinggi, bmi;
    string status;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    // Memanggil prosedur input
    inputData(berat, tinggi);

    // Menghitung BMI
    bmi = hitungBMI(berat, tinggi);

    // Menentukan status
    status = statusBMI(bmi);

    return 0;
}