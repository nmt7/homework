#include<iostream>
#include<vector>

using namespace std;

// hex to dec
void h2d(n) {
	
}


// dec to hexdec
void d2h(int n) {

	int i=1;
	int henum[128];
	
	while(n>0){
		
		henum[i]=n%16;
		n=n/16;
		++i;
	}
	
	cout << "so hexdec la: ";
	
	for(int j=i-1;j>0;j--){
		
		switch (henum[j]) {
			case 11:
				cout << "A";
				break;
			case 12:
				cout << "B";
				break;
			case 13:
				cout << "C";
				break;
			case 14:
				cout << "E";
				break;
			case 15:
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


// driver
int main(){
	int sel; // lmao incel, pun intended
	
	cout << "nhap so thap phan: "; cin >> sel;
	
	d2b(sel); cout << endl;
	d2h(sel); cout << endl;
}
