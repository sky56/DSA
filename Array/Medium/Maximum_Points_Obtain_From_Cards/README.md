<h1>Maximum points you can obtain from cards</h1>

<p>There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array <b>cardPoints.</b>

In one step, you can take one card from the beginning or from the end of the row. You have to take exactly <b>k</b> cards.

Your score is the sum of the points of the cards you have taken.

Given the integer array cardPoints and the integer k, return the maximum score you can obtain.</p>

<h2>Input Format</h2>

<pre>
The first argument is the array cardPoints
The second argument is an integer k.
</pre>

<h2>Output Format</h2>

<p>Return an integer denoting the maximum possible score that can be obtained.</p>

<h2>Constraints</h2>

<pre>
1 <= cardPoints.length <= 10<sup>5</sup>
1 <= K <= cardPoints.length
1 <= cardPoints[i] <= 10<sup>4</sup>
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

```
cardPoints = [1,2,3,4,5,6,1]
K = 3
Output: 12
```

<h4>Test Case 2</h4>

```
cardPoints = [2,2,2]
K = 2
Output: 4
```

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
