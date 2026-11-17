#include <iostream>
using namespace std;


int main(){
    int arr[4][5];
   
    int max;
    int min;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            cout << "masukkan barang yang terjual jenis ke-" << i + 1 << " hari ke-" << j + 1 << ":  "; cin >>arr[i][j];

        }
        
    }

    cout << "   ";
    for (int i = 0; i < 5; i++) {
        cout << i+1 << "  ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        cout << i+1 << "  ";
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    int temp = arr[0][0];
    int hari; int jenis;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
           
           if(temp < arr[i][j]){
            temp = arr[i][j];
            jenis = i;
            hari = j;
           }


           
        }
        
    }

    
    cout <<"paling banyak penjualan nya adalah: "<< temp << endl;
    cout << "jenis: " << jenis+1 << endl;
    cout<< "di hari: " << hari+1 << endl;
    

    // min
    int temp2 = arr[0][0];
    int hari2; int jenis2;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
           
           if(temp > arr[i][j]){
            temp = arr[i][j];
            jenis2 = i;
            hari2 = j;
           }


           
        }
        
    }

    // max
    cout <<"paling banyak penjualan nya adalah: "<< temp2 << endl;
    cout << "jenis: " << int(jenis2)+1 << endl;
    cout<< "di hari: " << int(hari2)+1 << endl;
    

}

    
