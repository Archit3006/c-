#include <iostream>
using namespace std ;
int main(){
    int array[] = {1,2,3,4,56,5,32};
    cout<<sizeof(array)/sizeof(array[0])<<endl;
}