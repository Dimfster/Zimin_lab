using System.Runtime.InteropServices;
using System.Text;

namespace Zimin_Lab6
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

        public CSharpProductStruct productData;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 100)]
        public string device_type;
        [MarshalAs(UnmanagedType.I1)]
        public bool has_battery;
        [MarshalAs(UnmanagedType.R8)]
        public double weight;
    }

    public class ZiminManager
    {
        [DllImport("Dll.dll", CharSet = CharSet.Ansi)]
        static extern int GetProductsSize(StringBuilder filename);

        [DllImport("Dll.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        static extern void GetProducts(StringBuilder filename, [Out] CSharpZiminProductOrElectronicsStruct[] array);
        public List<ZiminProduct> Products { get; set; } = new List<ZiminProduct>();

        [DllImport("Dll.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        static extern void SaveProducts(StringBuilder filename, int size, CSharpZiminProductOrElectronicsStruct[] array);



        public void CreateZiminProduct()
        {
            var product = new ZiminProduct();
            Products.Add(product);
        }

        public void CreateElectronics()
        {
            var electronics = new Electronics();
            Products.Add(electronics);
        }

        public void ClearZiminProducts()
        {
            Products.Clear();
        }

        public void DeleteProduct(int index)
        {
            Products.RemoveAt(index);
        }

        public void SaveZiminProducts(string directory_path)
        {
            int size = Products.Count;
            CSharpZiminProductOrElectronicsStruct[] array = new CSharpZiminProductOrElectronicsStruct[size];

            for (int i = 0; i < size; i++)
            {
                var product = Products[i];
                var product_data = new CSharpProductStruct
                {
                    id = (int)product.Id,
                    name = product.Name,
                    manufacturer = product.Manufacturer,
                    price = product.Price
                };
                if (product is Electronics electronics)
                {
                    array[i] = new CSharpZiminProductOrElectronicsStruct
                    {
                        is_electronics = true,
                        device_type = electronics.DeviceType,
                        has_battery = electronics.HasBattery,
                        weight = electronics.Weight,
                        productData = product_data
                    };
                }
                else
                {
                    array[i] = new CSharpZiminProductOrElectronicsStruct
                    {
                        is_electronics = false,
                        productData = product_data
                    };
                }
            }
            var sb = new StringBuilder(directory_path);
            SaveProducts(sb, size, array);
        }

        public void LoadZiminProducts(string directory_path)
        {
            var strbild = new StringBuilder();
            strbild.Append(directory_path);
            int size = GetProductsSize(strbild);
            CSharpZiminProductOrElectronicsStruct[] array = new CSharpZiminProductOrElectronicsStruct[size];
            GetProducts(strbild, array);

            foreach (var item in array)
            {
                if (!item.is_electronics)
                {
                    ZiminProduct product = new()
                    {
                        Name = item.productData.name,
                        Manufacturer = item.productData.manufacturer,
                        Price = item.productData.price,
                        Id = (uint)item.productData.id
                    };
                    Products.Add(product);
                }
                else
                {
                    Electronics electronics = new()
                    {
                        Name = item.productData.name,
                        Manufacturer = item.productData.manufacturer,
                        Price = item.productData.price,
                        Id = (uint)item.productData.id,
                        DeviceType = item.device_type,
                        HasBattery = item.has_battery,
                        Weight = item.weight
                    };
                    Products.Add(electronics);
                }
            }
        }
    }
}
