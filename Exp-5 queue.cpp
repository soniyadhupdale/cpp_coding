#include<iostream>
#define MAX_SIZE 100
using namespace std;
class Queue
{
        private:
                int front;
                int rear;
                int item,i;
                int arr_queue[MAX_SIZE];

        public:

                Queue()
                {
                        front=0;
                        rear=0;
                }
                void insert()
                {
                        if(rear==MAX_SIZE)
                        {
                                cout<<"Queue is Already full"<<endl;
                        }
                        else
                        {
                                cout<<"Enter element for insertion"<<endl;
                                cin>>item;
                                rear=rear+1;
                                arr_queue[rear]=item;                
                        }
                }

                void Delete()
                {
                        if(rear==front)
                        {
                                cout<<"Queue is Empty"<<endl;
                                return;
                        }
                        else
                        {
                                front++ ;
                                cout<<"Element Deleted successfully"<<endl;
                        }
                }

                void Display()
                {

                        for(i=front;i<rear;i++)
                        {
                                cout<<arr_queue[i]<<" ";
                        }
                }
};



int main()
{
        Queue q1;
        int val=1;
        int choice;
        do
        {
                cout<<endl;
                        cout<<"1.Insertion"<<endl;
                cout<<"2.Deletion"<<endl;
                cout<<"3.Display"<<endl;
                cout<<"Enter Your Choice:"<<endl;
                cin>>choice;

                switch(choice)
                {
                        case 1:
                                q1.insert();
                                break;

                        case 2:
                                q1.Delete();
                                break;

                        case 3:
                                q1.Display();
                                break;

                        default:
                                val=0;
                                cout<<"Invalid choice"<<endl;
                }

        }while(val);

        return 0;
}


