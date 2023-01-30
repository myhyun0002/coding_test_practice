#include <iostream>
using namespace std;

int ans, n, pi[1001];
char arr[1001];

int main(){
    cin.sync_with_stdio(false); cin.tie(NULL);
    cin >> arr;
    for(int i = 0; arr[i] != '\0'; i++){
        int k = 0;
        for(int j = i + 1; arr[j] != '\0'; j++){
            while(k > 0 && arr[j] != arr[i + k]) k = pi[k - 1];
            if(arr[j] == arr[i + k]){
                k++;
                if(ans < k)ans = k;
            }
            pi[j - i] = k;
        }
    }
    cout << ans;
}