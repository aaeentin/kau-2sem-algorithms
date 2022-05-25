// https://leetcode.com/problems/water-and-jug-problem
class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if (targetCapacity > jug1Capacity + jug2Capacity) {
            return false;
        }
        while (jug1Capacity > 0 && jug2Capacity > 0) {
            jug1Capacity > jug2Capacity ? jug1Capacity %= jug2Capacity : jug2Capacity %= jug1Capacity;
        }
        return targetCapacity % (jug1Capacity + jug2Capacity) == 0;
    }
};