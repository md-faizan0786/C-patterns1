#include <iostream>
using namespace std;

int n = 5;
int main() {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*" <<" ";
        }
        cout <<endl;
    }


    cout << "inverted Star "<< endl;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            
            cout << "*" <<" ";
        }
        cout <<endl;
    }

    

    return 0;
}