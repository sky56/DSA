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

But all these solutions either do not suffice the required time or space complexity.
</p>

<h2>Efficient Solution</h2>

<p> To solve this problem using constant extra space, we use an algorithm known as <b>Moore’s Voting Algorithm</b>. The algorithm states that there can be a <b>maximum of 2 elements</b> that can have a frequency <b>greater than [N/3]</b>.

Here we first <b>compute the 2 probable majority elements</b> using the voting algorithm. After deduction, we <b>count the frequency</b> of both the elements in the array and <b>consider</b> each of them in the result, if their respective <b>frequency</b> exceeds [N/3].
</p>

<h2>Edge Cases</h2>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
