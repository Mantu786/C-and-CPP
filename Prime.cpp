#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=2; i*i <= n; i++){
        if(n%2==0){
            cout << "Not Prime";
            break;
        }else{
            cout << "Prime";
        }
    }
    return 0;
}