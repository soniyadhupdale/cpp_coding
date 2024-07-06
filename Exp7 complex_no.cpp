#include<iostream>
#include<cmath>
using namespace std;
class Line
{
    private :
    int x1,y1,x2,y2;
    float slope,intercept;
    public:
    Line() : x1(0),y1(0),x2(0),y2(0),slope(0),intercept(0) {}
    Line(int x1,int y1,int x2,int y2) : x1(x1),y1(y1),x2(x2),y2(y2) {
    slope=(y2-y1)/(float)(x2-x1);
    intercept=y1-slope*x1;
    }
    void setX1(int x)  {x1=x;}
   void setY1(int y)  {y1=y;}
    void setX2(int x)  {x2=x;}
    void setY2(int y)  {y2=y;}
      
       int getX1()  {return x1;}
       int geY1()  {return y1;}
       int getX2()  {return x2;}
       int geY2()  {return y2;}
      float getSlope()  {return slope;}
     float getIntercept()  {return intercept;}
};
class circle
{
   private :
    int centerX;
    int centerY;
    int rad;
      
    public :
     circle() : centerX(0),centerY(0),rad(1) {}
     circle(int cx,int cy) : centerX(cx),centerY(cy), rad(1) {}
      circle(int cx,int cy,int r) : centerX(cx),centerY(cy), rad(r) {}
      
      void setCenterX(int x)  {centerX=x;}
      void setCenterY(int y)  {centerY=y;}
      void setRadius(int r)  {rad=r;}
      
       int getCenterX()  {return centerX;}
      int getCenterY()  {return centerY;}
     int getRadius()  {return rad;}
    
      float calArea()
      {
         return M_PI*rad*rad;
      }
      float calCircum()
      {
          return 2*M_PI*rad;
      }
      
      bool isTangent(int x1,int y1,int x2,int y2)
      {
         Line line(x1,y1,x2,y2);
         float dist=abs((line.getSlope()*centerX-centerY+line.getIntercept()))/sqrt(line.getSlope()*line.getSlope()+1);
         return dist==rad;
      }
       bool isTangent(int slope,int intercept)
      {
         float dist=abs((slope*centerX-centerY+intercept))/sqrt(slope*slope+1);
         return dist==rad;
      }
      bool isTangent(Line t1)
      {
         float dist=abs((t1.getSlope() * centerX-centerY+t1.getIntercept()))/sqrt(t1.getSlope()*t1.getSlope()+1);
         return dist==rad;
      }
      void draw()
      {
      std::cout<<"Drawing Circle at ("<<centerX<<", "<<centerY<<") with radius " <<rad <<std::endl;
      }
};
int main()
{
   cout<<"X : ";
   int x,y,r;
   cin>>x;
   cout<<"\nY : ";
   cin>>y;
   cout<<"\nR : ";
   cin>>r;
   circle c(x,y,r);
   cout<<"\nArea : "<<c.calArea()<<endl;
   cout<<"Circumference : "<<c.calCircum()<<endl;
   c.draw();
   return 0;
}
