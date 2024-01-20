#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number: "; cin>>n;
    
    int i=0; //rows
    while(i<n){
        int j=0; //columns
        while(j<n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}