#include <iostream>
using namespace std;
#define SIZE 8
struct stack
{
    int a[SIZE];
    int top;
}s;
bool empty()
{
 if(s.top==-1)
 return true;
 else
 return false;
}
bool full()
{
    if(s.top==SIZE-1)
    return true;
    else
    return false;
}
void push(int n)
{
    if(full())
    {
        return ;
    }
    else
    {
        s.top++;
        s.a[s.top]=n;
    }
}
void pop()
{
    if(empty())
    {
    cout<<"\n stack is empty";
    }
    else
    {
     int x=s.a[s.top];
     s.top--;

    cout<<"\n stack deleted is :";
    }
}
void display()
{
    for(int i=0;i<s.top;i++)
    {
        cout<<s.a[i]<<endl;
    }
}
int main()
{
    s.top=-1;
    push(12);
    push(13);
    push(11);
    push(14);
    push(15);
    push(16);
    push(17);
    display();
    // pop();
    // pop();
    // pop();
    // display();
    return 0;

}