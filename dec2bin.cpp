#include<iostream>

using namespace std;

// cach 1
void d2b(int n) {
		 //			      v
	int i=0; // vi tri ban dau, vd: 1231345
		 //		              ^
	int binum[64]; // luu tru bit
	
	
	// looping part
	while (n>0) {
	
		binum[i] = n%2; // lay phan du truoc khi loop
		n = n/2; // chia xuong
		i++; // tang vi tri len 1
	}
	
	// in so
	cout << "so bit la: ";
	
	// in sap xep dung thu tu
	for (int j=i-1; j>0; j--) {
	cout << binum[j];
	}
}

// cach 2
//void d2bi(int n) {
	
//	for(int i = n.length(), i>0, i--) {
//		int binu2[i] = n%2;



// driver
int main() {
	int sel; // lmao incel, pun intended
	
	cout << "nhap so thap phan: "; cin >> sel;
	
	d2b(sel);
//	d2bi(sel);
	
	return 0;
}
