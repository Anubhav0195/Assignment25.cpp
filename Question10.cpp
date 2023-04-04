#include<iostream>
using namespace std;
class Area
{
    private:
       float side,length,breadth,radius;
    public:
       void setside(float a)
       {
        side=a;
       }
       void setradius(float y)
       {
        radius=y;
       }
       void setlengthbreadth(int l, int b)
       {
        length=l;
        breadth=b;
       }
       float areaofsquare()
       {
        return side*side;
       } 
       float areaofrectangle()
       {
        return length*breadth;
       } 
       float areaofcircle()
       {
        return 3.14*radius*radius;
       }



};
int main()
{
    Area a;
    a.setside(5);
    a.setlengthbreadth(5,7);
    a.setradius(4);
    cout<<"Area of the square is"<<a.areaofsquare()<<endl;
    cout<<"Area of the Rectangle is"<<a.areaofrectangle()<<endl;
    cout<<"Area of the circleis"<<a.areaofcircle()<<endl;
    return 0;
}
