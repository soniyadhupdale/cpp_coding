#include<iostream>
using namespace std;
const float pi=3.1412;
class Area{
    public:
    int a,b;
    Area(){
        int len=a;
        int brea=b;
    }
    Area(int a,int b){
        cout<<"Area of Rectangle : ";
        int A=a*b;
        cout<<A<<endl;
    }
    Area(int r){
        cout<<"Area of Circle : ";
        int A=pi*r*r;
        cout<<A<<endl;
    }
    Area(int a,int b,int h){
        cout<<"Area of Trapezium : ";
        int A=0.5*(a+b)*h;
        cout<<A<<endl;
    }
void VolumeofRec(int l,int b,int h){
    cout<<"Volume of Rectangle : ";
    int V=l*b*h;
    cout<<V<<endl;
}

};
int main(){
    Area a1(8,6,7);
    a1.VolumeofRec(5,4,8);
}
