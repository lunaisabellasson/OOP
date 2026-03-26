class Stats:

    @staticmethod
    def sum(a):
        total = 0
        for x in a:
            total += x
        return total

    @staticmethod
    def average(a):
        total = Stats.sum(a)
        return total / len(a)

    @staticmethod
    def maxValue(a):
        m = a[0]
        for x in a:
            if x > m:
                m = x
        return m

    @staticmethod
    def countPassing(a, threshold):
        count = 0
        for x in a:
            if x >= threshold:
                count += 1
        return count


def main():

    grades = [80,75,90,60,95,70,85,88,92,77]

    print("Sum:", Stats.sum(grades))
    print("Average:", Stats.average(grades))
    print("Max:", Stats.maxValue(grades))
    print("Passing:", Stats.countPassing(grades,60))


if __name__ == "__main__":
    main()
