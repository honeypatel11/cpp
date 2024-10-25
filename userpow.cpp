#include <iostream>

using namespace std;

void pow(int,int);

int main(){
 int p,n;


 cout << "enter the n and p : ";
 cin >> n >> p;

pow(p,n);


    return 0;
}

void pow(int x, int y){
   int ans=1;
    for (int i = 0; i < x; i++)
    {
        ans=ans*y;
    }
    cout << ans;
    

}