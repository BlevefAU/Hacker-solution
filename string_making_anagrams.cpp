static int makeAnagram(string a, string b) {
    string compare = "";
    int count = 0;
    List<string> list = new List<string>();
    for(int i = 0; i < a.Length; i ++){
      if(list.Contains(a.Substring(i, 1)) != true){
              if(Regex.Matches(b, a.Substring(i, 1)).Count > Regex.Matches(a, a.Substring(i, 1)).Count){
                    count += Regex.Matches(a, a.Substring(i, 1)).Count;
         } else{
                     count += Regex.Matches(b, a.Substring(i, 1)).Count;

         }
         Console.WriteLine( a.Substring(i, 1));
          list.Add(a.Substring(i, 1));
      }
    }


    // return ((a.Length + b.Length) - list.ToArray().Max() * 2);
    return (a.Length + b.Length) - count *2;

}
