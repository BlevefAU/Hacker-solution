    // Complete the maximumToys function below.
    static int maximumToys(int[] prices, int k) {
        Array.Sort(prices);
        int count = 0;
        int times = 0;
        for(int i=0; i < prices.Count(); i ++){
            if(count> k){
                break;
            }
            count += prices[i];
            times++;
        }
        return times - 1;
    }
