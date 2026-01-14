#Bus ticket

seats=20
seat_booked=0
while seats>0:
      seat_booked=int(input("How many seats you want to book: "))
      if seat_booked>seats:
          print(f"Sry Dear customer only {seats} seats are available")
          continue
      print(f"Congratulation you succefully booked {seat_booked} seats")
      seats=seats-seat_booked
      print(f"available seat is {seats}")
      if seats<=0:
          print("no seats left")
          break
