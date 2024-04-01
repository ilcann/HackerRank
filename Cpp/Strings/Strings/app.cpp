#include <iostream>
#include <string>

using namespace std;

void swapFirst(string * str1, string * str2);

int main() {
    string str1;
    string str2;
    int len1;
    int len2;
    
    cin >> str1;
    cin >> str2;
    len1 = str1.size();
    len2 = str2.size();
    
    string str3;
    str3 = str1 + str2;
    
    string str4;
    string str5;
    str4 = str1;
    str5 = str2;
    swapFirst(&str4,&str5);
    
    cout << len1 << " " << len2 << endl;
    cout << str3 << endl;
    cout << str4 << " " << str5 << endl;
    
    return 0;
}

void swapFirst(string * str1, string * str2)
{
    char temp = (*str1)[0];
    (*str1)[0] = (*str2)[0];
    (*str2)[0] = temp; 
}