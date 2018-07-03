static void Main(string[] args) {
    string[] nd = Console.ReadLine().Split(' ');

    int n = Convert.ToInt32(nd[0]);

    int d = Convert.ToInt32(nd[1]);

    int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), aTemp => Convert.ToInt32(aTemp));

      d = d % a.Length;
     int[] buffer = new int[d];
     Array.Copy(a, buffer, d);

    Array.Copy(a, d, a, 0, a.Length - d);
    Array.Copy(buffer, 0, a, a.Length - d, d);
    Console.WriteLine(String.Join(" ", a));
}
