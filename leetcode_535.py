from typing import List

class Codec:
    legalChar = ["0","1","2","3","4","5","6","7","8","9",
    "a","b","c","d","e","f","g","h","i","j","k","l","m",
    "n","o","p","q","r","s","t","u","v","w","x","y","z",
    "A","B","C","D","E","F","G","H","I","J","K","L","M",
    "N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]

    sUrlDic = {}

    def encode(self, longUrl: str) -> str:
        import random

        shortUrl = "http://surl.com/"
        for i in range(6):
            shortUrl += self.legalChar[random.randint(0, 61)]
        while shortUrl in self.sUrlDic:
            shortUrl = "http://surl.com/"
            for i in range(6):
                shortUrl += self.legalChar[random.randint(0, 61)]
        self.sUrlDic[shortUrl] = longUrl

        return shortUrl

    def decode(self, shortUrl: str) -> str:
        longUrl = self.sUrlDic[shortUrl]
        return longUrl