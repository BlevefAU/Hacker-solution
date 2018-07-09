// Complete the sherlockAndAnagrams function below.
  static int sherlockAndAnagrams(string s) {
      int count = 0;
      List<string> list = new List<string>();
      for(int i=0; i< s.Length;i++){
          for(int num=1;num<s.Length - i + 1;num++){
              // Console.WriteLine(s.Substring(i,num));
              list.Add(String.Concat(s.Substring(i,num).OrderBy(c => c)));
          }
      }

      Dictionary<string, int> dict = list.ToArray().GroupBy(item => item).ToDictionary(item => item.Key, item => item.Count());
      foreach(var item in dict){
          if(item.Value > 1){
              for(int i =1; i < item.Value; i++){
                  count += item.Value - i;
              }
          }
      }
      return count;
  }
