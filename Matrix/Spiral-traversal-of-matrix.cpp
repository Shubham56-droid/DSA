#include<bits/stdc++.h>
using namespace std;

vector<int> spiralTraversal(vector<vector<int> > matrix, int row, int col) 
{
    int r=0,c=0;
    vector<int> answer;
    while(r<row && c<col)
    {
        for(int i=c;i<col;i++)
        answer.push_back(matrix[r][i]);
        for(int i=r+1;i<row;i++)
        answer.push_back(matrix[i][col-1]);
        if(row-1!=r)
        for(int i=col-2;i>=c;i--)
        answer.push_back(matrix[row-1][i]);
        if(col-1!=c)
        for(int i=row-2;i>r;i--)
        answer.push_back(matrix[i][c]);
        r++;
        c++;
        row--;
        col--;
    }
    return answer;
}

int main(){
    vector<vector<int>> matrix ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    vector<int> solution = spiralTraversal(matrix,4,4);
    for(int i=0;i<solution.size();++i)
    {
        cout<<solution[i]<<" "; 
    }
    return 0;
}

