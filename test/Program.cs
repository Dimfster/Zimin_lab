using System.Text;
using System.Runtime.InteropServices;

namespace test
{
    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
    struct CSharpProductStruct
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 100)]
        public string name;
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 100)]
        public string manufacturer;
        [MarshalAs(UnmanagedType.R4)]
        public float price;
        [MarshalAs(UnmanagedType.U4)]
        public int id;
    };

    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
    struct CSharpZiminProductOrElectronicsStruct
    {
        [MarshalAs(UnmanagedType.I1)]
        public bool is_electronics;

        public CSharpProductStruct product_data;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 100)]
        public string device_type;
        [MarshalAs(UnmanagedType.I1)]
        public bool has_battery;
        [MarshalAs(UnmanagedType.R8)]
        public double weight;
    }

    internal class Program
    {
        [DllImport("Dll.dll", CharSet = CharSet.Ansi)]
        static extern int GetProductsSize(StringBuilder filename);

        [DllImport("Dll.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        static extern void GetProducts(StringBuilder filename, [Out] CSharpZiminProductOrElectronicsStruct[] array);

        static void Main(string[] args)
        {
            Console.WriteLine("test!");
            string directory_path = "C:\\Users\\zimin\\Desktop\\Зимин Дмитрий\\5 семестр\\ООПП\\Zimin_lab\\Zimin_lab\\Zimin_lab\\Saves\\Пример.txt";
            var sb = new StringBuilder();
            sb.Append(directory_path);
            int size = GetProductsSize(sb);
            Console.WriteLine(size);
            CSharpZiminProductOrElectronicsStruct[] array = new CSharpZiminProductOrElectronicsStruct[size];
            GetProducts(sb, array);

            List<ZiminProduct> list = [];
            foreach (var item in array)
            {
                if (!item.is_electronics)
                {
                    ZiminProduct e = new()
                    {
                        Name = item.product_data.name,
                        Manufacturer = item.product_data.manufacturer,
                        Price = item.product_data.price,
                        Id = (uint)item.product_data.id
                    };
                    list.Add(e);
                }
                else
                {
                    Electronics d = new()
                    {
                        Name = item.product_data.name,
                        Manufacturer = item.product_data.manufacturer,
                        Price = item.product_data.price,
                        Id = (uint)item.product_data.id,
                        DeviceType = item.device_type,
                        HasBattery = item.has_battery,
                        Weight = item.weight
                    };
                    list.Add(d);
                }
            }

            foreach (var obj in list)
            {
                obj.PrintInfo();
            }
        }
    }
}
