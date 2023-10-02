#include <iostream>
using namespace std;

int largestElementIndex(int array[] ,int  size){
    int max = INT8_MIN;
    int maxindex = -1;
    for (int i = 0; i<size ; i++){
if(array[i]>max){
    max = array[i];
    maxindex = i;
}
    }
    return maxindex;
}
int main(){

    int array[]  = {2,1,3,2,4,66,4,5,354};
int sizee = sizeof(array)/sizeof(array[0]);

int indexOfLargest = largestElementIndex(array , sizee);
array[indexOfLargest] = -1;

int indexOfSecondLargest = largestElementIndex(array,sizee);
cout<<array[indexOfSecondLargest]<<endl;

}