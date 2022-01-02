
public class Solution {

    public int numPairsDivisibleBy60(int[] time) {

        final int TIME = 60;
        int[] timeRemainder = new int[TIME];
        int totalPairsDivisibleBy60 = 0;

        for (int duration : time) {
            int checkIndex = (duration % TIME) != 0 ? (TIME - duration % TIME) : 0;
            totalPairsDivisibleBy60 += timeRemainder[checkIndex];
            timeRemainder[(duration % TIME)]++;
        }

        return totalPairsDivisibleBy60;
    }

}
