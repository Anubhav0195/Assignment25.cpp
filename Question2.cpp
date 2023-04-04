#include<iostream>
using namespace std;
class Time
{
    private:
         int hours;
         int min;
         int sec;
    public:
        void set(int h, int m,int s)
        {
            hours=h;
            min=m;
            sec=s;
        } 
        void print()
        {
            cout<<hours<<"hr"<<min<<"min"<<sec<<"sec"<<endl;

        }    
};
int main()
{
    Time T1;
    T1.set(3,45,30);
    T1.print();
    return 0;
}