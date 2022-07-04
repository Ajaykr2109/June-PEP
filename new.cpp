public class Testfor
{
    public static int ArrayChallenge(int[] arr)
    {
        int[] temp = new int[arr.length - 1];
        int diff = 0;

        for (int i = 0; i < arr.length - 1; i++)
        {
            diff = Math.abs(arr[i] - arr[i + 1]);
            temp[i] = diff;
        }
        arr = temp;
        for (int i:arr)
        {
            System.out.println(i);
        }
        if (arr.length > 1)
        {
            diff = ArrayChallenge(arr);
        }
        else
        {
            diff = arr[0];
            System.out.println("diff" + diff);
        }
        return diff;
    }

    public static void main(String[] args)
    {
        // keep this function call here     
        //Scanner s = new Scanner(System.in);
        System.out.println("answer:" + ArrayChallenge(new int[] { 1,6}));
    }
}