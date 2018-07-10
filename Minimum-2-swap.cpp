// Complete the minimumSwaps function below.
 static int minimumSwaps(int[] arr) {
     int count=0;
     for(int i=0;i<arr.Count();i++){
         if(i+1!=arr[i]){
             count++;
             int t=i;
             while(arr[t]!=i+1){
                 t++;
             }
             int temp=arr[t];
             arr[t]=arr[i];
             arr[i]=temp;
         }
     }
     return count;
 }
