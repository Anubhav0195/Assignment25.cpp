#include<iostream>
using namespace std;
class Rectangle
{
    private:
       int l,b,area;
    public:
       void setl(int x)
       {
        l=x;
       }
       void setb(int y)
       {
        b=y;
       }
       int getarea()
       {
        return area;
       }
       void calculatearea()
       {
        area=l*b;
       }
};
int main()
{
    Rectangle R1;
    R1.setl(5);
    R1.setb(6);
    R1.calculatearea();
    cout<<"area of rectangle"<<"is"<<R1.getarea()<<endl;
    return 0;
}