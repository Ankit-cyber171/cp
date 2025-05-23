#include <iostream>
using namespace std;

int perform(int m){
    if(m%2==0){
        return m/2;
    }
    else{
        return 3*m+1;
    }
}

int main(){
    int n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        n=perform(n);
    }
    cout<<1<<endl;
}