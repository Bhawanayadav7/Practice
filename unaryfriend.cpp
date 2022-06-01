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

    friend void operator ++(unary & obj){
        obj.a++;
        obj.b++;
        obj.c++;
    }


};

int main(){
    unary obj(10,20,30);
   //obj.operator++(obj);
   ++obj;
    obj.display();

}