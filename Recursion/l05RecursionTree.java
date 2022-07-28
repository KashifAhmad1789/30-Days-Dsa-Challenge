public class l05RecursionTree {
    public static int coinchangepermutation_In(int[] coins, int tar, String psf){
        if(tar==0){
            System.out.println(psf);
            return 1;
        }
        int count =0;
        for(int i =0;i<coins.length;i++){
            if(tar-coins[i]>=0){
                count += coinchangepermutation_In(coins, tar-coins[i], psf + coins[i] + " ");
            }
        }
        return count;
    }

     public static int coinChangeCombination_IN(int[] coins, int tar, int idx, String psf) {
        if (tar == 0) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        for (int i = idx; i < coins.length; i++) {
            if (tar - coins[i] >= 0) {
                count += coinChangeCombination_IN(coins, tar - coins[i], i, psf + coins[i] + " ");
            }
        }
        return count;
    }
    
    public static int coinchangepermutation_SIn(int[] coins, int tar, String psf) {
        if (tar == 0) {
            System.out.println(psf);
            return 1;
        }
        int count = 0;
        for (int i = 0; i < coins.length; i++) {
            if (coins[i]>0 && tar - coins[i] >= 0) {
                int val = coins[i];
                coins[i] = - coins[i];
                count += coinchangepermutation_SIn(coins, tar - val, psf + val + " ");
                coins[i] = -coins[i];
            }
        }
        return count;
    }
    public static int coinChangeCombination_SIN(int[] coins, int tar, int idx, String psf) {
        if (tar == 0) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        for (int i = idx; i < coins.length; i++) {
            if (tar - coins[i] >= 0) {
                count += coinChangeCombination_SIN(coins, tar - coins[i], i+1, psf + coins[i] + " ");
            }
        }
        return count;
    }
    public static void main(String[] args) {
        int[] coins = {2,3,5,7};
        int tar = 10;
        System.out.println(coinChangeCombination_SIN(coins,tar,0," "));
    }
}
