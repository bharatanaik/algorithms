"""
Ceaser Cipher uses substitution method to encrypt the data.

It uses a key value and a plain text as an input to encrypt the data

cipher = E(key, plain_text) = (plain_text + key) mod 26 
plain_text = D(key, cipher) = (cipher - key) mod 26
"""

class CeaserCipher:
    def __init__(self, key:int) -> None:
        self.key = key

    def encrypt(self, plain_text:str):
        array = list(plain_text)
        for i, char in enumerate(array):
            array[i] = chr(((ord(char) - ord("a") + self.key) % 26) + ord("a"))
        return "".join(array)

    def decrypt(self, cipher_text:str):
        array = list(cipher_text)
        for i, char in enumerate(array):
            array[i] = chr(((ord(char) - ord("a") - self.key) % 26) + ord("a"))
        return "".join(array)



if __name__ == "__main__":
    print("#### CEASER CIPHER ####\n")

    plain_text = input("Enter a message (lower case without space): ")
    key = int(input("Enter key (integer): "))

    cc = CeaserCipher(key)

    cipher_text = cc.encrypt(plain_text)
    print(f"\ncipher text: {cipher_text}\n")

    decrypted_text = cc.decrypt(cipher_text)

    print(f"decrypted text: {decrypted_text}\n")

    
