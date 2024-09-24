#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target) {
int low = 0;
int high = size - 1;
while (low <= high)
{
int mid = low + (high - low) / 2;
if (arr[mid] == target)
{
return mid;
}
if (arr[mid] > target)
{
high = mid - 1;
}
else
{
low = mid + 1;
}
}
return -1;
}
int main() {
int arr[7];
cout << "*****DSA LAB 04*****" << endl;
for (int i = 0; i < 7; i++)
{
cout << "Enter the values of Array at index " << i << "\t";
cin >> arr[i];
}
int size = sizeof(arr) / sizeof(arr[0]);
int target;
cout << "Enter the value to be search" << "\t";
cin >> target;
int result = binarySearch(arr, size, target);
if (result != -1)
{
cout << "Element " << target << " is found at index " << result << endl;
}
else
{
cout << "Element " << target << " is not found in the array" << endl;
}
system("pause");
}