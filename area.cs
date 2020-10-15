// Q-10 Write a C# Program to find out the area of the triangle , square, and rectangle using method overloading.

using System;

namespace Lab_18_09_2020
{
    class area
    {
        double triangle(int b, int h)
        {
            double a = 0.5 * b * h;
            return a;
        }
        double rectangle(int l, int b)
        {
            double a = l * b;
            return a;
        }
        double square(int s)
        {
            double a = s * s;
            return a;
        }
        static void Main()
        {
            int b, h;
            area A = new area();
            while(true)
            {
                Console.WriteLine("========= Find Area =======");
                Console.WriteLine(" 1. Triangle\n 2. Rectangle\n 3. Square\n 4. Exit");
                Console.Write("Enter Your Choice:  ");
                int ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        Console.WriteLine("Enter dimensions of Triangle:");
                        Console.Write("Base:  ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Console.Write("Height:  ");
                        h = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("Area: " + A.triangle(b, h));
                        break;
                    case 2:
                        Console.WriteLine("Enter dimensions of rectangle:");
                        Console.Write("Length: ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Console.Write("Breadth: ");
                        h = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("Area: " + A.rectangle(b, h));
                        break;
                    case 3:
                        Console.WriteLine("Enter the dimensions of square:");
                        Console.Write("Side:  ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("Area: " + A.square(b));
                        break;
                    case 4:
                        Console.WriteLine("Exited!!!");
                        goto ex;
                        break;
                }
            }
        ex:
            Console.ReadKey();
        }
    }
}
