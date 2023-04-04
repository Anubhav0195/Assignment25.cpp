#include<iostream>
using namespace std;
class Largestnumber
{
    private:
        int a,b,c,largest;
    public:
        void set(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        int get()
        {
            return largest;
        }
        void calculatelargest()
        {
            if(a>b && a>c)
            {
                largest=a;
                cout<<a<<"is the largest number"<<endl;
            }
            else if(b>c && b>a)
            {
                largest=b;
                cout<<b<<"is the largest number"<<endl;
                
            }
            else
            {
                cout<<c<<"is the largest number"<<endl;
            }    

        }

       
};

int main()
{
    Largestnumber L1;
    L1.set(23,45,67);
    L1.calculatelargest();
    return 0;
}