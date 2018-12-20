#include <iostream>
using namespace std;


int Bsearch(const int arr[], int length, int search_item);

int main()
{
    int si;
cout<<"Enter the search item: ";
int Bsearch_array[10]={4,5,12,23,31,44,56,67,99,120};
cin>>si;
cout<<endl;

int r=Bsearch(Bsearch_array,10,si);

cout<<endl;

cout<<"The search item is in position "<<r+1<<endl;
}


int Bsearch(const int arr[], int length, int search_item)
{
int first_index = 0;
int last_index = length - 1;
int mid;
bool found = false;
while (first_index <= last_index && !found)
{
mid = (first_index + last_index) / 2;
if (arr[mid] == search_item)
found = true;
else if (arr[mid] > search_item)
last_index = mid - 1;
else
first_index = mid + 1;
}
if (found)
return mid;
else
return -1;
}
