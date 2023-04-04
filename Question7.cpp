#include<iostream>
using namespace std;
class Greatest
{
    private:
        int a,b,c,max;
    public:    
    void seta(int x)
    {
        a=x;
    }
    void setb(int y)
    {
        b=y;
    }
    void setc(int z)
    {
        c=z;
    }
    void FindGreatest()
    {
        if((a>b) && (a>c))
        {
            max=a;
        }
        else if((b>c) &&(b>a))
        {
            max=b;
        }
        else{
            max=c;
        }
    }
    int getmax()
    {
        return  max;
    }

};
int main()
{
    Greatest G1,G2;
    G1.seta(6);
    G1.setb(8);
    G1.setc(2);
    G1.FindGreatest();
    cout<<G1.getmax();
    return 0;
}