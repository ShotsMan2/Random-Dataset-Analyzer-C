# Random Dataset Analyzer & Normalizer

This project implements a multi-step data processing algorithm in C, designed to generate, transform, and analyze a dataset based on specific statistical rules.

## ⚙️ Algorithm Logic

The process consists of 4 main phases:

### 1. Constrained Generation
Generates $N$ random integers (where $5 \le N \le 10$) with the following strict rules:
* **Split Ranges:** Half of the numbers are from `[10-35]`, the rest are from `[60-95]`.
* **Difference Constraint:** Every generated number must have a minimum difference of **8** from all previously generated numbers.

### 2. Statistical Normalization
* Calculates the arithmetic mean of the dataset.
* **Adjustment:** Any number found to be **below the average** is updated using the formula:
  $$NewVal = \frac{OldVal + Average}{2}$$

### 3. Sorting
* The modified dataset is sorted in **Ascending Order** (Smallest to Largest).

### 4. Prime Number Analysis
* The algorithm scans the final array to identify **Prime Numbers**.
* Outputs the **count** of prime numbers and their **indices**.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o analyzer
    ```
2.  Run the executable:
    ```bash
    ./analyzer
    ```
3.  Enter a value for N (between 5 and 10).

## 📊 Example Output

```text
n i 5-10 araliginda giriniz. 
n i giriniz: 6
20 30 12 70 85 95 
 ort: 52 
36 41 32 70 85 95 
32 36 41 70 85 95 
 asal sayi indeksleri: 2 
 toplam asal adedi: 1
