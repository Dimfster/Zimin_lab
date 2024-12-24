namespace test
{
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
