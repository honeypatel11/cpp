#include <iostream>

using namespace std;

void stringlen(string);

int main(){
 string s;
 int character,num,sp_char;


cout << "enter character , number of special character : ";
getline(cin,s);

stringlen(s);


    return 0;
    
}
void stringlen(string s){
    int character = 0;
    int num;
    int sp_char = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z' || (s[i] >= 'a' && s[i] <= 'z')){
            character++;
        }
    else if(s[i] >= '0' && s[i] <= '9'){
        num ++;
    }else{
        sp_char++;
    }

    }
    cout << "character in string are " << character << endl;
    cout << "number in string are " << num << endl;
    cout << "special character in string are " << sp_char << endl;
}