#include<iostream>
#include<string>

using namespace std;

int main(){

    float sum = 0;
    float x ;

    cout << "Enter x: ";
    cin >> x;
    while (x != 0){
    
        if(x != 0){
            if(x > 0){
            sum = sum + x;
            }
        
        }else{
            cout << "sum = 0";
            }

        cout << "Enter x: ";
        cin >> x;
    }
    cout << "sum = " << sum;

    
    
}