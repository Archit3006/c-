#include <iostream>
using namespace std;

int largestElementIndex(int array[], int size){
    int max = INT8_MIN;
    int maxIndex = -1;
    for(int i = 0; i<size ; i++){
    if(array[i]>max){
        max = array[i];
        maxIndex = i;
    }
    }
    return maxIndex;
}

int main(){
int a;
cout<<"enter no. of element in array :  "<<endl;
cin>>a;
int array[a];
for(int j =0 ; j< a; j++){
    cout<<"elemrnt"<<" "<<j<<" : ";
    cin>>array[j];
}
int size2 = a;
int index = largestElementIndex(array,size2);
cout<<"first largest element is : "<<array[index]<<endl;
array[index] = -1;

int index2 = largestElementIndex(array,size2);
cout<<"second largest element is : "<<array[index2]<<endl;
array[index2] = -1;

int index3 = largestElementIndex(array,size2);
cout<<"third largest element is : "<<array[index3]<<endl;


}