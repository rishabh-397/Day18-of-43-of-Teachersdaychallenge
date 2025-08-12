# Day18-of-43-of-Teachersdaychallenge
 A. Army
Problem Description: Given a line of n soldiers with different heights, find the minimum number of swaps needed to move the tallest soldier to the front and the shortest soldier to the back. A swap is defined as swapping two neighboring soldiers.

Key Idea/Logic:

The problem can be solved by finding the positions of the tallest and shortest soldiers.

The number of swaps to move the tallest soldier to the front is equal to his initial position (0-indexed).

The number of swaps to move the shortest soldier to the back is equal to the distance from his position to the end of the line, which can be calculated as n - 1 - position.

If the tallest soldier is located to the right of the shortest soldier, their moves will overlap, so we must subtract one from the total number of swaps.

Time Complexity: O(N) where N is the number of soldiers, as we need to find the maximum and minimum elements in the array.

Space Complexity: O(N) to store the heights of the soldiers.

 A. Word Capitalization
Problem Description: Given a word, capitalize the first letter and leave the rest of the letters as they are.

Key Idea/Logic:

The problem can be solved by converting the first letter of the word to uppercase and then printing the rest of the word as it is.

Most programming languages have a built-in function to convert a character to uppercase, which can be used to solve the problem.

Time Complexity: O(1) as the operation only involves the first character of the word.

Space Complexity: O(1) as we only need to store the word in memory.
