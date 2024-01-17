<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<h2>Efficient Solution</h2>

<p>Since the elements in the arr will be from <b>0 to arr.length - 1</b>, for a chunk/subarray to be sorted, the maximum value of that chunk/subarray should be equal to the corresponding index. If a chunk/subarray fulfills this criteria, we internally sort it (if not sorted) but that will be counted as a potential solution. Therefore the approach will be to traverse and keep on <b>checking the current maximum value of the chunk</b>. If the maximum value is equal to the index, we have a chunk and will increase the chunk count and reset the current maximum value. </p>

<h2>Edge Cases</h2>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
