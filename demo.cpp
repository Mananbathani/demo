#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;

    while(true)
    {
        cout<<endl<<"Welcome to Programee!"<<endl;
        
        cout<<endl<<"Press 1 to create array"<<endl;
        cout<<"Press 2 to read all element"<<endl;
        cout<<"Press 3 to Delete element of array"<<endl;
        cout<<"Press 4 to Update element of array"<<endl;
        cout<<"Press 5 to Exit of program"<<endl;

        int choice;
        cout<<endl<<"Select your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:

            cout<<endl<<"Enter size of array : ";
            cin>>n;

            if(n>0 && n<20)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<"Enter element "<<i+1<<" = ";
                    cin>>arr[i];
                }
            }
            else{
                cout<<endl<<"Invalid size !!"<<endl;
            }
        break;

        case 2:
            cout<<endl<<"Show all element in array : ";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        break;
            
        default:
            break;
        }
    }
}