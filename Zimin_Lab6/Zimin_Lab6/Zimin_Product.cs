namespace  Zimin_Lab6
{
    public class ZiminProduct
    {
        private static uint MaxId = 1;
        private const int MAX_PRICE = 10000000;

        public string Name { get; set; } = string.Empty;

        public string Manufacturer { get; set; } = string.Empty;

        public float Price { get; set; } = 0;

        public uint Id { get; set; }

        public ZiminProduct() {}
        public ZiminProduct(ZiminProduct product) 
        { 
            this.Name = product.Name;
            this.Manufacturer = product.Manufacturer;
            this.Price = product.Price;
            this.Id = product.Id;
        }
        public static void ResetMaxId(List<ZiminProduct> data)
        {
            MaxId = data.Max(p => p.Id) + 1;
        }

        public virtual List<string> GetParameters()
        {
            List<string> parameters = new List<string>() { Name, Manufacturer, Price.ToString("F2"), "-", "-", "-"};
            return parameters;
        }
    }
}