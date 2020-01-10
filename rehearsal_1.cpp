#include<iostream>
#include<string>

using namespace std;

int main(){

    //string name = n[];
    string name;
    float GPA = 0;

    cout << "What is your name?: ";
    cin >> name;

    cout << "What is your GPA?: ";
    cin >> GPA;

    if(GPA >= 3.50){

        cout << name << " InW Jrim Jrim!!!";

    }else
    {
        cout << "Try harder, " << name << "!!!";
    }
    


    return 0;
}
