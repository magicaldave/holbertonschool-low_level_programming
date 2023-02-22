<div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/Y3jGljA6yaNsgkwXD6UgQQ" title="Search algorithm" target="_blank">Search algorithm</a> </li>
<li><a href="/rltoken/wc-IBLehraAZ7RRTpGsfIA" title="Space complexity (1)" target="_blank">Space complexity (1)</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/R0bWnALSmGWxISe_EEGExw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a search algorithm</li>
<li>What is a linear search</li>
<li>What is a binary search</li>
<li>What is space complexity</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are only allowed to use the <code>printf</code> function of the standard library. Any call to another function like <code>strdup</code>, <code>malloc</code>, … is forbidden.</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>search_algos.h</code></li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<p>You will be asked to write files containing big O notations. Please use this format:</p>

<ul>
<li><code>O(1)</code></li>
<li><code>O(n)</code></li>
<li><code>O(n!)</code></li>
<li>n*m -&gt; <code>O(nm)</code></li>
<li>n square -&gt; <code>O(n^2)</code></li>
<li>sqrt n -&gt; <code>O(sqrt(n))</code></li>
<li>log(n) -&gt; <code>O(log(n))</code></li>
<li>n * log(n) -&gt; <code>O(nlog(n))</code></li>
</ul>

  </div>
<div class="panel-body">
    <span id="user_id" data-id="4924"></span>

<h3>
	0. Linear search
</h3>

    


<p>Write a function that searches for a value in an array of integers using the <a href="/rltoken/spbEEmpztO3EB26U5ZeOvA" title="Linear search algorithm" target="_blank">Linear search algorithm</a></p>

<ul>
<li>Prototype : <code>int linear_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>

<pre><code>wilfried@0x1E-search_algorithms$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
</code></pre>

  </div>

  <div class="list-group">
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
            <li>Directory: <code>0x1E-search_algorithms</code></li>
            <li>File: <code>0-linear.c</code></li>
        </ul>
      </div>

<h3 class="panel-title">
      1. Binary Search
    </h3>

<p>Write a function that searches for a value in an array of integers using the <a href="/rltoken/spbEEmpztO3EB26U5ZeOvA" title="Linear search algorithm" target="_blank">Linear search algorithm</a></p>

<ul>
<li>Prototype : <code>int linear_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>

<pre><code>wilfried@0x1E-search_algorithms$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
</code></pre>


  </div>
<div class="panel panel-default task-card " id="task-23530">
  <span id="user_id" data-id="4924"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. Big O #0
    </h3>


  </div>


<p>What is the <code>time complexity</code> (worst case) of a linear search in an array of size <code>n</code>?</p>


  <div class="list-group">
    <!-- Task URLs -->

<!-- Github information -->
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>0x1E-search_algorithms</code></li>
<li>File: <code>2-O</code></li>
</ul>
</div>

   <h3 class="panel-title">
      3. Big O #1
    </h3>

<div>
	<span class="label label-info">
	mandatory
	</span>
</div>

<div class="panel-body">
<span id="user_id" data-id="4924"></span>


<p>What is the <code>space complexity</code> (worst case) of an iterative linear search algorithm in an array of size <code>n</code>?</p>

</div>

<div class="list-group">

<div class="list-group-item">
	<p><strong>Repo:</strong></p>
	<ul>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x1E-search_algorithms</code></li>
		<li>File: <code>3-O</code></li>
	</ul>
</div>

<h3 class="panel-title">
	4. Big O #2
</h3>


  <div class="panel-body">
    <span id="user_id" data-id="4924"></span>

<p>What is the <code>time complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>

  </div>

  <div class="list-group">

<div class="list-group-item">
	<p><strong>Repo:</strong></p>
	<ul>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x1E-search_algorithms</code></li>
		<li>File: <code>4-O</code></li>
        </ul>
      </div>


<h3>
	5. Big O #3
</h3>

  <div class="panel-body">
    <span id="user_id" data-id="4924"></span>
    <p>What is the <code>space complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>
  </div>

  <div class="list-group">
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
            <li>Directory: <code>0x1E-search_algorithms</code></li>
            <li>File: <code>5-O</code></li>
        </ul>
      </div>

  </div>

