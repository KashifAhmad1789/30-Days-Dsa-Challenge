public class l03MazepathwithJupm {
    public static int mazepathjump(int sr, int sc, int er, int ec, int[][] dir, String[] dirS, String psf) {

        if (sr == er && sc == ec) {
            System.out.println(psf);
            return 1;
        }
        int count = 0;
        for (int d = 0; d < dir.length; d++) {
            for (int rad = 1; rad <= Math.max(er, ec); rad++) {
                int r = sr + dir[d][0];
                int c = sc + dir[d][1];
                if (r >= 0 && c >= 0 && r <= er && c <= ec) {
                    count += mazepathjump(r, c, er, ec, dir, dirS, psf + dirS[d] + rad);
                }

            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[][] dir = { { 0, 1 }, { 1, 0 }, { 1, 1 } };
        String[] dirS = { "h", "v", "d" };
        System.out.println(mazepathjump(0, 0, 2, 2, dir, dirS, ""));

    }

}
