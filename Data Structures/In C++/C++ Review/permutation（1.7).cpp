//递归排序
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;
template<class T>
void permutation(T list[],int k,int m)
{
    if(k==m){
        copy(list,list+m+1,ostream_iterator<T>(cout," "));
        cout<<endl;
    }
    else
    for(int i=k;i<=m;i++){
        std::swap(list[i],list[k]);
        permutation(list,k+1,m);
        std::swap(list[i],list[k]);
    }
}
//样例
int main()
{
    char list[4]={'a','b','c','d'};
    int k=1,m=3;
    permutation(list,k,m);
}