// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout << "Press Enter 3 times to reveal your future.\n";
    string x;
    for(int i=0;i<3;i++){
        getline(cin,x);
    }
    srand(time(0));
    string grade[]={"A","B+","B","C+","C","D+","D","F","W"};
    int fate = rand()%9;
    cout<<"You will get "<<grade[fate]<<" in this 261102.";
}
