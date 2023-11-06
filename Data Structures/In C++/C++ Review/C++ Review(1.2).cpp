//模板函数
#include<iostream>
using namespace std;
template<class Ta,class Tb,class Tc>
Ta abc(const Ta& a,const Tb& b,const Tc& c)//返回类型为Ta
{
    return a+b*c; 
}
int main()
{
    int a;//决定了Ta的类型
    double b,c;
    cin>>a>>b>>c;
    cout<<abc(a,b,c);
}
