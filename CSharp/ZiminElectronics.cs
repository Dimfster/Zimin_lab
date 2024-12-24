using System;
using System.Xml.Serialization;

namespace CSharp
{
    [Serializable]
    public class Electronics : ZiminProduct
    {
        public string DeviceType { get; set; } = "";

        public bool HasBattery { get; set; } = false;

        public double Weight { get; set; } = 0;

        private static double MaxWeight = 100;

        public Electronics(string deviceType, bool hasBattery, double weight)
            : base("Новая электроника", "Неизвестен", 0) // Вызов конструктора базового класса
        {
            DeviceType = deviceType;
            HasBattery = hasBattery;
            Weight = weight;
        }
    }     
}
