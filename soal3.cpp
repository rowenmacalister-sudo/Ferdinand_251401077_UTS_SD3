#include <iostream>
using namespace std;

struct node{
    char huruf;
    node* next;
};

void tumpuk(node *&top, char h){
    node* baru = new node();
    baru -> huruf = h;
    baru -> next = nullptr;
    
    if (top == nullptr) top = baru;
    else {
        baru -> next = top;
        top = baru;
    }
}

void view(node *&top){
    for(node* p = top; p != nullptr; p= p-> next){
        cout << p-> huruf;
    }
}

void hapus(node *&top){
    while(top != nullptr){
        node* temp = top;
        top = top-> next;
        delete temp;
    }
}

int main(){
    string kata;
    node* top = nullptr;
    cout << "masukkan kata: "; cin >> kata;
    
    for(char& i : kata){
        tumpuk(top, i);
    }
    
    cout << kata;
    cout << endl;
    cout << "kata balek: ";
    view(top);
    
    
    hapus(top);
    
}