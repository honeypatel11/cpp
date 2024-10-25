#include <iostream>

using namespace std;

int strlen(string);

int main(){
  string str;
  int len;

  cout << "enter any string : ";
  getline(cin,str);

  len = strlen(str);

  cout << "string length is : " << len;

  return 0;
    
}

int strlen(string str){
    int count = 0;
    for(int i = 0;str[i] != '\0'; i++){
        count ++;
    }
    return count;
}