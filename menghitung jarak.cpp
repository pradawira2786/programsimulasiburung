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
	//Mendeklarasikan variabel
    int s;
    int v;
    double srad;
    double jarak;

	cout << "Masukkan sudut peluncuran (0-90 derajat): ";
    cin >> s;
    cout << "Masukkan kecepatan awal: ";
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad) / 10;
    cout << "Jarak terjauh yang dapat ditempuh oleh Boro adalah: " << jarak << endl;
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

