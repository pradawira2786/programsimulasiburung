#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int S;
    int V;
    double sinA;
    double waktu;

	cout << "Masukkan sudut peluncuran (0-90 derajat): ";
    cin >> s;
    cout << "Masukkan kecepatan awal: ";
    cin >> v;
    sinA = sin((double) (S * 22) / 7 / 180);
    waktu = 2 * (V * sinA) / 10;
    cout << "Waktu yang ditempuh Boro untuk mencapai jarak terjauh adalah" << waktu << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

