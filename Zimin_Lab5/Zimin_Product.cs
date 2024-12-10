using System.Xml.Serialization;


namespace Zimin_Lab5
{

    [Serializable]
    public class ZiminProduct
    {
        private static uint MaxId = 1;
        private const int MAX_PRICE = 10000000;

        public string Name { get; set; } = string.Empty;

        public string Manufacturer { get; set; } = string.Empty;

        public float Price { get; set; } = 0;

        public uint Id { get; set; }

        public ZiminProduct()
        {
            Id = MaxId++;
            //Console.WriteLine("Создал продукт :)");
        }

        public virtual void WriteInfo()
        {
            Console.WriteLine("Введите название продукта:");
            Name = Console.ReadLine()?.Trim() ?? string.Empty;

            Console.WriteLine("Введите производителя продукта:");
            Manufacturer = Console.ReadLine()?.Trim() ?? string.Empty;

            Console.WriteLine("Введите цену продукта:");
            Price = Utils.GetCorrectNumber(0, MAX_PRICE);
        }

        public virtual void PrintInfo()
        {
            Console.WriteLine($"\nТовар ID: {Id}");
            Console.WriteLine($"Название: {Name}");
            Console.WriteLine($"Производитель: {Manufacturer}");
            Console.WriteLine($"Цена: {Price}");
        }

        //~ZiminProduct()
        //{
        //    Console.WriteLine("Удалил продукт :)");
        //}
    }
}