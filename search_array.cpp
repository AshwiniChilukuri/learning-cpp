//updating an element in an array
#include <iostream>

using namespace std;

int main()

{

    int *array;

    int size,item,i,count = 1;

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


    cout<<endl<<"enter enter the item you want to search inan array";//loc = 1 for array[0]
    cin>>item;
    
    for(i=0;i<size;i++)
    {
        if(array[i] == item)
	    {
		
		    if(count ==1)
		    {
			    cout<<"found at ";
			    cout<<i+1<<" ";
			    count = count + 1;
		    }
		    else if(count !=1)
		    {
			    cout<<i+1<<" ";
			    count += count + 1;
		    }
	    }
	}
	if(count==1)
	    cout<<"not found";
    delete []array;

    return 0;
   
}