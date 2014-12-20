#include<iostream>
using namespace std;
class stack1
{
    int a[100],t=-1;
    public:
    void push(int x)
    {
        if(t<100)
        {
            t++;
            a[t]=x;

        }
        else
            cout<<"Invalid operation\n";
    }
    void poop(void)
    {
        if(t>0)
        {
            a[t]='\0';
            t--;
        }
        else
            cout<<"Invalid operation\n";
    }
    int search1(int x)
    {
        while(t>=0)
        {
            if(a[t--]==x)
                return t;
        }
    }

};
int main()
{
    stack1 b;
    int i;
    while(1)
    {
        cout<<"1.Add element\n 2.delete element\n 3.search element \n 4.Exit \n";
        cin>>i;
        if(i==1)
        {
            {cout<<"enter element to add \n"; int x; cin>>x;b.push(x);}

        }
        else if(i==2)
        {
            b.poop();
            cout<<"element deleted\n";
        }
        else if(i==3)
        {
            {
                cout<<"enter element to search \n";
                int x;
                cin>>x;
                cout<<b.search1(x);
            }
        }
        else if(i==4)
            return 0;
    }



}

