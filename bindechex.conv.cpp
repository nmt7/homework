#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// int i=1 quet so dau tien

// void func(string NumOrHex) { cout << stoi(ens, 0, numnum); }
// This function can be used to change from hex, oct, bin to decimal
// by replacing "numnum" with 16, 8 or 2
// ~tsun


// hex to oct
void h2o(string n) {

}

// hex to dec
void h2d(string ens) { cout << stoi(ens, 0, 16); }
// stoi: string to num
// 0: null pointer
// 16: base num

// dec to oct
void d2o(int n){
	int i=1;
	int ocnum[64];

	while (n>0){
		ocnum[i]=n%8;
		n=n/8;
		i++;
	}

	cout << "so dec sang oct: ";

	for (int j=i-1; j>0; j--){
		cout << ocnum[j];
	}
}

// dec to hex ( almost the same algorithm as dec to bin )
void d2h(int n) {

	int i=1;
	int henum[128];
	
	while(n>0){
		
		henum[i]=n%16;
		n=n/16;
		i++;
	}
	
	cout << "so dec sang hex la: ";
	
	for(int j=i-1;j>0;j--){
		
		switch (henum[j]) {
			case 10:
				cout << "A";
				break;
			case 11:
				cout << "B";
				break;
			case 12:
				cout << "C";
				break;
			case 13:
				cout << "E";
				break;
			case 14:
				cout << "F";
				break;
			default:
				cout << henum[j];
		}
	}
}


// dec to binary
void d2b(int n) {
		 //			      v
	int i=1; // vi tri ban dau, vd: 01231345
		 //		                    ^
	int binum[64];
	
	
	// looping part
	while (n>0) {
	
		binum[i] = n%2; // lay phan du truoc khi loop
		n = n/2; // chia xuong
		i++; // tang vi tri len 1
	}
	
	// in so
	cout << "so dec sang bin la: ";
	
	// in sap xep dung thu tu
	for (int j=i-1; j>0; j--) {
		cout << binum[j];
	}
}


// driver
int main(){
	int sel; // lmao incel, pun intended
	string sel2; 

	cout << "nhap so thap phan: "; cin >> sel;
	cout << "nhap chuoi thap luc phan: "; cin >> sel2;
	
	cout << endl;

	d2b(sel); cout << endl;
	d2h(sel); cout << endl;
	d2o(sel); cout << endl;
	cout << "chuoi hex sang dec la: "; h2d(sel2);
}
