#include <iostream>
using namespace std;
int main (){
    int array[] = {3,5,4,3,5,3,2,12,66};
    int size = sizeof(array)/sizeof(array[0]);

    int max  = array[0];
    for(int i =0 ; i<size; i++){
if(array[i]> max){
    max = array[i];

}

    }
    cout<<max<<endl;
    }