#include"iostream"
using namespace std;
class stack
{
    private :
        static const int MAX_SIZE = 100;
        int data[MAX_SIZE];
        int topindex;
 
    public :
        stack()
        {
           if(topindex=-1)
           {
              cout<<"stack overflow"<<endl;
              return 0;
           }
           arr[++topindex]=value;
           cout<<"push to stack"<<endl; 
        }
        void push(int val)
        {
            data[++topindex]=val;
        }
        void pop()
        {
            if(topindex=-1)
            {
                cout<<"stack underflow"<<endl;
                return 0;
            }
            arr[top--]=value;   
            cout<<"poped from the stack"<<endl;
        }
        void display()
        {
            cout<<"Stack elements : ";
            for(int i=topindex;i>=0;--i)
            {
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    stack mystack;
    stack.push();
    stack.pop();
    stack.display();
 
    return 0;
}



















