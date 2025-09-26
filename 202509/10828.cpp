#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class StackVector{
public:

void push(int X){
    data_.push_back(X);
}

int pop(){
    if(data_.empty())
        return -1;
    else{
        int output = data_.back();
        data_.pop_back();
        return output;
    }
}

int size(){
    return  data_.size();
}

int empty(){
    if(data_.empty())
        return 1;
    return 0;
}

int top(){
    if(data_.empty())
        return -1;
    return data_.back();
}

vector<T> data_;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,input;
    string cmd;
    cin >> N;
    StackVector<int> v;
    //명령어 입력
    for(int i=0;i<N;i++){
        cin >> cmd;
        if(cmd=="push"){
            cin >> input;
            v.push(input);
        }
        if(cmd=="pop"){
            cout << v.pop() << '\n';
        }
        if(cmd=="size"){
            cout << v.size() << '\n';
        }
        if(cmd=="empty"){
            cout << v.empty() << '\n';
        }
        if(cmd=="top"){
            cout << v.top() << '\n';
        }
    }
}


