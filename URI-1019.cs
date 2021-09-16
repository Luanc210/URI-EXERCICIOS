using System; 

class URI {

    static void Main(string[] args) { 

      int N,H,M,S;

            N = Convert.ToInt32(Console.ReadLine());

            H = N / 3600;
            M = (N % 3600)/60;
            S = (N % 3600)%60;

            Console.Write("{0}:{1}:{2}\n", H, M, S);
      
    }

}
