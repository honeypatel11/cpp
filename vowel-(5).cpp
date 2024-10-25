#include <iostream>

using namespace std;
int stringlen(string);
int main(){

string s;
int vowel;

cout << "enter name : ";
getline(cin,s);

vowel = stringlen(s);

cout << "vowel in string are : " << vowel;

return 0;
}

int stringlen(string s){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' ||  
         s[i]== 'A' ||  s[i]== 'E' ||  s[i]== 'I' ||  s[i]== 'O' ||  s[i]== 'U'){
         count ++;
         }
       

    }
    return count;
}
