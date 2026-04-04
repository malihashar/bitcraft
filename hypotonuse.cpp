#include<iostream>
#include<cmath>
int main(){
    int a;
    int b;
    int c;
    std::cout<<"emter 2 sides of rigt triangle to find hyptonuse";
    std::cin>>a;
    std::cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    std::cout<<"the hypotonuse is:"<<c;
    return 0;
}