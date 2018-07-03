// Complete the hourglassSum function below.
static int hourglassSum(int[][] arr) {
    var line = 1;
    List<int> list = new List<int>();

    for (var x=0; x<4; x++){
     for(var y=0;y<4; y++){

        list.Add(arr[x][y] + arr[x][y + 1] + arr[x][y + 2] + arr[x+1][y+1] + arr[x+2][y]+ arr[x +2][y + 1] + arr[x + 2][y + 2]);
     }
    }
    int[] array = list.ToArray();

    return array.Max();

}
