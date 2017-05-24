//inserting element into array
#include <iostream>

using namespace std;

int main()

{

    int *array,*narray;

    int size,loc,item,j,i;

    cout<<"enter initial size of array before insertion "<<endl;

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

    //new size copy of array

    int nsize = size + 1;

    narray=new int[nsize];

    for(i=0;i<size;i++)

    {

        narray[i]=array[i];

    }

    cout<<endl<<"enter the location nd item you want to insert";

    cin>>loc;

    cin>>item;

    j=nsize;

    for(i=j-1;i>=loc;i--)

    {

        narray[i] = narray[i-1];

    }

    narray[i]=item;

    cout<<endl<<"new array";

    for(i=0;i<nsize;i++)

    {

        cout<<narray[i];

    }

    delete []array;

    delete []narray;

   
 return 0;
   
}