#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>
 
using boost::multiprecision::cpp_int;
using namespace std;
 
cpp_int a, b;
 
int main(){
    while(cin >> a >> b)
        cout << a + b << endl;
}