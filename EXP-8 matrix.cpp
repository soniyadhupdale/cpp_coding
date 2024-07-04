#include<iostream>
using namespace std;
class matrix
{
public :
int ma[10][10];
    int size;
    public :
     friend istream& operator >>(istream& in,matrix& m);
     friend ostream& operator <<(ostream& out,const matrix& m);
     matrix operator +(matrix m1);
     matrix operator -(matrix m1);
      matrix operator *(matrix m1);
};
istream& operator >>(istream& in,matrix& m)
{
     cout<<"\nEnter Size : ";
     in>>m.size;
     cout<<"\nEnter Matrix : ";
     int i=0;
     int j=0;
     for(i=0;i<m.size;i++)
     {
           for(j=0;j<m.size;j++)
           {
                 in>>m.ma[i][j];
           }
     }
     return in;
}
ostream& operator <<(ostream& out,const matrix& m)
{
     int i=0;
     int j=0;
     
     for(i=0;i<m.size;i++)
     {
           for(j=0;j<m.size;j++)
           {
                 out<<m.ma[i][j]<<" ";
           }
           out<<endl;
     }
     return out;
}
matrix matrix :: operator +(matrix m1)
{
    matrix mat;
    mat.size=size;
    int i=0;
    int j=0;
     for(i=0;i<mat.size;i++)
     {
         for(j=0;j<mat.size;j++)
         {
             mat.ma[i][j]=ma[i][j]+m1.ma[i][j];
         }
     }
     return mat;
}
matrix matrix :: operator -(matrix m1)
{
     matrix mat;
    mat.size=size;
    int i=0;
    int j=0;
     for(i=0;i<mat.size;i++)
     {
         for(j=0;j<mat.size;j++)
         {
             mat.ma[i][j]=ma[i][j]-m1.ma[i][j];
         }
     }
     return mat;
}
matrix matrix :: operator *(matrix m1)
{
    matrix mat;
    mat.size=size;
    int i=0;
    int j=0;
    int k=0;
     for(i=0;i<mat.size;i++)
     {
         for(j=0;j<mat.size;j++)
         {
             mat.ma[i][j]=0;
             for(k=0;k<mat.size;k++)
             {
                 mat.ma[i][j]+=ma[i][k]*(m1.ma[k][j]);
             }
         }
     }
     return mat;
}
int main()
{
matrix m1,m2,re1,re2,re3;
cin>>m1;
cout<<m1;
cin>>m2;
cout<<m2;
re1=m1+m2;
cout<<"\nAddition : \n";
cout<<re1;
re2=m1-m2;
cout<<"\nSubstraction : \n";
cout<<re2;
re3=m1*m2;
cout<<"\nMultiplication : \n";
cout<<re3;
}
