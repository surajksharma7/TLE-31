#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n ;
    while(n--){
        long long a, b, k;

        cin >> a >> b >> k;
        if(k == 0){
            cout << "No One" << endl;
            break;
        }
        else if((a%k== 0) && (b%k== 0)){
            cout << "Both" << endl;
        }else if(a%k== 0){
            cout << "Memo" << endl;
        }else if(b%k== 0){
            cout << "Momo" << endl;
        }else{
            cout << "No One" << endl;
        }
    }
    return 0;
}
