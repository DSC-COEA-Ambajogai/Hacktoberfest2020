//Q-9 Design a class to represent a bank account. Include the following members:
//    Data Members:-Name of the depositor, Account Number, Type of Account, Balance amount in the account 
//    Methods : To assign initial values, To deposit an amount, To withdraw an amount after checking balance, To display name and the balance. 
//    Write a C# program to demonstrate the working of the various class members.

using System;

namespace Lab_18_09_2020
{
    class bank
    {
        string name;
        double acc_no;
        string acc_type;
        double balance;
        double amount;
        bank()
        {
            balance = 5000;
        }
        void get_data()
        {
            Console.Write("Enter your Name: ");
            name = Console.ReadLine();
            Console.Write("Enter your Account Number: ");
            string acc = Console.ReadLine();
            acc_no = Convert.ToDouble(acc);
            Console.Write("Enter your Account Type: ");
            acc_type = Console.ReadLine();
            Console.WriteLine("The Account has been added successfully.");
        }
        void deposit()
        {
            Console.WriteLine("Enter the amount you want to deposit: ");
            amount = Convert.ToDouble(Console.ReadLine());
            balance += amount;
            Console.WriteLine("\nThe amount has been deposited.");
            display();
            Console.WriteLine("Your new amount is " + balance);
        }
        void withdraw()
        {
            Console.WriteLine("Enter the amount you want to withdraw: ");
            amount = Convert.ToInt32(Console.ReadLine());
            if (balance > amount)
            {
                balance -= amount;
                Console.WriteLine("\nThe amount has been withdrawn.");
                display();
                Console.WriteLine("Your new amount is " + balance);
            }
            else
                Console.WriteLine("Oops!! Insufficient Balance");
        }
        void display()
        {
            Console.WriteLine("\nYour Details: ");
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Account Number: " + acc_no);
            Console.WriteLine("Account Type: " + acc_type);
        }
        static void Main()
        {
            bank b = new Lab_18_09_2020.bank();
            while (true)
            {
                Console.WriteLine("====== VIRTUAL BANK =======");
                Console.WriteLine("1. Add Account");
                Console.WriteLine("2. Deposit Amount");
                Console.WriteLine("3. Withdraw Amount"); 
                Console.Write("Enter Your Choice: ");
                int ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        b.get_data();
                        break;
                    case 2:
                        b.deposit(); 
                        break;
                    case 3:
                        b.withdraw(); 
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
