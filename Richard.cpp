#include<iostream>
#include<math.h>
using namespace std;

// this code splits into 2 sections

// **    <--- square
// **

// ****  <--- rectangle
// ****

void LSqr(int sok){
    cout << endl << "hinh cu: " << endl;
    
    int z = pow(2,sok)/2; // length of the first sections/square
    int z1 = pow(2,sok);

    // last half of the square/rectangle
    for (int x=0; x<z; x++){
        for (int t=0; t<z;t++){
            cout << " ";
        }

        for (int y=0; y<z; y++){
            cout << "L";
        }
        cout << endl;
    }

    for (int x=0; x<z; x++){
        for (int t=0; t<z;t++){
            cout << " ";
        }

        for (int y=0; y<z; y++){
            cout << "L";
        }
        cout << endl;
    }

    for (int x=0; x<z; x++){
        for (int t=0; t<z;t++){
            cout << " ";
        }

        for (int y=0; y<z; y++){
            cout << "L";
        }
        cout << endl;
    }

    // one quater of the big square/small square
    for (int x=0; x<z; x++){

        // uncomment the code below to make the square go to the right.
        
        for (int y=0; y<z; y++){
            cout << "L";
        }

        for (int t=0; t<z;t++){
            cout << " ";
        }

        for (int y=0; y<z; y++){
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
