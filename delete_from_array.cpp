//deletion operation in an array
#include <iostream>

using namespace std;

int main()

{

    int *array;

    int size,loc,j,i;

    cout<<"enter initial size of array before deletion "<<endl;

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


    cout<<endl<<"enter location of item you want to delete";
    cin>>loc;
    
    for(i=loc;i<size;i++)

    {

	array[i-1] = array[i];     
    }

    cout<<endl<<"after deletion - ";
    for(i=0;i<size-1;i++)
    {
        cout<<array[i]<<" ";
    }
    delete []array;

    return 0;
   
}