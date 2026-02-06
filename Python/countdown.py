import time        #importing time module to use sleep function
i=10
while i>=1:
  print(i)          #printing the value of i for countdown
  i-=1
  time.sleep(1)      #pausing the program for 1 second before the next iteration
print("Happy new year") #printing the message after the countdown is complete