#include<iostream>
using namespace std;
int main()
{
    class calc
    {
        public:
        int a,b;
        char opr;
        void getdata()
        {
            cout<<"Enter the values of a and b: ";
            cin>>a>>b;
            cout<<"Enter the operator: ";
            cin>>opr;
        }
        void display()
        {
            cout<<"The values of a and b are: "<<a<<" "<<b<<endl;
            cout<<"The operator is: "<<opr<<endl;
        }
        void calculate()
        {
           switch(opr)
           {
            case '+': cout<<"The sum is: "<<a+b<<endl;
                      break;
            case '-': cout<<"The substraction is: "<<a+b<<endl;
                      break;
            case '*': cout<<"The multiplication is: "<<a+b<<endl;
                      break;  
            case '/': 
            if(b!=0)
            {
            cout<<"The sum is: "<<a+b<<endl;
                      break;
            }
            else
            {
                cout<<"Division by zero is not possible"<<endl;
            }        
           }
        }
    };
    calc c;
    c.getdata();
    c.display();
    c.calculate();
    return 0;
}