#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        void set(int r, int i)
        {
            real=r;
            img=i;
        }    
        void print(Complex c)
        {
            cout<<real<<" + "<<img<<" i"<<endl;
            cout<<c.real<<" + "<<c.img<<" i"<<endl;
        }

};
int main()
{
    Complex c1,c2;
    c1.set(5,4);
    c2.set(6,7);
    c1.print(c2);
    return 0;
}
