#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
         long long number,k;
        cin>>number>>k;
        long long smallest_factor = number;
        
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            smallest_factor=i;
            break;
        }
    }

    long long ans = number + smallest_factor + 2*(k-1);
    cout<<ans<<endl;
    
}
}