#include <iostream>
using namespace std;

int mod(int num1,int num2){
    int modulus = num1 % num2;
    return modulus;

}

int main(){
    cout<<"enter two numbers : "<<endl;
    int a ,b,c,d;
    cin>>a>>b;
    cout<<mod(a,b)<<endl;
    cout<<"enter another two numbers : "<<endl;
    cin>>c>>d;
    cout<<mod(c,d)<<endl;



}