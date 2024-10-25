#include <iostream>

using namespace std;

void division(int);

int main(){
 int num;


 cout << "enter num : ";
 cin >> num;

division(num);


    return 0;
}

void division(int x){
  if((x % 3 == 0 && x % 5 == 0)){
    cout << "divided by 3 & 5 :-" ;
  }else{
    cout << "not divided by 3 & 5 :-" ;
  }
    

}