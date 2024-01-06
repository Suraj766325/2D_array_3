// Q1) Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.You must do it in place.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>> v={{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};
int m=v.size(),n=v[0].size(),i,j;
bool row=false;
bool column=false;
//check 1st row contains zero
for(j=0;j<n;j++)
{
    if(v[0][j]==0)
    row=true;
}
//check 1st column contains zero
for(i=0;i<m;i++)
{
    if(v[i][0]==0)
    column=true;
}
//check row and column containing zero
for(i=1;i<m;i++)
{
    for(j=1;j<n;j++)
    {
        if(v[i][j]==0)
        {
            v[0][j]=0;
            v[i][0]=0;
        }
    }
}
//row
for(i=1;i<m;i++)
{
    if(v[i][0]==0)
    {
        for(j=1;j<n;j++)
        v[i][j]=0;
    }
}
//column
for(j=1;j<n;j++)
{
    if(v[0][j]==0)
    {
        for(i=1;i<m;i++)
        v[i][j]=0;
    }
}
//first row
if(row==true)
{
    for(j=0;j<n;j++)
    v[0][j]=0;
}
//first column
if(column==true)
{
    for(i=0;i<m;i++)
    v[i][0]=0;
}
//print
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    cout<<v[i][j]<<" ";
cout<<endl;
}
}
