import java.util.Arrays;
import java.util.Comparator;

public class Solution {
    public int numberOfPairs(int[][] points) {
        int n = points.length;
        // sort by x ascending, and for equal x sort by y descending
        Arrays.sort(points, Comparator.comparingInt((int[] p) -> p[0])
                                     .thenComparingInt(p -> -p[1]));

        int ans = 0;
        // for each i, count j > i such that points[i].y >= points[j].y
        // but only count the first occurrence for each distinct y seen (keep maxY)
        for (int i = 0; i < n; ++i) {
            int maxY = Integer.MIN_VALUE;
            for (int j = i + 1; j < n; ++j) {
                int yi = points[i][1];
                int yj = points[j][1];
                if (yi >= yj && yj > maxY) {
                    ans++;
                    maxY = yj;
                }
            }
        }
        return ans;
    }

    // quick test
    public static void main(String[] args) {
        Solution s = new Solution();
        int[][] pts1 = {{1,1},{2,2},{3,3}};
        int[][] pts2 = {{6,2},{4,4},{2,6}};
        int[][] pts3 = {{3,1},{1,3},{1,1}};
        System.out.println(s.numberOfPairs(pts1)); // 0
        System.out.println(s.numberOfPairs(pts2)); // 2
        System.out.println(s.numberOfPairs(pts3)); // 2
    }
}