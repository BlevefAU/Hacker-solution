
   static int alternatingCharacters(string s) {
       int count = 0;
       char[] arr = s.ToCharArray();
       for(int i = 0; i< arr.Count();i++){
           if(i == 0){
               if(arr[i] == arr[i+1]){
                   count++;
               }
           } else if(i == arr.Count() - 1){
                if(arr[i] == arr[i-1]){
                  count++;
               }
           } else{
               if(arr[i] == arr[i-1]){
                                     count++;
               }
               if(arr[i] == arr[i+1]){
                   count++;
               }
           }
       }
       return count/2;
   }
