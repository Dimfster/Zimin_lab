namespace Zimin_Lab5
{
    public static class Utils
    {
        public static T GetCorrectNumber<T>(T min, T max) where T : IComparable<T>
        {
            T result;
            while (true)
            {
                try
                {
                    Console.Write($"Введите число от {min} до {max}: ");
                    string input = Console.ReadLine();

                    if (typeof(T) == typeof(int))
                        result = (T)(object)int.Parse(input);
                    else if (typeof(T) == typeof(double))
                        result = (T)(object)double.Parse(input);
                    else
                        throw new InvalidOperationException("Поддерживаются только числовые типы.");

                    if (result.CompareTo(min) >= 0 && result.CompareTo(max) <= 0)
                        return result;

                    Console.WriteLine("Число вне диапазона.");
                }
                catch (Exception)
                {
                    Console.WriteLine("Неверный ввод. Попробуйте снова.");
                }
            }
        }
    }
}
