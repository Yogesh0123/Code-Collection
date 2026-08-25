// 3. Program to print 5 to 1 numbers on screen.

class Program3
{
    static void Display()
    {
        int i = 5;

        while (i >= 1)
        {
            System.out.print(i + "\t");
            i--;
        }
    }

    public static void main(String[] args)
    {
        Display();
    }
}