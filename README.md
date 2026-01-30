# Horse Race Game

The goal was to practice functions, arrays, loops, and basic randomization.

There are 5 horses (0–4) and a 15‑character track. Each turn, every horse flips a coin. If it gets heads, it moves forward one space. The race continues until one or more horses reach the end.

---

## How the Program Works

- I used an integer array to store each horse’s position.
- Three functions handle the main logic:
  - `advance()` – flips a coin and maybe moves the horse
  - `printLane()` – prints one horse’s lane using dots and the horse number
  - `isWinner()` – checks if a horse reached the end
- The main loop keeps running until a winner is found.
- You press enter as printed on screen to move to the next turn.

---

## Algorithm

### **advance(horseNum, horses)**
1. Flip a coin (0 or 1)
2. If the coin is 1:
   - Increase the horse’s position by 1

### **printLane(horseNum, horses)**
1. Get the horse’s current position
2. Loop from 0 to TRACK_LENGTH:
   - If index equals the horse’s position → print the horse number  
   - Else → print a dot `.`
3. End the line

### **isWinner(horseNum, horses)**
1. If the horse’s position equals TRACK_LENGTH - 1 → return true  
2. Otherwise return false

### **Main Program**
1. Seed random number generator  
2. Set all horses’ positions to 0  
3. Print starting lanes  
4. While no horse has won:
   - Wait for user to press Enter  
   - Call `advance()` for each horse  
   - Call `printLane()` for each horse  
   - Check for winners  
5. Print winner message and end program

---