import sys
def factorize(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return i, n // i
    return n, 1
def main():
    if len(sys.argv) != 2:
        print("Usage: factors <file>")
        sys.exit(1)
    input_file = sys.argv[1]
    try:
        with open(input_file, 'r') as file:
            numbers = file.read().splitlines()
    except FileNotFoundError:
        print(f"Error: File '{input_file}' not found.")
        sys.exit(1)
    except Exception as e:
        print(f"Error: {e}")
        sys.exit(1)
    for number in numbers:
        try:
            n = int(number)
            if n <= 1:
                print(f"Error: {n} is not a valid natural number greater than 1.")
                continue
        except ValueError:
            print(f"Error: '{number}' is not a valid natural number.")
            continue
        p, q = factorize(n)
        print(f"{n}={p}*{q}")
if __name__ == "__main__":
    main()
