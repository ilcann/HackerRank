#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string convertToString(int n);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if (n>9) {
        printf("Greater than 9");
    }
    else {
        cout << convertToString(n);
    }
    //
    return 0;
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

string convertToString(int n) {
    string str;
    
    if(n == 1) {
        str = "one";
    }
    else if(n == 2) {
        str = "two";
    }
    else if(n == 3) {
        str = "three";
    }
    else if(n == 4) {
        str = "four";
    }
    else if(n == 5) {
        str = "five";
    }
    else if(n == 6) {
        str = "six";
    }
    else if(n == 7) {
        str = "seven";
    }
    else if(n == 8) {
        str = "eight";
    }
    else {
        str = "nine";
    }
    
    return str;
}