#include <iostream>
#include<string>
using namespace std;


std::string check_pallindrom(std::string word){
    int len = word.string::length();

    if(len <=1) return("Yes");

    if (word[0] == word[len-1]){
        return check_pallindrom(word.string::substr(1, len-2));
    }

    return "No";

}

int main(){
  std::string word;
  getline(std::cin, word);
  std::cout<<check_pallindrom(word);
}
