#include<iostream>

using namespace std;

int main(){
    int loop,number,divisor;
    cout<<"this code is to check how the modulus operator works in c++"<<endl;
    cout<<"enter the divisor"<<endl;
    cin >> divisor;
    cout<<endl<<"enter number of tests"<<endl;
    cin >> loop;
    cout<<"ready"<<endl;
    int rem;
    for (int i=0;i<loop;i++){
        cin >> number;
        rem = number%divisor;
        cout << rem << endl;}

    return 0;
}
