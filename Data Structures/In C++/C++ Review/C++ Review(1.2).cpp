//模板函数
#include<iostream>
using namespace std;
template<class Ta,class Tb,class Tc>
Ta abc(const Ta& a,const Tb& b,const Tc& c)
{
    return a+b*c; 
}
int main()
{
    int a;
    double b,c;
    cin>>a>>b>>c;
    cout<<abc(a,b,c);
}
