// binary tree
// left child, right child, sum
// consider all to only store operation
// so every step of operation store in the array


// Complete the arrayManipulation function below.
static long arrayManipulation(int n, int[][] queries) {
    long x=0;
    long max =0;
    long[] arr = new long[n+1];
    for(int i=0;i< queries.Count();i++){
        arr[queries[i][0]] += queries[i][2];
        if((queries[i][1] +1)<= n){
            arr[queries[i][1] + 1] -= queries[i][2];
        }
    }
for(int i=1;i<=n;i++)
{
   x=x+arr[i];
   if(max<x){
    max=x;
   }
}
return max;
}
