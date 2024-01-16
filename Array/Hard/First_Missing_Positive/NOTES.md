<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>One solution is to <b>sort</b> the entire array discarding the negative elements and checking for the first missing number. Another approach will be to use <b>HashSet</b> where we keep track of the maximum and minimum positive elements. Then iterate between the maximum and minimum to get the missing number in the HashSet. Both these solutions <b>require extra auxiliary space</b> and hence do not suffice with the problem statement.</p>

<h2>Efficient Solution</h2>

**Cyclic Sort Approach:**
   - Since we are allowed to modify the existing array, we will go with an index-based cyclic sort approach.
   - First, we can negate all 0's and negative numbers to update it as <b>nums.size + 1</b>.
   - Now we traverse through each element, and if it lies in the range, we make the corresponding number in that index as negative.
   - Now finally we iterate through the array to find the first positive number and that is the answer.

<h2>Edge Cases</h2>
<ul>
   <li>If none of the elements after cyclic sort is positive, the result will be <b>nums.size</b>.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(N) but no extra auxiliary space</b></p>
