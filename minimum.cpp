#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a ,b;
    cout << "enter the value of a and b:";
    cin >> a>> b;
     if (a<b){
        cout << "a is smaller then b";
     }
     else  if(a>b){
        cout << "b is smaller than a";
     }
     else{
        cout <<  "a and b are equal";
     }

  return 0;
}