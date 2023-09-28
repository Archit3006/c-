#include <iostream>
using namespace std;
int main(){
    int array[] = {2, 7, 7,4,9,43};
    int sum = 0;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i <size; i++){
        sum = sum + array[i];

    }
    cout<<sum<<endl;
    
}