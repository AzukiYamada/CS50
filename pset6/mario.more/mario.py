from cs50 import get_int


def main():
    pySize = get_int("Height: ")

    while pySize < 1 or pySize > 8:
        print("Invalid Height: Enter a number between 1 and 8")
        pySize = get_int("Height: ")

    print_py(pySize, pySize)


def print_py(size, h):
    if (size == 0):
        return

    else:
        print_py(size-1, h)

        # print spaces
        print(" " * (h - size), end="")

        # print left side
        print("#" * (size), end="")

        # print space
        print("  ", end="")

        # print right side
        print("#" * (size), end="")

        print()


if __name__ == "__main__":
    main()