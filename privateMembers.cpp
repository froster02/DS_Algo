#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

    public:
        void set_length(int l)
        {
            length = l;
        }
        void set_breadth(int b)
        {
            breadth = b;
        }
        int area()
        {
            return (length * breadth);
        }
};
int main()
{
    Rectangle r;
    r.set_length (20);
    r.set_breadth (30);
    cout<<"Area of Rectangle : "<< r.area();
}