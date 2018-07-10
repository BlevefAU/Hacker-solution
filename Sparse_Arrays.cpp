// Complete the matchingStrings function below.
 static int[] matchingStrings(string[] strings, string[] queries) {
     List<int> list = new List<int>();
     var count_times = 0;
     for (var num=0; num < queries.Count(); num++){
      for(var i = 0; i < strings.Count(); i ++){
       if(queries[num] == strings[i]){
           count_times ++ ;
       }
      }
         list.Add(count_times);
         count_times = 0;
     }
     return list.ToArray();

 }
