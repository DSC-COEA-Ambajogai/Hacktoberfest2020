//Q-6 Write a C# Program to implement all matrix operation like addition, multiplication, Transpose and sum of diagonal of any resultant matrix.

using System;
using System.IO;

namespace Lab_11_09_2020
{
    class Matrix
    {
        int[,] arr1 = new int[2, 2];
        int[,] arr2 = new int[2, 2];

        public static void Main(string[] agrs)
        {
            Matrix obj = new Matrix();
            while (true)
            {
                Console.WriteLine("==== Matrix Operations ====");
                Console.WriteLine(" 1. Addition of Matrix");
                Console.WriteLine(" 2. Subtraction of Matrix");
                Console.WriteLine(" 3. Multiplication of Matrix");
                Console.WriteLine(" 4. Transpose of Matrix");
                Console.WriteLine(" 5. Exit");
                Console.Write(" Enter Your Choice:- ");
                int ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        obj.input();
                        obj.addmat();
                        break;
                    case 2:
                        obj.input();
                        obj.submat();
                        break;
                    case 3:
                        obj.input();
                        obj.mulmat();
                        break;
                    case 4:
                        obj.transposemat();
                        break;
                    case 5:
                        Console.Write("Exited!!");
                        goto end;
                        break;
                    default:
                        Console.WriteLine("Wrong Input");
                        break;
                }
            }
            end:
            Console.ReadKey();
        }

        void input()
        {
            Console.WriteLine(" Enter First Matrix:");
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    arr1[i, j] = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(" Enter Second Matrix:");
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    arr2[i, j] = Convert.ToInt32(Console.ReadLine());
        }
        void addmat()
        {
            int[,] arr3 = new int[2, 2];
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    arr3[i, j] = arr1[i, j] + arr2[i, j];            
            Console.WriteLine("\nAddition of Matrix:");
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                    Console.Write(arr3[i, j] + " ");
                Console.WriteLine(" ");
            }
        }
        void submat()
        {
            int[,] arr3 = new int[2, 2];
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    arr3[i, j] = arr1[i, j] - arr2[i, j];
            Console.WriteLine("\nSubtraction of Matrix:");
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                    Console.Write(arr3[i, j] + " ");
                Console.WriteLine(" ");
            }
        }
        void mulmat()
        {
            int[,] arr3 = new int[2, 2];
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    arr3[i, j] = arr1[i, 0] * arr2[0, j] + arr1[i, 1] * arr2[1, j];
            Console.WriteLine("\nMultiplication of Matrix:");
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                    Console.Write(arr3[i, j] + " ");
                Console.WriteLine(" ");
            }
        }

        void transposemat()
        {
            int[,] arr3 = new int[2, 2];
            Console.WriteLine(" Enter Matrix:");
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    arr1[i, j] = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    arr3[i, j] = arr1[j, i];
            Console.WriteLine("\nTranpose of Matrix1:");
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                    Console.Write(arr3[i, j] + " ");
                Console.WriteLine(" ");
            }
        }
    }
}
