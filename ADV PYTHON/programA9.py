class Circle:
    def __init__(self, r):
        self.r = r

    def __area__(self):
        return 3.14 * self.r * self.r

    def __perimeter__(self):
        return 2 * 3.14 * self.r

cir = Circle(5)
print(cir.__area__())
print(cir.__perimeter__())