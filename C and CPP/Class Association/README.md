Class and Object Collaboration
Problem Description:

1. Implement a Minimal Checking Account Class for Simulation.
 - Has a balance field.
 - Define a Constructor which creates an Account with an opening balance specified by user.  
 - Define a method to retrieve the balance.
 - Define a deposit method.
 - Define a withdraw method.
 - Define a transfer-funds method to transfer funds FROM Savings Account Object TO a Checking Account Object.

2. Implement a Simple Credit Card Class for Simulation.
 - Has a balance, finance rate (static field), and a credit limit as its fields.
 - Define a Constructor which creates a CreditCard object with a default credit limit of $5000.
 - Define static method to set finance rate.
 - Define a method to retrieve the balance.
 - Define a method to post credit card charges.
 - Define method to apply end of month finance charge.
 - Define a method to make a direct payment TO Credit Card account FROM customer's Checking Account.

3. Implement a Minimal Savings Account Class for Simulation.
 - Has a balance field and static interest rate field.
 - Define a Constructor which creates an Account with an opening balance specified by user.  
 - Define a method to retrieve the balance.
 - Define a deposit method.
 - Define a withdraw method.
 - Static method to set interest rate.
 - Define a method to compute interest on balance at end of month and apply to the balance.
 - Define a transfer-funds method to transfer funds FROM Checking Account Object TO a Saving Account Object.

Using these Classes write a simulation program which has the 
    following transactions each month:

Begin with $500 in checking and savings account.
	1. deposit pay    1000-2000
      2. savings         100-200
      3. loan payment    700-800
      4. pay 5 bills      30-80
      5. 10 card charges  20-90
      6. card payment    200-300
      7. end of month processing

Use Random Generator to generate your data.	
Run simulation for  8 months.
Show account balances at end of each month.	
