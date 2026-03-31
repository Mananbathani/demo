#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;

    while(true)
    {
        cout<<endl<<"Welcome to Programe!"<<endl;

        cout<<endl<<"Press 1 to create array"<<endl;
        cout<<"Press 2 to read all element"<<endl;
        cout<<"Press 3 to Delete element of array" <<endl;
        cout<<"Press 4 to Update element of array" <<endl;
        cout<<"Press 5 to Exit of Program"<<endl;
        
        int choice;
        cout<<endl<<"Select your choice : ";
        cin>>choice;

        switch (choice)
        {
            case 1:
            cout << endl << "Enter size of array : ";
            cin >> n;

            if (n>0 && n<20)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "Enter Element "<<i+1<<" = ";
                    cin >> arr[i];
                }
                
            }
            else
            {
                cout<<endl<<"Invalid Size !!"<<endl;
            }
            break;

            case 2:
            cout<<endl<<"show all element in array : ";
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;

            case 3:
            int pos;
            cout << "Enter the position of element to remove :";
            cin >> pos;
            if (pos >= 0 && pos < n)
            {
                for (int i = pos; i < n; i++)
                {
                    arr[i] = arr[i+1];
                }
                n--;
                cout << endl << "Element deleted successfully" << endl;
            }
            else
            {
                cout << endl << "Position is not valid !" <<endl;
            }

            break;

            default :
            break;
        }
    }
}