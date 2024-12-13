import java.util.Arrays;
import java.util.Scanner;

class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if ((nums[i] + nums[j]) == target) {
                    return new int[] { i, j };
                }
            }
        }
        return new int[] { -1, -1 }; 
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("nums = ");
        String str = input.next();
        str = str.replace("[", "").replace("]", "");
        String[] strArray = str.split(",");
        int[] nums = new int[strArray.length];
        for (int i = 0; i < strArray.length; i++) {
            nums[i] = Integer.parseInt(strArray[i].trim());
        }
        System.out.print("target = ");
        int target = input.nextInt();

        TwoSum solution = new TwoSum();
        int[] result = solution.twoSum(nums, target);
        System.out.println(Arrays.toString(result));
        
        input.close();
    }
}