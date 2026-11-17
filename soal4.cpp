#include <iostream>
using namespace std;
struct node{
    int angka;
    node* kiri;
    node* kanan;
};

void tambah(node *&root, int value){
    if(root == NULL){
        root = new node();
        root-> angka = value;
        root->kanan = NULL;
        root->kiri = NULL;
        return;
    }

    if(root->angka > value){
        tambah(root->kiri, value);
    }

    if(root->angka < value){
        tambah(root->kanan, value);
    }

    return;
}


void inOrder(node* root){
    if(root != NULL){
        inOrder(root->kiri);
        cout << root->angka << " ";
        inOrder(root->kanan);
    }
}



int main(){
    int input;
    node* root = NULL;

    while(input != 0){
        cout << "masukkan angka: "; cin >> input;
        tambah(root, input);
    }
    
    cout << endl;
    inOrder(root);
    cout << endl;
    
    

}