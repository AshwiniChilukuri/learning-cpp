//Selection Sort
#include <iostream>
using namespace std;

void swap(int *p1,int *p2);


int main()

{

    int *array;

    int size,i,j;

    cout<<"enter initial size of array"<<endl;

    cin>>size;

    array= new int[size];

    for(i=0;i<size;i++)

    {
	cout<<"enter "<< i <<" element of array";

        cin>>array[i];

    }

    cout<<endl<<"array elements are ";

    for(i=0;i<size;i++)

    {
        cout<<array[i]<<" ";

    }


   //sorting
    for(i = 0;i<size;i++)
    {
        for(j = i+1;j<size;j++)
        {
            if(array[j]<array[i])
            {
		swap(&array[j],&array[i]);
	    }
        }
    }
//sorted array
    cout<<endl<<"sorted array is ";
    for(i=0;i<size;i++)
    {
	cout<<array[i] <<" ";
    }
    delete []array;

    return 0;
   
}
void swap(int *p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
