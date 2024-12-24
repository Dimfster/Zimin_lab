namespace Zimin_Lab6
{
    public class Electronics : ZiminProduct
    {
        public string DeviceType { get; set; } = "";

        public bool HasBattery { get; set; } = false;

        public double Weight { get; set; } = 0;

        private static readonly double MaxWeight = 100;

        public Electronics() {}

        public Electronics(ZiminProduct product)
        {
            this.Name = product.Name;
            this.Manufacturer = product.Manufacturer;
            this.Price = product.Price;
            this.Id = product.Id;
        }

        public override List<string> GetParameters()
        {
            List<string> parameters = new List<string>() 
            { Name, Manufacturer, Price.ToString("F2"), DeviceType, HasBattery.ToString(), Weight.ToString("F2") };
            return parameters;
        }
    }
}
