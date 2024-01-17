<h1>Ways to Make a Fair Array</h1>

<p>You are given an integer array <b>nums</b>. You can choose exactly <b>one index (0-indexed)</b> and <b>remove</b> the element. Notice that the index of the elements may change after the removal.

For example, if <b>nums = [6,1,7,4,1]</b>:

<ul>
<li>Choosing to remove index <b>1</b> results in <b>nums = [6,7,4,1]</b>.</li>
<li>Choosing to remove index <b>2</b> results in <b>nums = [6,1,4,1]</b>.</li>
<li>Choosing to remove index <b>4</b> results in <b>nums = [6,1,7,4]</b>.</li>
</ul>

An array is <b>fair</b> if the sum of the odd-indexed values equals the sum of the even-indexed values.

Return the <b>number of indices</b> that you could choose such that after the removal, nums is <b>fair</b>.

</p>

<h2>Input Format</h2>

<pre>
The only argument given is the integer array nums.
</pre>

<h2>Output Format</h2>

<pre>
Return an integer which will be the count of indices, upon whose removal will make the array fair.
</pre>

<h2>Constraints</h2>

<pre>
1 <= nums.length <= 10<sup>5</sup>
1 <= nums[i] < 10<sup>4</sup>
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

<pre>
nums = [2,1,6,4]
Output: 1
</pre>

<h4>Test Case 2</h4>

<pre>
nums = [1,1,1]
Output: 3
</pre>

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
