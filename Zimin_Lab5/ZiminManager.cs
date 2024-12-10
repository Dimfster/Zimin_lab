using System;
using System.Xml.Serialization;


namespace Zimin_Lab5
{
    public class ZiminManager
    {
        private List<ZiminProduct> Products { get; set; } = new List<ZiminProduct>();

        //public ZiminManager()
        //{
        //    Console.WriteLine("Менеджер пришёл на работу :)");
        //}

        //~ZiminManager()
        //{
        //    Console.WriteLine("Менеджер ушёл домой :)");
        //}

        public void CreateZiminProduct()
        {
            var product = new ZiminProduct();
            product.WriteInfo();
            Products.Add(product);
        }

        public void CreateElectronics()
        {
            var electronics = new Electronics();
            electronics.WriteInfo();
            Products.Add(electronics);
        }

        public void ShowZiminProducts()
        {
            if (Products.Count == 0)
            {
                Console.WriteLine("Товаров для просмотра нет!");
                return;
            }

            Console.WriteLine("Список имеющихся товаров:");
            foreach (var product in Products)
            {
                product.PrintInfo();
            }
            Console.WriteLine();
        }

        public void ClearZiminProducts()
        {
            if (Products.Count == 0)
            {
                Console.WriteLine("Товаров для очистки нет!");
                return;
            }

            Products.Clear();
            Console.WriteLine("Товары очищены успешно!");
        }

        public void SaveZiminProducts()
        {
            if (Products.Count == 0)
            {
                Console.WriteLine("Сохранение не должно быть пустым! Запишите несколько товаров.");
                return;
            }

            Console.WriteLine("Введите имя файла сохранения:");
            string fileName = Console.ReadLine();
            string fullPath = Path.Combine("Saves", fileName + ".xml");

            try
            {
                Directory.CreateDirectory("Saves"); // Создать папку, если её нет.
                using (var writer = new StreamWriter(fullPath))
                {
                    var serializer = new XmlSerializer(typeof(List<ZiminProduct>), new Type[] { typeof(Electronics) });
                    serializer.Serialize(writer, Products);
                }
                Console.WriteLine("Успешно сохранено!");
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Ошибка при сохранении: {ex.Message}");
            }
        }

        public void LoadZiminProducts()
        {
            string path = "Saves";
            if (!Directory.Exists(path))
            {
                Console.WriteLine("Папка с сохранениями отсутствует.");
                return;
            }

            var files = Directory.GetFiles(path, "*.xml");
            if (files.Length == 0)
            {
                Console.WriteLine("Нет доступных файлов для загрузки.");
                return;
            }

            Console.WriteLine("Доступные файлы:");
            for (int i = 0; i < files.Length; i++)
            {
                Console.WriteLine($"{i + 1}. {Path.GetFileName(files[i])}");
            }

            Console.WriteLine("Выберите номер файла для загрузки:");
            int fileIndex = Utils.GetCorrectNumber(1, files.Length) - 1;

            try
            {
                using (var reader = new StreamReader(files[fileIndex]))
                {
                    var serializer = new XmlSerializer(typeof(List<ZiminProduct>), new Type[] { typeof(Electronics) });
                    Products = (List<ZiminProduct>)serializer.Deserialize(reader);
                }
                Console.WriteLine("Файл успешно загружен!");
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Ошибка при загрузке: {ex.Message}");
            }
        }
    }
}
