#include <iostream>
using namespace std;

int add(int num1 , int num2,int num3,int num4){
    int sum = num1 + num2 + num3 + num4;
    return sum;

}

int main(){
int a;
int b;
int c;
int d;

cin>>a>>b>>c>>d;
cout<<"addition is "<<add(a,b,c,d)<<endl;


return 0;

}