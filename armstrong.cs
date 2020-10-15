using System;

namespace Lab_18_09_2020
{
    class armstrong
    {
		static void Main(string[] agrs)
		{
			int r, s = 0, n1 = 0, n2 = 0, temp = 0, temp1 = 0;
			Console.Write("Enter a Number: ");
			int n = Convert.ToInt32(Console.ReadLine());
			n1 = n2 = n;
			temp1 = n;
			while (n > 0)
			{
				n = n / 10;
				temp++;
			}
			while (n1 != 0)
			{
				r = n1 % 10;
				s = s + (int)Math.Pow(r, temp);
				n1 = n1 / 10;  
			}
			if (s == temp1)
				Console.WriteLine(n2 + " is an Armstrong Number");
			else
				Console.WriteLine(n2 + " is not an Armstrong Number");
			Console.ReadKey();
		}
	}
}
