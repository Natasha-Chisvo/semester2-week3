# Worksheet task



Even for this relatively small task the best approach is to develop the solution slowly.

The code template suggests the steps to produce the solution.



Compile your code frequently to check for syntax errors.



Test your executable code with a range of cases that you can compute by hand.

The worksheet description has some suggestions.


Portfolio Task

There are 2 tasks that require completing for the portfolio:
• Coding task – submission via Gradescope
• MCQ – submission on Minerva

You must pass all tests and all MCQ questions to complete the worksheet.
• Test your code in the terminal before submitting to Gradescope.
• Some MCQ questions refer to the coding task.


Description:
You are provided with the following data:
• Salary in £ (UK pounds), which is in the range of £14000-£40000
• National Insurance (NI) rate as a %, which is in the range 0%-10%
• Tax rate as a %, which is in the range 10%-30%


You should calculate the take-home salary after deductions according to the following rules:

• National Insurance is deducted from the total salary

• Tax is deducted from the salary remaining after NI deduction, and only applies to the part
of salary remaining over £12500


Your program should print:
• The NI contribution
• The tax contribution
• The take home salary
in an appropriate way.

Eg. It is usual to write an amount of money with 2 decimal places.
In C you can modify the float format %f to print to 2dp with %.2f

As part of your implementation you should decide the appropriate data types for your variables and the appropriate
form of the expressions.


It is important to test your solution. One way to consider this is validate with simple test cases.

• NI=0%, tax=0% should produce no deduction
• NI=0%, tax=100% should result in take home salary £12500 in every case
• NI=10%, tax=0% should simply reduce salary by 10%


To submit your code you should set salary to £36250, NI rate to 8%, tax rate to 15%.

Use only the print statements provided to output data.
Your code should use sensible naming of variables and use appropriate whitespace and inline comments.