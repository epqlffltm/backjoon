def barcode():
    n = int(input())
    bar = input().split()

    for i in range(n):
        print('i', end='') if bar[i] == 'I' else print('L', end='')

if __name__ == "__main__":
    barcode()
