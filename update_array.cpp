//updating an element in an array
#include <iostream>

using namespace std;

int main()

{

    int *array;

    int size,loc,item,j,i;

    cout<<"enter initial size of array"<<endl;

    cin>>size;

    array= new int[size];

    for(int i=0;i<size;i++)

    {
	cout<<"enter "<< i <<" element of array";

        cin>>array[i];

    }

    cout<<endl<<"array elements are ";

    for(i=0;i<size;i++)

    {
        cout<<array[i]<<" ";

    }


    cout<<endl<<"enter location of item you want to update and value you want to update to";//loc = 1 for array[0]
    cin>>loc;
    cin>>item;
    array[loc-1]=item;
    cout<<endl<<"after updation - ";
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    delete []array;

    return 0;
   
}