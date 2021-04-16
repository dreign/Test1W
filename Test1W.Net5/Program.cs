using System;
using System.Diagnostics;

namespace Test1W.Net5
{
    class Program
    {
        static void Main(string[] args)
        {
            Stopwatch watch = new Stopwatch();
            Console.WriteLine("开始计时");
            watch.Start();
            long total = 0;
            for (int i = 0; i < 10000; i++)
            {
                total += NarcissisticNumber();
            }
            watch.Stop();
            string time = watch.ElapsedMilliseconds.ToString();
            Console.WriteLine($"C#执行时间：{time}ms，水仙花数：{total}");
            Console.ReadKey();
        }

        public static int NarcissisticNumber()
        {
            int count = 0;
            int ge, shi, bai;
            for (int n = 100; n < 100000; n++)
            {
                ge = n % 10;
                shi = (n - ge) / 10 % 10;
                bai = (int)(n / 100);
                if (ge * ge * ge + shi * shi * shi + bai * bai * bai == n)
                {
                    count++;
                    //Console.WriteLine(n.ToString());
                }
            }
            return count;
        }
    }
}
