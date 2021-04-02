#include <iostream>

using namespace std;
class fun{
public:

    int size = 0;
    int cap[4] = {};
    int val2;

public:
    bool push( int val){
        if(size >= sizeof(cap)/sizeof(cap[0]) ){
            cout << "Stack is full \n";
            return false;
        }
        cap[size] = val;
        size++;
        cout << " push "<< val <<"\n";
        val2 = val;
        return true;
        }
    bool pop(){
        if(size <= 0 ){
            cout << "the stak is empety \n";
            return false;
        }
        size -- ;
        cout<<" pop "<<cap[size]<<endl;
        return true;
    }
     bool finMIn(){
         if(size == 0){
            cout <<"stack is empty"<<endl;
            return false;
         }
        int mine = val2;
       for(int i=0;i <=sizeof(cap)/sizeof(cap[0]);i++){
        if (mine > cap[i])
            mine =cap[i];
               }
        cout << "the smallest = "<< mine<<endl;
        return true;
    }


};

int main()
{
    fun c;
    c.push(3);
    c.push(2);
    c.push(5);
    c.push(9);
    c.push(8);
    c.pop();
    c.pop();
    c.pop();
    c.pop();
    c.pop();
    c.finMIn();
    return 0;
}
