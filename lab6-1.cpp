#include<iostream>
using namespace std;

int main(){
    int count,even = 0,odd = 0;
    while(true){
        cout << "Enter an integer: ";
        cin >> count;
        if (count == 0)
        {
            break;
        }
        if (count % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
        
    }
    
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}