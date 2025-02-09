## TODO List

### Add a Checking account class to the Account hierarchy
- [ ] A Checking account has a name and a balance.
- [ ] A Checking account has a fee of $1.50 per withdrawal transaction.
- [ ] Every withdrawal transaction will be assessed this flat fee.

### Add a Trust account class to the Account hierarchy
- [ ] A Trust account has a name, a balance, and an interest rate.
- [ ] The Trust account deposit works just like a savings account deposit.
- [ ] Any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.
- [ ] The Trust account withdrawal should only allow 3 withdrawals per year.
- [ ] Each withdrawal must be less than 20% of the account balance.
- [ ] Ensure that the 4th withdrawal attempt fails.

### Additional Hints & Enhancements
- [ ] Reuse existing functionality where possible.
- [ ] Determine the appropriate Base class for the new classes.
- [ ] Add helper functions to `Account_Util.h` and `Account_Util.cpp` to work with new classes (optional).
- [ ] Overload `+=` and `-=` operators for deposit and withdrawal (optional).

### Notes
- [ ] No need to track calendar time for the Trust account withdrawal limit.