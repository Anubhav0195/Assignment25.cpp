#include<iostream>
using namespace std;
class Square
{
    private:
        int x1;
        int x2;
        static int count;
    public:  
        void setx1(int m)
        {
            x1 = m;
        }  
        int getx1()
        {
            return x1;
        }
        void calculateSquare()
        {
            x2=x1*x1;
        }
        int getsquare()
        {
            return x2;
        }
        static int getcount()
        {
            count++;
            return count;
        }
        
};
int Square::count=0;
int main()
{
    Square S1,S2;
    S1.setx1(3);
    S2.setx1(5);
    Square::getcount();
    S1.calculateSquare(); 
    S2.calculateSquare();
    cout<<"Square of"<<S1.getx1()<<"is"<<S1.getsquare()<<endl;
    cout<<"Square of"<<S2.getx1()<<"is"<<S2.getsquare()<<endl;
    cout<<"\ncount="<<Square::getcount()<<endl;
    return 0;
    


}
