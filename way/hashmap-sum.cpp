// Complete the whatFlavors function below.
static void whatFlavors(int[] cost, int money) {
        var dict = new Dictionary<int, int>();
        for (int i = 0; i < cost.Length; i++)
        {
            int aim = money - cost[i];
            if(dict.ContainsValue(aim) && dict.FirstOrDefault(x => x.Value == aim).Key != i){
                if(i< dict.FirstOrDefault(x => x.Value == aim).Key){
                                      Console.WriteLine((i+1) + " " +(dict.FirstOrDefault(x => x.Value == aim).Key + 1));

                } else{
                                      Console.WriteLine((dict.FirstOrDefault(x => x.Value == aim).Key+1) + " " + (i+1));

                }
            } else{
                  if(!dict.ContainsValue(cost[i])){
                    dict.Add(i, cost[i]);
                  }
            }
        }

}
