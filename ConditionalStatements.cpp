#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
string checkLogic(const long );


int main()
{
    string n_temp;
    getline(cin, n_temp);

    long n = stoi(ltrim(rtrim(n_temp)));
    string output = checkLogic(n);
    cout << output;

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
    else if(n > 9) resp = "Greater than 9"; 
    
    return resp;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
