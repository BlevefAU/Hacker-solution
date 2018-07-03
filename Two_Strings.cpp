// Complete the twoStrings function below.
static string twoStrings(string s1, string s2) {
    bool check =false;
    char[] alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz".ToCharArray();
    for(int i = 0; i < alpha.Count(); i++){
        // Console.WriteLine(alpha[i]);
        if(s1.Contains(alpha[i]) && s2.Contains(alpha[i])){
            check = true;
            break;
        }
    }
   if(check == false){
      return "NO";
   }  else{
      return "YES";
   }
}
