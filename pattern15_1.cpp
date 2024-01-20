#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number of rows: "; cin>>n;
    
    int i=1; //rows
    while(i<=n){
        char ch=char('A'+n-i); //first element of each row
        int j=1; //columns
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}