#include <iostream>
#include<string>

using namespace std;

string compress(string text){

    int n = text.size();
    int i = 0;
    while(i < n)
    {
        cout << text[i] ;
        i = i+3;
    }
    //return n;
    

}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" ;//<< c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";
    

}
