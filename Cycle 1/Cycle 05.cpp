/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int count=0;
class object{
    public:
        object(){
            count++;
            cout<<"\nNo.of object created : "<<count;
        }
        ~object(){
            cout<<"\nNo.of object destroyed : "<<count;
            count--;
        }
};
int main(){
    cout<<endl<<endl<<"Created three objects inside the main and moved to another block"<<endl;
    object o1,o2,o3;
    {
        cout<<"\n\nCreated an object at the block";
        object o4;
        
    }
    cout<<"\nDestroyed an object at the same block\n";
    {
        cout<<"\n\nCreated an object at next block";
        object o5;
        
    }
    cout<<"\nDestroyed an object at the block\n";
    cout<<"\nThe created three objects inside the main are destroyed at the exit of main"<<endl;
    
    return 0;
}