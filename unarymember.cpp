#include<iostream>
using namespace std;

class unary{
    private:
    int a,b,c;

    public:
    unary(int x, int y, int z){
         a=x;
         b=y;
         c=z;

    }
    
    void display(){
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
    
    void operator ++(){
        a--;
        b--;
        c--;
    }

};

int main(){
    unary u(10,20,30);
    u.operator++();
    u.display();

}