#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,20,30,40,50};
    int* p=arr;
    int i, sum=0; 
    for(i=0; i<5; i++)
    {
        sum=sum+*(p+i);
    }
    cout<<"Sum:"<<sum;
    return 0;
}