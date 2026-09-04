# Number-guessing-game
# 🎯 Number Guessing Game in C

A simple **Number Guessing Game** written in C programming.
The computer randomly selects a number between **1 and 100**, and the player tries to guess it.

This project is beginner-friendly and helps practice basic C programming concepts.

## 🎮 How the Game Works

1. The computer generates a random number between **1 and 100**.
2. The player enters a guess.
3. The program gives a hint:

   * 🔼 **Too High** — your guess is greater than the secret number.
   * 🔽 **Too Low** — your guess is smaller than the secret number.
   * 🎉 **Congratulations** — you guessed the correct number.
4. The game continues until the player guesses the correct number.
5. The total number of attempts is displayed.

## 🛠️ Technologies Used

* **C Programming**
* `stdio.h`
* `stdlib.h`
* `time.h`

## 📚 Concepts Practiced

* Variables and data types
* User input with `scanf()`
* Output with `printf()`
* `if`, `else if`, and `else`
* `do...while` loop
* Random number generation
* `rand()` and `srand()`
* `time()`
* Counters and increment operators

## 💻 How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/number-guessing-game.git
```

### 2. Open the Project

Open the project folder in **VS Code**.

### 3. Compile the Program

If you are using GCC/MinGW:

```bash
gcc number_guessing_game.c -o number_guessing_game
```

### 4. Run the Program

**Windows:**

```bash
number_guessing_game
```

or:

```bash
.\number_guessing_game.exe
```

## 🎯 Example Output

```text
================================
      NUMBER GUESSING GAME
================================
I have chosen a number between 1 and 100.
Try to guess it!

Enter your guess: 50
Too Low! Try again.

Enter your guess: 75
Too High! Try again.

Enter your guess: 63

Congratulations! 🎉
You guessed the number 63 in 3 attempts.
```

## 🚀 Future Improvements

Some features that could be added in future versions:

* [ ] Difficulty levels
* [ ] Limited number of attempts
* [ ] Score system
* [ ] Play Again option
* [ ] High-score system
* [ ] Input validation

## 👨‍💻 Author

**Sujal Soni**

🎓 BCA 1st Year Student
💻 Learning C Programming
🌱 Exploring Git & GitHub

## ⭐ Support

If you like this project, consider giving the repository a ⭐ on GitHub!

---

**Made with ❤️ using C**
