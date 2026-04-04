#include <iostream>
 namespace second{
        int x=12;
    }
int main(){
    //int x;
    using shutz=std::string;
    int x=20;
    int age=15;
    double hieght=100.244;
    shutz name;
    shutz name2;




    std::cout<<"input your name:";
    std::cin>>name;

     std::cout<<"input your full name:";
     std::getline(std::cin >> std::ws,name2);
    std::cout<<"name2 hello"<< name2;
    std::cout<<"hello "<< name << "you are"<<age<<"years old"<<'\n';
    std:: cout<<"and your hieght is"<<hieght<<std::endl;
    std:: cout<< second::x;
}