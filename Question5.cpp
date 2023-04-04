#include<iostream>
using namespace std;
class Reverse
{
    private:
       int ActualNumber;
       int ReverseNumber;
    public:
       void setActualNumber(int x)
       {
          ActualNumber=x;
       }
       int getActualNumber()
       {
        return ActualNumber;
       }
       int getReverseNumber()
       {
        return ReverseNumber;
       }
       void calculateReverseNumber()
       {
        int ReverseNumber=0;
        while(ActualNumber>0)
        {
            
            ReverseNumber=(ReverseNumber*10)+ActualNumber%10;
            ActualNumber=ActualNumber/10;

        }
        cout<<"\nReverseNumber="<<ReverseNumber;
       
       }

};
int main() 
{
    Reverse R1;
    R1.setActualNumber(1234);
    R1.calculateReverseNumber();
    cout<<R1.getActualNumber()<<R1.getReverseNumber()<<endl;
    

    return 0;

}