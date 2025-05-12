# HackerRank Solutions

This repository contains my solutions to various HackerRank coding challenges implemented in C++ and C#.

## Problems Solved

### C++ Solutions
- **Array Challenges**
  - [Birthday Cake Candles](birthdayCakeCandles.cpp) - Count how many candles are tallest
  - [Diagonal Difference](diagonalDifference.cpp) - Calculate the absolute difference between the sums of diagonals in a square matrix
  - [Hour Glass](hourGlass.cpp) - Find the maximum sum of hourglass patterns in a 2D array
  - [Left Rotation](leftRotation.cpp) - Rotate array elements to the left by a given number
  - [Min-Max Sum](minmaxSum.cpp) - Find the minimum and maximum sums of 4 out of 5 integers
  - [Staircase](staircase.cpp) - Print a staircase pattern of '#' symbols

### C# Solutions
- **String Manipulation**
  - [Love Letter Mystery](loveLetterMystery.cs) - Calculate the minimum operations to convert a string to a palindrome
  - [Palindrome Index](palindromeIndex.cs) - Find which character to remove to make a string a palindrome
  - [Time Conversion](timeConversion.cs) - Convert 12-hour AM/PM format to 24-hour format
- **Implementation Challenges**
  - [Designer PDF Viewer](designerPDFViewer.cs) - Calculate the area of highlighted text in a PDF viewer
  - [Angry Professor](angryProfessor.cs) - Determine if class is cancelled based on student arrival times
  - [Beautiful Days at the Movies](beautifulDays.cs) - Count beautiful days based on integer reversals
  - [Utopian Tree](utopianTree.cs) - Calculate the height of a tree after cycles of growth
  - [Viral Advertising](viralAdvertising.cs) - Calculate cumulative likes from a viral marketing campaign

## Compilation and Execution

### C++ Solutions
Each C++ solution can be compiled using g++ and executed separately:

```bash
g++ -o <filename_without_extension> <filename>.cpp
./<filename_without_extension>
```

For example:
```bash
g++ -o staircase staircase.cpp
./staircase
```

Alternatively, you can use the VS Code task configured in this repository to build the active file:
1. Open the C++ file you want to compile
2. Press `Ctrl+Shift+B` to run the build task
3. Run the generated executable from the terminal

### C# Solutions
The C# solutions can be compiled and run using the .NET SDK:

```bash
dotnet run <filename>.cs
```

To run a specific C# file, you might need to create a temporary project:

```bash
mkdir temp-project
cd temp-project
dotnet new console
# Replace Program.cs with your solution code or copy the relevant part
dotnet run
```

## Repository Structure
```
├── .vscode/            # VS Code configuration files
├── *.cpp               # C++ solution files
├── *.cs                # C# solution files
└── README.md           # This documentation file
```
