#include <iostream>

using namespace std;

int queb(int);

int main(){

    int num;

    cout << "enter the num : ";
    cin >> num;


    cout << "queb is : " << queb(num);
    return 0;
}

int queb(int n){
   return  n * n * n;
}