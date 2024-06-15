// LC-1700

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int result = sandwiches.size();

        int numberOfCircleSandwichEatingStudents = 0;
        int numberOfSquareSandwichEatingStudents = 0;

        for (int i: students) {
            if (i==0) numberOfCircleSandwichEatingStudents += 1;
            else numberOfSquareSandwichEatingStudents += 1;
        }

        for (int j:sandwiches) {
            if (j == 0) {
                if (numberOfCircleSandwichEatingStudents > 0) {
                    numberOfCircleSandwichEatingStudents -= 1;
                    result -= 1;
                }
                else return result;
            }
            else {
                if (numberOfSquareSandwichEatingStudents > 0) {
                    numberOfSquareSandwichEatingStudents -= 1;
                    result -= 1;
                }
                else return result;
            }
        }

        return result;

    }
};