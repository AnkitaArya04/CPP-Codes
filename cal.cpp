#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
    char ch;
    cout << "enter the operation:" << endl;
    cin >> ch;
    switch(ch){
        case '+': cout << a+b << endl;
                break;
        case '-': cout << a-b << endl;
                break;
        case '*': cout << a*b << endl;
                break;
        case '/': cout << a/b << endl;
                break;
        case '%': cout << a%b << endl;
                break;
        default:
                cout << "please enter valid operation" << endl;                                
    }
}