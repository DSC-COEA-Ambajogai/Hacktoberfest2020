//Q-1 Write a program to check whether given number is in Fibonacci series or not.

using System;

namespace Lab_18_09_2020
{
    class fibonacci
    {
        static void Main(string[] args)
        {
            long n1 = 0, n2 = 1, n3 = 0, temp = 0;
            int f = 0;
            Console.Write("Enter Number to Check: ");
            long n = Convert.ToInt32(Console.ReadLine());
            temp = n;
            for (long i = 0; i <= n; i++)
            {
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
                if (n == n3)
                    f = 1;
            }
            if (f == 1)
                Console.WriteLine(temp + " is in Fibonacci Series");
            else
                Console.WriteLine(temp + " is not in Fibonacci Series");
            Console.ReadKey();
        }
    }
}