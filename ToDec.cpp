#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void testfunc(string ens) { cout << stoi(ens, 0, 2); }
// Thay bien thu 3 trong stoi:
// 2 la binary
// 16 la hex
// 8 la oct

int main(){
    string sel; cout << "chuyen chuoi tu [...] sang dec la: ";
    cin >> sel;
    cout << "chuoi la: "; testfunc(sel);
}
