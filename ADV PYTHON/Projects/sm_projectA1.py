class Password:
    def __init__(self, len):
        self.len = len

    def generate(self):
        import random
        import string
        # password = ''.join(random.choices(string.ascii_letters + string.digits, k=self.len))
        latters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
        digits = '0123456789'
        special = '!@#$%^&*?'
        all = latters + digits + special
        password_list = random.choices(all, k=self.len)
        password = ''.join(password_list)
        return password

len = int(input("Enter the length of the password: "))
obj = Password(len)
print(obj.generate())