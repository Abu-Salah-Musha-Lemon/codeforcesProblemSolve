#include <iostream>
using namespace std;

int main() {
    int x, a,b,c, count = 0;
    cout << "Enter the number"<<endl;
    cin>>x;
    for(int i = 0; i<=x; i++){
        cout<< "enter the value of three persone 1 = solve and 0 = not"<<endl;
        cin>> a >> b >> c;
        if(a+b+c >=2){
            count ++;
        } break;
    }
    cout<< count<<endl;
    return 0;
}

// v-02
#include <iostream>
using namespace std;

int main() {
    int x, a,b,c,d, count = 0;
   // cout << "Enter the number"<<endl;
    cin>>x;
    for(int i = 0; i<x; i++){
       // cout<< "enter the value of three persone 1 = solve and 0 = not"<<endl;
        cin>> a >> b >> c;
        d = a+b+c;
        if(d >=2){
            count ++;
        } 
    }
    cout<< count<<endl;
    return 0;
}
