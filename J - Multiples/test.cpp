#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    string result=(a % b == 0 || b % a == 0)?"Multiples":"No Multiples";
    cout<<result;    
    return 0;
}