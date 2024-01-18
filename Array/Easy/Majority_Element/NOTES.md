<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>There are <b>multiple</b> brute force solutions to solve this problem using the below techniques:

<ul>
  <li>
    <h3>Sorting</h3>
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

<p> To solve this problem using constant extra space, we use an algorithm known as <b>Moore’s Voting Algorithm</b>. The algorithm states that if an element has a majority of N/2 frequency, then the rest of the elements will have a total count of less than N/2.

Here we maintain 2 states: <b>currentMajorityElement</b> and <b>currentMajorityElementCounter</b>. We assume that the first element is the majority element and mark it as the majority element; thus <b>incrementing and decrementing the counter</b> based on the current element equals the majority element. If the counter becomes 0, we <b>reset</b> the majority element to the current element.
</p>

<h2>Edge Cases</h2>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
