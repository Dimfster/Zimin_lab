using System;
using System.Xml.Serialization;

namespace Zimin_Lab5
{
    [Serializable]
    public class Electronics : ZiminProduct
    {
        public string DeviceType { get; set; } = "";

        public bool HasBattery { get; set; } = false;

        public double Weight { get; set; } = 0;

        private static readonly double MaxWeight = 100;

        public Electronics()
        {
            //Console.WriteLine("Создал Электронику :)");
        }

        //~Electronics()
        //{
        //    Console.WriteLine("Удалил Электронику :)");
        //}

        public override void WriteInfo()
        {
            base.WriteInfo();

            Console.WriteLine("Введите категорию электроники: ");
            DeviceType = Console.ReadLine()?.Trim() ?? string.Empty;

            Console.WriteLine("Есть ли батарея у устройства? (1 - да, 0 - нет): ");
            HasBattery = Utils.GetCorrectNumber(0, 1) == 1;

            Console.WriteLine("Введите вес: ");
            Weight = Utils.GetCorrectNumber(1.0, MaxWeight);
        }

        public override void PrintInfo()
        {
            base.PrintInfo();
            string batteryStatus = HasBattery ? "есть" : "нет";
            Console.WriteLine($"Категория: {DeviceType}");
            Console.WriteLine($"Наличие батареи: {batteryStatus}");
            Console.WriteLine($"Вес: {Weight}");
        }
    }
}
