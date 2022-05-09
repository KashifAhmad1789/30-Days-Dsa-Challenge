public class l02Mazepath{
    public static int mazepath2(int sr, int sc, int er, int ec, int[][] dir, String[] dirS, String psf) {

        if (sr == er && sc == ec) {
            System.out.println(psf);
            return 1;
        }
        int count = 0;
        for (int d = 0; d < dir.length; d++) {
            int r = sr + dir[d][0];
            int c = sc + dir[d][1];
            if (r >= 0 && c >= 0 && r <= er && c <= ec) {
                count += mazepath2(r, c, er, ec, dir, dirS, psf + dirS[d]);
            }else break;

        }
        return count;
    }

    public static void main(String[] args) {
        int[][] dir = { { 0, 1 }, { 1, 0 }, { 1, 1 } };
        String[] dirS = { "h", "v", "d" };
        System.out.println(mazepath2(0, 0, 2, 2, dir, dirS, ""));

    }
}