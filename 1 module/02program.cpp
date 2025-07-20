#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << "enter your age " << endl;
    cin >> n;
    if(n < 17){
        cout << "you are a kid babe" << endl;
    }else if(n >= 17 && n < 65){
        cout << "you are a adult" << endl;
    }else{
        cout << "you are senior citizen" << endl;
    }
    return 0;
}