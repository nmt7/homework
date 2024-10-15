#include<iostream>
#include<math.h>
using namespace std;

void LSqr(int sok){
    cout << endl << "hinh vuong khuyet: " << endl;
    int z = pow(2,sok)/2;
    int z1 = z*2;
    // while (chieudaix>0){
    //     cout << "L";
    //     chieudaix--;
    // }
    for (int x=0; x<z;x++){
        for (int y=0; y<z;y++){
            cout << "L";
        }
        cout << endl;
    }
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