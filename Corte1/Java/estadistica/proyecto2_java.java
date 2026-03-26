public class StatsDemo {

    static class Stats {

        public static int sum(int[] a){
            int total = 0;
            for(int x : a){
                total += x;
            }
            return total;
        }

        public static double average(int[] a){
            int total = sum(a);
            return (double) total / a.length;
        }

        public static int maxValue(int[] a){
            int m = a[0];
            for(int x : a){
                if(x > m){
                    m = x;
                }
            }
            return m;
        }

        public static int countPassing(int[] a, int threshold){
            int count = 0;
            for(int x : a){
                if(x >= threshold){
                    count++;
                }
            }
            return count;
        }
    }

    public static void main(String[] args){

        int[] grades = {80,75,90,60,95,70,85,88,92,77};

        System.out.println("Sum: " + Stats.sum(grades));
        System.out.println("Average: " + Stats.average(grades));
        System.out.println("Max: " + Stats.maxValue(grades));
        System.out.println("Passing: " + Stats.countPassing(grades,60));
    }
}
