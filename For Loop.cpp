#include <iostream>
#include <cstdio>
using namespace std;
string checkLogic(const long );

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    for(int i = a ; i<=b;i++) {
        string resp = checkLogic(i);
        cout << resp << '\n';
    }
    return 0;
}

string checkLogic(long n) {
    string resp;
    if(n == 1) resp = "one"; 
    else if(n == 2) resp = "two"; 
    else if(n == 3) resp = "three"; 
    else if(n == 4) resp = "four"; 
    else if(n == 5) resp = "five"; 
    else if(n == 6) resp = "six"; 
    else if(n == 7) resp = "seven"; 
    else if(n == 8) resp = "eight"; 
    else if(n == 9) resp = "nine"; 
    else if(n > 9) {
        if(n%2 == 0) resp = "even";
        else resp = "odd";
    } 
    
    return resp;
}
