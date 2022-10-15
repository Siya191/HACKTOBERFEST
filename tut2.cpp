
//Count odd and even numbers in a array of psitive integers.


#include <iostream>
using namespace std;
int main()
{
    int arr[10],n,i;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter "<< n<<"numbers\n";
     for(i=0; i,n; i++)
      cin>>arr[i];


    int even_count = 0;
    int odd_count = 0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]&1 ==1)
        odd_count++;
        else 
        even_count++;
    }
    cout<<"Number of even elements = "<<even_count<<"\n Number of odd elements ="<<odd_count;
    }