#include <iostream>
using namespace std;

int main() {
    int a,b;
    char z;
    cin>>a>>z>>b;
    switch(z){
        case '+':
        cout<<a+b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        case '-':
        cout<<a-b;
        break;
        default:
        cout<<"u faied math? got u i failed it too";

    }


    return 0;
}
