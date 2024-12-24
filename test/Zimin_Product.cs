namespace test
{
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
            //Id = MaxId++;
            //Console.WriteLine("Создал продукт :)");
        }
        public static void ResetMaxId(List<ZiminProduct> data)
        {
            MaxId = data.Max(p => p.Id) + 1;
        }

        public virtual void PrintInfo()
        {
            Console.WriteLine($"\nТовар ID: {Id}");
            Console.WriteLine($"Название: {Name}");
            Console.WriteLine($"Производитель: {Manufacturer}");
            Console.WriteLine($"Цена: {Price}");
        }
    }
}