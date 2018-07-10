static string isValid(string s) {
char[] arr= s.ToCharArray();
     int count = 0;
     int min_t = 0;
     int max_t = 0;
      Dictionary<char, int> dict = arr.GroupBy(item => item).ToDictionary(item => item.Key, item => item.Count());
    var minkey = dict.Keys.Select(x => new { x, y = dict[x] }).OrderBy(x => x.y).First().x;
     var maxkey = dict.Keys.Select(x => new { x, y = dict[x] }).OrderBy(x => x.y).Last().x;

     foreach(var item in dict){
         if(item.Value == dict[minkey]){
             min_t ++;
         }
         if(item.Value == dict[maxkey]){
             max_t++;
         }
     }
     if(min_t == max_t && min_t == dict.Count){
         return "YES";
     }
     if(dict[minkey] == 1 && min_t == 1 && max_t == dict.Count - 1){
         return "YES";
     } else if(dict[maxkey] == 1 && max_t == 1){
         return "YES";
     }else if(dict[maxkey] - dict[minkey] > 1){
         return "NO";
     } else if(min_t > 1 || max_t > 1){
         return "NO";
     } else{
         return "YES";
     }
 }
