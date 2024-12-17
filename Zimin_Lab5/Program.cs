using System;
using System.Collections.Generic;

namespace Zimin_Lab5
{
    class Program
    {
        static void Main()
        {
            ZiminManager m = new ZiminManager();

            while (true)
            {
                //Console.Clear();
                Console.WriteLine("Выберите действие:");
                Console.WriteLine("1. Ввести данные о товаре");
                Console.WriteLine("2. Ввести данные о электронике");
                Console.WriteLine("3. Вывести список товаров");
                Console.WriteLine("4. Очистить список товаров");
                Console.WriteLine("5. Сохранить список товаров");
                Console.WriteLine("6. Загрузить список товаров из файла");
                Console.WriteLine("0. Выход");

                int choice = Utils.GetCorrectNumber(0, 6);

                switch (choice)
                {
                    case 0:
                        return;
                    case 1:
                        m.CreateZiminProduct();
                        break;
                    case 2:
                        m.CreateElectronics();
                        break;
                    case 3:
                        m.ShowZiminProducts();
                        break;
                    case 4:
                        m.ClearZiminProducts();
                        break;
                    case 5:
                        m.SaveZiminProducts();
                        break;
                    case 6:
                        m.LoadZiminProducts();
                        break;
                    default:
                        break;
                }
                Console.WriteLine("Нажмите любую клавишу для продолжения...");
                Console.ReadKey();
            }
        }
    }

}