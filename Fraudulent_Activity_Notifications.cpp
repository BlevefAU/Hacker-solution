// Complete the activityNotifications function below.
    static int activityNotifications(int[] expenditure, int d) {
        int count = 0;
        double median = 0;
        int median_p = 0;
        int md = 0;
        int times = 0;
        int l_obj = 0;
        int[] arr = new int[d];
        int[] arr_c = new int[201];
        bool check = false;
        if(d%2 == 0){
           median_p = d/2 + 1;
        } else{
            median_p = (d-1)/2 + 1;
        }

        for(int num = 0; num < arr_c.Count(); num++){
            arr_c[num] = 0;
        }
        for(int i =0; i < expenditure.Count() - 1; i ++){
            if(i < d){
                arr[i] = expenditure[i];
            } else{
                if(check == false){
                    for(int num = 0; num < arr.Count(); num++){
                      arr_c[arr[num]] += 1;
                    }
                    check = true;
                }
                for(int obj = 0; obj < arr_c.Count(); obj++){

                    md += arr_c[obj];
                    if(md >= median_p){
                        if(d%2==0){
                            if(median_p - (md-arr_c[obj]) == 1){
                                median = ((double)obj + (double)l_obj)/2;
                            } else{
                                median = obj;
                            }
                        } else{
                            median = obj;
                        }
                        break;
                    } else{
                        if(arr_c[obj] != 0){
                            l_obj = obj;
                        }
                    }

                }
                if(2* median <= expenditure[i]){
                    count++;
                }
                md = 0;
                arr_c[arr[times]] -= 1;
                arr[times] = expenditure[i];
                arr_c[arr[times]] += 1;
                times ++;
                if(times == d ){
                    times = 0;
                }

            }

        }
        return count;

    }
