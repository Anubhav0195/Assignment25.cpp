#include<iostream>
using namespace std;
class Factorial
{
    private:
        int n;
        int fact;
    public:
        void setN(int x)
        {
            n = x;
        }    
        int getN()
        {
            return n;
        }
        int getfactorial()
        {
            return fact;
        }
        void calculatefactorial()
        {
            int f=1,i;
            if (n<=0)
            {
              fact=1;
              return;
            }
            for(i=1;i<=n;i++)
            {
                f=f*i;
            }  
            fact=f;
        }
};
int main()
{
    Factorial F1,F2;
    F1.setN(5);
    F2.setN(6);
    F1.calculatefactorial();
    F2.calculatefactorial();
    cout<<"factorial of"<<F1.getN()<<" is"<<F1.getfactorial()<<endl;
    cout<<"factorial of"<<F2.getN()<<" is "<<F2.getfactorial();
    return 0;
}
