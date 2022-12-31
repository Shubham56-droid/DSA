#include<bits/stdc++.h>
using namespace std;

bool searchElement(vector<vector<int>> matrix,int target)
{
    if(matrix.size()==0)
        return false;  
    int r=matrix.size();  
    int c=matrix[0].size(); 
    int r1=0,r2=r-1,mid;  
    //performing binary search for the row
    while(r1<r2)
    {
        mid=r1+(r2-r1)/2;
        if(target>matrix[mid][c-1])r1=mid+1;
        else if(target<matrix[mid][0])r2=mid-1;
        else {r1=mid;break;}
    }
    int c1=0,c2=c-1;
    //performing binary search in the row to find the element
    while(c1<=c2)
    {
        mid=c1+(c2-c1)/2;
        if(target>matrix[r1][mid])c1=mid+1;
        else if(target<matrix[r1][mid])c2=mid-1;
        else return true;
    }
    return false;
}

int main(){
    vector<vector<int>> matrix ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int element = 12; 
    bool solution = searchElement(matrix,element);
    //solution will be one if the element is present in the matrix else 0
    cout<<solution<<endl;
    return 0;
}

