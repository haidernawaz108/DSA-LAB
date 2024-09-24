#include <iostream>
#include <string>
using namespace std;
int linearSearch(int arr[], int size, int target){
for(int i=0; i<size; i++){
if(arr[i] == target)
return i;
}
return -1;
}
int main(){
cout<<"\n\n***DSA LAB 04***\n\n";
int arr[10];
int size;
cout<<"Enter the size of an array:"<<endl;
cin>>size;
for(int i=0; i<size; i++){
cout<<"Enter the number at Index No "<<i<<"\t";
cin>>arr[i];
}
 size= sizeof(arr) / sizeof(arr[0]);
int target;
cout<<"Enter the Number to be search"<<"\t";
cin>>target;
int result = linearSearch(arr, size, target);
if (result != -1){
cout<<"Number "<<target<<" is found at index "<<result<<endl;
}
else
{
cout<<"Number "<<target<<" is not found in the array "<<endl;
}
system ("pause");
}
