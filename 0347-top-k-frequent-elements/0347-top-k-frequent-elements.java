class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int x : nums) {
            mp.put(x, mp.getOrDefault(x, 0) + 1);
        }

        PriorityQueue<Map.Entry<Integer, Integer>> pq = new PriorityQueue<>(
            (a, b) -> b.getValue() - a.getValue());

        pq.addAll(mp.entrySet());
        int[] topK = new int[k];
        int i = 0;
        while (!pq.isEmpty() && i < k) {
            topK[i++] = pq.poll().getKey(); 
        }

        return topK;
    }
}