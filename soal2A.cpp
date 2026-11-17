#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};



void tambah(node *&head, int angka){
    node* baru = new node();
    baru->data = angka;
    baru-> next = nullptr;
    
    if(head == nullptr){
        head = baru;
    }
    
    else{
        node* p = head;
        if(angka < p->data){
            baru -> next = p;
            
        }else if(angka > p->data){
            while(angka > p->data){
            p= p->next;
            }
            
            baru -> next = p->next;
            p ->next = baru;
        }
        
    }
}

// void hapus(node *&head,node *&tail, int angka){
//     if(head == nullptr) return;
    
//     if(head->data == angka){
//         node* hapus = head;
//         head = head -> next;
//         if(head == nullptr) tail = nullptr;
//         delete hapus;
//         return;
//     }
    
//     for (node* p = head; p-> next != nullptr; p = p -> next){
//         if(p->next->data == angka){
//             node* hapus = p->next;
//             if(p->next == tail){
//                 tail = p;
//             }
//             p->next = p->next->next;
//             delete hapus;
//             return;
//         }
//     }
// }



void tampil(node *head){
    for(node* p = head; p != nullptr; p = p -> next){
        cout << p-> data << " ";
    }
}

int main(){
    int input;
    node* head = nullptr;
    

    
    while(input != 0){
        cout << "masukkan angka: "; cin >> input;
        tambah(head, input);
    }
    
    tampil(head);
}