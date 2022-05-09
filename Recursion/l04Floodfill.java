public class l04Floodfill {
    
        public static int floodfill(int sr, int sc, int er, int ec, int[][] dir, boolean[][] vis,String[] dirS, String psf) {

            if (sr == er && sc == ec) {
                System.out.println(psf);
                return 1;
            }
            vis[sr][sc] = true;
            int count = 0;
            for (int d = 0; d < dir.length; d++) {
                int r = sr + dir[d][0];
                int c = sc + dir[d][1];
                if (r >= 0 && c >= 0 && r <= er && c <= ec && !vis[r][c]) {
                    count += floodfill(r, c, er, ec, dir,vis, dirS, psf + dirS[d]);
                }

            }
            vis[sr][sc]= false;
            return count;
        }

        public static void main(String[] args) {
            int[][] dir = { { 0, 1 }, { 1, 0 }, { 1, 1 } };
            String[] dirS = { "h", "v", "d" };
            boolean[][] vis =  {};
            System.out.println(floodfill(0, 0, 2, 2, dir,vis, dirS, ""));

        }
    
}
