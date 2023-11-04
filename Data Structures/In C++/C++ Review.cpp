//1.3异常
#include<iostream>
#include<string>
using namespace std;
int abc(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0)
    throw "false";
    return a+b*c;
}
int main()
{
    try{cout<<abc(2,0,4)<<endl;}
    catch(const char* e)
    /*在你的代码中，你抛出了一个字符指针异常 throw "false"，但是在catch块中使用了 catch(char* e) 来捕获异常。
    这个匹配的是字符指针类型的异常，但是你的异常是一个字符常量指针。因此，你可以使用 catch(const char* e) 来捕获字符常量指针异常。*/
{
        cout<<"不对啦"<<endl;
        cout<<e<<endl;
        return 1;
        }
        return 0;
}
/*int abc(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0)
    throw 1;
    return a+b*c;
}
int main()
{
    try{cout<<abc(2,0,4)<<endl;}
    catch(int e){
        cout<<"不对啦"<<endl;
        cout<<e<<endl;
        return 1;
        }
        return 0;
}*/