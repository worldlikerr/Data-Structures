//动态分配的二维数组
#include<iostream>
using namespace std;
template <class T>
void make2darray(T ** &x,int numberofRows,int *rowsize)
{
    x=new  T* [numberofRows];
    for(int i=1;i<=numberofRows;i++){
        x[i]=new T[rowsize[i]];
    }
}
template <class T>
void delete2darray(T ** &x,int numberofRows)
{
    for(int i=1;i<=numberofRows;i++) delete []x[i];
    delete []x;
    x=NULL;
}
int main()
{
    int **X,r=4,c[4];//样例数据
    for(int i=1;i<=r;i++){
        cin>>c[i];
    }
    try{make2darray(X,r,c);}
    catch(bad_alloc){
        cerr<<"Could not creat X"<<endl;
        exit(1);
    }
    delete2darray(X,r);
    return 0;
}