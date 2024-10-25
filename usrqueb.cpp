#include <iostream>

using namespace std;

void queb(int);

int main(){

    int num;

    cout << "enter the num : ";
    cin >> num;

    queb(num);
    
    return 0;
}

void queb(int x){
  
   cout <<  x * x * x;
    
}