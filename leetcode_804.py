from typing import List

class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morseDict = {"a":".-","b":"-...","c":"-.-.","d":"-..","e":".","f":"..-.","g":"--.","h":"....","i":"..","j":".---","k":"-.-","l":".-..","m":"--","n":"-.","o":"---","p":".--.","q":"--.-","r":".-.","s":"...","t":"-","u":"..-","v":"...-","w":".--","x":"-..-","y":"-.--","z":"--.."}

        exWords = set()
        for word in words:
            tmp = "".join([morseDict[ch] for ch in word])
            exWords.add(tmp)

        return len(exWords)