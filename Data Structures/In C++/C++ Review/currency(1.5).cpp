//自有数据类型
#include<iostream>
using namespace std;
enum signType{plus,minus};
class currency
{
    public:
    currency(signType plus,unsigned long thedollars=0,unsigned int thecents=0);
    void setvalue(signType,unsigned long,unsigned int);
    void setvalue(double);
    private:
    signType sign;
    unsigned long dollars;
    unsigned int cents;
};