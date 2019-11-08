//https://www.hackerrank.com/challenges/the-power-sum/problem

#include <iostream>
#include <cmath>

using namespace std;

int powerSum(int ele, int N, int X){
    if ( std::pow(ele, N) == X) return 1;

    if ( std::pow(ele, N) > X) return 0;

    return powerSum(ele + 1, N, X-std::pow(ele, N)) +
        powerSum(ele + 1, N, X);
}

int main(){
    int X, N;
    std::cin>>X;
    std::cin>>N;

    // std::cout<<X<<" "<<N<<"\n";

    std::cout<<powerSum(1, N, X);
}
