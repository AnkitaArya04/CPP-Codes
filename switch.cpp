#include<iostream>
using namespace std;
int main(){
    char ch='a';
    cout << endl;
    switch (ch){
        case 1: cout << "first" << endl;
                break;
        case '1': cout << "character 1" << endl;
                break;
        default:
                cout << "default case" << endl;

    
                                
    }
    cout << endl;
    return 0;
}