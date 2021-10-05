#include <iostream>
using namespace std;
void findPostOrderTraversalRec(int pre[], int n, int lowerLimit, int
upperLimit, int& index){
   if (index == n)
      return;
   if (pre[index] < lowerLimit || pre[index] > upperLimit)
      return;
   int currNode = pre[index];
   index++;
   findPostOrderTraversalRec(pre, n, lowerLimit, currNode, index);
   findPostOrderTraversalRec(pre, n, currNode, upperLimit, index);
   cout<<currNode<<" ";
}
void findPostOrderTraversalFromPreOrder(int pre[], int n){
   int index = 0;
   findPostOrderTraversalRec(pre, n, -1000, 1000, index);
}
int main(){
   int pre[] = { 5, 2, 4, 7, 12 };
   int n = sizeof(pre) / sizeof(pre[0]);
   cout<<"PreOrder Traversal : \t";
   for(int i = 0; i < n ; i++)
      cout<<pre[i]<<" ";
   cout<<endl<<"Post Order Traversal : \t";
   findPostOrderTraversalFromPreOrder(pre, n);
   return 0;
}