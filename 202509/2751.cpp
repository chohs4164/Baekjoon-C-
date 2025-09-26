#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    // c++ 스트림이 c 표준 입출력과 동기화 되어 있어서
    //느리기 때문에 동기화 끊기
    ios::sync_with_stdio(false);
    // cin이 cout에 묶여 있어서 cin이 입력을 받기 전에 cout을 자동으로 버퍼 비우기를 해버림
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> v(N); 
    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(int i=0;i<N;i++){
        cout << v[i] << '\n';
    }
}
