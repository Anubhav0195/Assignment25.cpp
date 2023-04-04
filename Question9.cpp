#include<iostream>
using namespace std;
class Circle
{
    private:
       int r,area;
    public:
       void setr(int x)
       {
        r=x;
       }   
       float getarea()
       {
        return area;
       }
       void calculatearea()
       {
         area=3.14*r*r;
       }
};
int main()
{
    Circle C1;
    C1.setr(5);
    C1.calculatearea();
    cout<<"area of the circle is"<<C1.getarea()<<endl;
    return 0;

}