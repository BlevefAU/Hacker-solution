// Complete the checkMagazine function below.
   static void checkMagazine(string[] magazine, string[] note) {
       bool check = false;
       int count_t = 0;
             Dictionary<string, int> dict = magazine.GroupBy(item => item).ToDictionary(item => item.Key, item => item.Count());
       Dictionary<string, int> dict2 = note.GroupBy(item => item).ToDictionary(item => item.Key, item => item.Count());
       if(magazine.Count() < note.Count() || magazine.Count() == 0){
            Console.WriteLine("No");
           return;
       }
       if(note.Count() == 0){
           Console.WriteLine("Yes");
           return;
       }
       if(magazine.Count() == note.Count()){
           Array.Sort(magazine);
           Array.Sort(note);
           if(magazine.SequenceEqual(note)){
                           Console.WriteLine("Yes");

               return;
           }
       }
       foreach(var item in dict2){

           foreach(var tool in dict){

               if(item.Key == tool.Key && item.Value > tool.Value){
                   Console.WriteLine("No");
                   return;
               }
               if(item.Key != tool.Key){
                   count_t++;
                   if(dict.Count == count_t){
                       check = true;
                   }
                if(check == true){
                      Console.WriteLine("No");
                      return;
                    }
               }
           }

           count_t = 0;
       }
       Console.WriteLine("Yes");
   }
