#include <iostream>

using namespace std;

bool palindrome(string);

int main(){
    string s;
    
    cout << "enter a string : ";
    getline(cin,s);

    if(palindrome(s)){
        cout << "its palindrome ! ";

    }else{
        cout << "its not a palindrome ! ";
    }

    return 0;
}
bool palindrome(string s){
    int start = 0, end = s.size()-1;
    while(start <= end){
        if (s[start]==s[end]){
            start ++;
            end --;
        } else  return false;
    }
    return true;
}

