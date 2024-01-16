<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<h2>Efficient Solution</h2>

**Two-Pointer Approach:**
   - Initialize left and right pointers at both ends of the elevation array.
   - Maintain leftBoundary and rightBoundary to track the maximum height encountered from the left and right sides, respectively.
   - Move the pointers inward while updating leftBoundary and rightBoundary.
   - Calculate the trapped water at each position based on the minimum of leftBoundary and rightBoundary.

<h2>Edge Cases</h2>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(N)</b></p>
