//reversing an array using 2 pointer method
#include<iostream>
#include<vector>
using namespace std;

//function to reverse the array
void reversedArray(vector<int>& arr, int size){     //arr is passed by reference not by value
    int start = 0, end = size - 1;

    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    reversedArray(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
