#include<iostream>
#include<math.h>
using namespace std;

// this code splits into 2 sections

// **    <--- square
// **

// ****  <--- rectangle
// ****

void LSqr(int sok){
    cout << endl << "hinh vuong khuyet: " << endl;
    
    int z = pow(2,sok)/2; // length of the first sections/square
    int z1 = z*2; // length of the second section/rectangle


    // one quater of the big square/small square
    for (int x=0; x<z;x++){
        for (int y=0; y<z;y++){
            cout << "L";
        }
        cout << endl;
    }

    // last half of the square/rectangle
    for (int x=0; x<z;x++){
        for (int y=0; y<z1;y++){
            cout << "L";
        }
        cout << endl;
    }
}


int main(){
    int daitao;
    cout << "nhap so k: "; cin >> daitao;
    if (daitao<2){
        cout << endl << "so qua be.";
    } else if (daitao>10){
        cout << endl << "so qua lon.";
    } else {
        LSqr(daitao);
    }
}
