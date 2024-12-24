using System.Xml.Serialization;


namespace CSharp
{

    [Serializable]
    public class ZiminProduct
    {
        private static uint MaxId = 1;
        private const int MAX_PRICE = 10000000;

        public string Name { get; set; } = "Новый продукт";

        public string Manufacturer { get; set; } = "Неизвестен";

        public float Price { get; set; } = 0;

        public uint Id { get; set; }

        public ZiminProduct() { }
        public static void ResetMaxId(List<ZiminProduct> data)
        {
            MaxId = data.Max(p => p.Id) + 1;
        }

        public ZiminProduct(string name, string manufacturer, float price)
        {
            Id = ++MaxId;
            Name = name;
            Manufacturer = manufacturer;
            Price = price;
        }

    }
}