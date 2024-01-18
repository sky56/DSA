<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>There are <b>multiple</b> brute force solutions to solve this problem using the below techniques:

<ul>
  <li>
    <h3>Sorting and Binary Search</h3>
    <pre>
    Time Complexity: O(NLogN)
    Space Complexity: O(N)</pre>
  </li>

  <li>
    <h3>Double Iteration to check for duplicate</h3>
    <pre>
    Time Complexity: O(N<sup>2</sup>)
    Space Complexity: O(1)</pre>
  </li>

  <li>
    <h3>Using HashSet/HashMap</h3>
    <pre>
    Time Complexity: O(N)
    Space Complexity: O(N)</pre>
  </li>

  <li>
    <h3>Counting Sort</h3>
    <pre>
    Time Complexity: O(N)
    Space Complexity: O(N)</pre>
  </li>
</ul>

But all these solutions either do not suffice the required time complexity or space complexity.
</p>

<h2>Efficient Solution</h2>

<p>We use the concept of <b>marking the visited elements</b> where we mark the index of the visited element by making the element of that index negative. While traversing the array, if we encounter an already marked index in the array, that means that the number is duplicate and we <b>mark the duplicate number</b> and break the loop.

Also since <b>modification</b> of the array is not required and we know that all the array elements are positive initially, therefore we <b>revert</b> the already marked indices by converting them into positive numbers.
</p>

<h2>Edge Cases</h2>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
