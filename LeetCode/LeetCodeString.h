#pragma once
#ifndef LeetCodeString_H
#define LeetCodeString_H
#include <stdint.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm> 
#include <functional> 
#include <bitset> 
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map> 
#include <unordered_set> 
#include <vector> 
#include <stack> 
#include "leetcode.h"

using namespace std;

/// <summary>
/// The class is to implement array related algorithm  
/// </summary>
class LeetCodeString
{
public:
#pragma region String
    /// <summary>
    /// Leet code #1446. Consecutive Characters
    ///
    /// Easy
    ///
    /// Given a string s, the power of the string is the maximum length of 
    /// a non-empty substring that contains only one unique character.
    ///
    /// Return the power of the string.
    ///
    /// Example 1:
    /// Input: s = "leetcode"
    /// Output: 2
    /// Explanation: The substring "ee" is of length 2 with the character 'e' 
    /// only.
    ///
    /// Example 2:
    /// Input: s = "abbcccddddeeeeedcba"
    /// Output: 5
    /// Explanation: The substring "eeeee" is of length 5 with the character 
    /// 'e' only.
    ///
    /// Example 3:
    /// Input: s = "triplepillooooow"
    /// Output: 5
    ///
    /// Example 4:
    /// Input: s = "hooraaaaaaaaaaay"
    /// Output: 11
    ///
    /// Example 5:
    /// Input: s = "tourist"
    /// Output: 1
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 500
    /// 2. s contains only lowercase English letters.
    /// </summary>
    int maxPower(string s);

    /// <summary>
    /// Leet code #28. Implement strStr()
    ///
    /// Easy
    ///
    /// Implement strStr().
    ///
    /// Return the index of the first occurrence of needle in haystack, or -1 
    /// if needle is not part of haystack.
    ///
    /// Example 1:
    ///
    /// Input: haystack = "hello", needle = "ll"
    /// Output: 2
    ///
    /// Example 2:
    ///
    /// Input: haystack = "aaaaa", needle = "bba"
    /// Output: -1
    /// Clarification:
    ///
    /// What should we return when needle is an empty string? This is a great 
    /// question to ask during an interview.
    ///
    /// For the purpose of this problem, we will return 0 when needle is an empty 
    /// string. This is consistent to C's strstr() and Java's indexOf().
    /// </summary>
    int strStr(string haystack, string needle);

    /// <summary>
    /// Leet code #65. Valid Number
    ///
    /// Validate if a given string is numeric.
    /// Some examples:
    /// "0" => true
    /// " 0.1 " => true
    /// "abc" => false
    /// "1 a" => false
    /// "2e10" => true
    /// Note: It is intended for the problem statement to be ambiguous. 
    /// You should gather all requirements up front before implementing one. 
    /// </summary>
    bool isValidNumber(string s);

    /// <summary>
    /// Leet code #205. Isomorphic Strings
    ///
    /// Given two strings s and t, determine if they are isomorphic. 
    /// Two strings are isomorphic if the characters in s can be replaced to 
    /// get t.
    /// All occurrences of a character must be replaced with another character 
    /// while preserving the order of characters. No two characters may map to 
    /// the same character but a character may map to itself.
    /// For example,
    /// Given "egg", "add", return true.
    ///
    /// Given "foo", "bar", return false.
    /// Given "paper", "title", return true.
    /// Note:
    /// You may assume both s and t have the same length.
    /// </summary>
    bool isIsomorphic(string s, string t);

    /// <summary>
    /// Leet code #125. Valid Palindrome
    ///
    /// Given a string, determine if it is a palindrome, considering only 
    /// alphanumeric characters and ignoring cases.
    /// For example,
    /// "A man, a plan, a canal: Panama" is a palindrome.
    /// "race a car" is not a palindrome.
    /// Notes:
    /// Have you consider that the string might be empty? This is a good 
    /// question to ask during an interview.
    /// For the purpose of this problem, we define empty string as valid 
    /// palindrome.
    /// </summary>
    bool isPalindrome(string s);

    /// <summary>
    /// Leet code #187. Repeated DNA Sequences 
    ///
    /// All DNA is composed of a series of nucleotides abbreviated 
    /// as A, C, G, and T, for example: "ACGAATTCCG". 
    /// When studying DNA, it is sometimes useful to identify repeated 
    /// sequences within the DNA.
    /// Write a function to find all the 10-letter-long sequences 
    /// (substrings) that occur more than once in a DNA molecule.
    ///
    /// For example,
    /// Given s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",
    /// Return:
    /// ["AAAAACCCCC", "CCCCCAAAAA"].
    /// </summary>
    vector<string> findRepeatedDnaSequences(string s);

    /// <summary>
    /// Leet code #214. Shortest Palindrome    
    /// 
    /// Given a string S, you are allowed to convert it to a palindrome by 
    /// adding characters in front of it. Find and return the shortest palindrome 
    /// you can find by performing this transformation. 
    ///
    /// For example: 
    /// Given "aacecaaa", return "aaacecaaa".
    /// Given "abcd", return "dcbabcd".
    /// Given an array of n positive integers and a positive integer s, 
    /// </summary>
    string shortestPalindrome(string s);

    /// <summary>
    /// Leet code #290. Word Pattern      
    ///
    /// Given a pattern and a string str, find if str follows the same pattern.
    /// Here follow means a full match, such that there is a bijection between 
    /// a letter in pattern and a non-empty word in str.
    /// Examples:
    /// 1.pattern = "abba", str = "dog cat cat dog" should return true.
    /// 2.pattern = "abba", str = "dog cat cat fish" should return false.
    /// 3.pattern = "aaaa", str = "dog cat cat dog" should return false.
    /// 4.pattern = "abba", str = "dog dog dog dog" should return false.
    /// Notes:
    /// You may assume pattern contains only lowercase letters, and str 
    /// contains lowercase letters separated by a single space. 
    /// </summary>
    bool wordPattern(string pattern, string str);

    /// <summary>
    /// Leet code #336. Palindrome Pairs
    /// 
    /// Given a list of unique words, find all pairs of distinct 
    /// indices (i, j) in the given list, 
    /// so that the concatenation of the two words, i.e. words[i] + words[j] 
    /// is a palindrome. 
    /// Example 1:
    /// Given words = ["bat", "tab", "cat"]
    /// Return [[0, 1], [1, 0]]
    ///
    /// Example 2:
    /// Given words = ["abcd", "dcba", "lls", "s", "sssll"]
    /// Return [[0, 1], [1, 0], [3, 2], [2, 4]]
    /// The palindromes are ["dcbaabcd", "abcddcba", "slls", "llssssll"]
    /// </summary>
    vector<vector<int>> palindromePairs(vector<string>& words);

    /// <summary>
    /// Leet code #293. Flip Game  
    /// 
    /// You are playing the following Flip Game with your friend: Given a 
    /// string that contains only these two characters: + and -, you and your 
    /// friend take turns to flip two consecutive "++" into "--". The game 
    /// ends when a person can no longer make a move and therefore the other 
    /// person will be the winner. 
    /// Write a function to compute all possible states of the string after 
    /// one valid move. 
    /// For example, given s = "++++", after one move, it may become one of 
    /// the following states: 
    /// [
    ///    "--++",
    ///    "+--+",
    ///    "++--"
    /// ]
    /// If there is no valid move, return an empty list [].
    /// </summary>
    vector<string> generatePossibleNextMoves(string s);

    /// <summary>
    /// Leet code #393. UTF-8 Validation
    ///
    /// A character in UTF8 can be from 1 to 4 bytes long, subjected to the 
    /// following rules:
    /// 1.For 1-byte character, the first bit is a 0, followed by its unicode 
    ///   code.
    /// 2.For n-bytes character, the first n-bits are all one's, the n+1 bit 
    ///   is 0, followed by n-1 bytes with most significant 2 bits being 10.
    /// This is how the UTF-8 encoding would work:
    ///   Char. number range  |        UTF-8 octet sequence
    ///      (hexadecimal)    |              (binary)
    ///   --------------------+---------------------------------------------
    ///   0000 0000-0000 007F | 0xxxxxxx
    ///   0000 0080-0000 07FF | 110xxxxx 10xxxxxx
    ///   0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx
    ///   0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
    /// Given an array of integers representing the data, return whether it is 
    /// a valid utf-8 encoding. 
    /// Note:
    /// The input is an array of integers. Only the least significant 8 bits 
    /// of each integer is used to store the data. This means each integer 
    /// represents only 1 byte of data. 
    /// Example 1: 
    /// data = [197, 130, 1], which represents the octet 
    /// sequence: 11000101 10000010 00000001.
    /// Return true.
    /// It is a valid utf-8 encoding for a 2-bytes character followed by 
    //// a 1-byte character.
    /// Example 2: 
    /// data = [235, 140, 4], which represented the octet 
    /// sequence: 11101011 10001100 00000100.
    /// Return false.
    /// The first 3 bits are all one's and the 4th bit is 0 means it is 
    /// a 3-bytes character.
    /// The next byte is a continuation byte which starts with 10 and 
    /// that's correct.
    /// But the second continuation byte does not start with 10, so it is 
    /// invalid.
    /// </summary>
    bool validUtf8(vector<int>& data);

    /// <summary>
    /// Leet code #409. Longest Palindrome 
    ///
    /// Given a string which consists of lowercase or uppercase letters, find 
    /// the length of the longest palindromes that can be built with those 
    /// letters. 
    /// This is case sensitive, for example "Aa" is not considered a 
    /// palindrome here.
    /// Note:
    /// Assume the length of given string will not exceed 1,010. 
    /// Example: 
    /// Input:
    /// "abccccdd"
    /// Output:
    /// 7
    ///
    /// Explanation:
    /// One longest palindrome that can be built is "dccaccd", whose length is 7.
    /// </summary>
    int longestPalindromeII(string s);

    /// <summary>
    /// Leet code #482. License Key Formatting  
    /// 
    /// Now you are given a string S, which represents a software license key 
    /// which we would like to format. The string S is composed of 
    /// alphanumerical characters and dashes. 
    /// The dashes split the alphanumerical characters within the string into 
    /// groups. (i.e. if there are M dashes, the string is split into M+1 
    /// groups). 
    /// The dashes in the given string are possibly misplaced.
    ///
    /// We want each group of characters to be of length K (except for 
    /// possibly the first group, which could be shorter, but still must 
    /// contain at least one character). To satisfy this requirement, we will 
    /// reinsert dashes. Additionally, all the lower case letters in the 
    /// string must be converted to upper case.
    /// So, you are given a non-empty string S, representing a license key to 
    /// format, and an integer K. 
    /// And you need to return the license key formatted according to the 
    /// description above.
    /// Example 1:
    /// Input: S = "2-4A0r7-4k", K = 4
    /// Output: "24A0-R74K"
    /// Explanation: The string S has been split into two parts, each part 
    /// has 4 characters.
    /// Example 2:
    /// Input: S = "2-4A0r7-4k", K = 3
    /// Output: "24-A0R-74K"
    /// Explanation: The string S has been split into three parts, each part 
    /// has 3 characters except the first part as it could be shorter as said 
    /// above.
    /// Note:
    /// 1.The length of string S will not exceed 12,000, and K is a positive 
    ///   integer.
    /// 2.String S consists only of alphanumerical characters (a-z and/or A-Z 
    ///   and/or 0-9) and dashes(-).
    /// 3.String S is non-empty.
    /// </summary>
    string licenseKeyFormatting(string S, int K);

    /// <summary>
    /// Leet code #1233. Remove Sub-Folders from the Filesystem
    /// 
    /// Given a list of folders, remove all sub-folders in those folders and 
    /// return in any order the folders after removing.
    ///
    /// If a folder[i] is located within another folder[j], it is called a 
    /// sub-folder of it.
    /// 
    /// The format of a path is one or more concatenated strings of the 
    /// form: / followed by one or more lowercase English letters. For 
    /// example, /leetcode and /leetcode/problems are valid paths while an 
    /// empty string and / are not.
    /// 
    /// Example 1:
    ///
    /// Input: folder = ["/a","/a/b","/c/d","/c/d/e","/c/f"]
    /// Output: ["/a","/c/d","/c/f"]
    /// Explanation: Folders "/a/b/" is a subfolder of "/a" and "/c/d/e" is 
    /// inside of folder "/c/d" in our filesystem.
    ///
    /// Example 2:
    ///
    /// Input: folder = ["/a","/a/b/c","/a/b/d"]
    /// Output: ["/a"]
    /// Explanation: Folders "/a/b/c" and "/a/b/d/" will be removed because 
    /// they are subfolders of "/a".
    ///
    /// Example 3:
    ///
    /// Input: folder = ["/a/b/c","/a/b/ca","/a/b/d"]
    /// Output: ["/a/b/c","/a/b/ca","/a/b/d"]
    ///
    /// Constraints:
    /// 1. 1 <= folder.length <= 4 * 10^4
    /// 2. 2 <= folder[i].length <= 100
    /// 3. folder[i] contains only lowercase letters and '/'
    /// 4. folder[i] always starts with character '/'
    /// 5. Each folder name is unique.
    /// </summary>
    vector<string> removeSubfolders(vector<string> & folder); 

    /// <summary>
    /// Leet code #1234. Replace the Substring for Balanced String
    /// 
    /// You are given a string containing only 4 kinds of characters 
    /// 'Q', 'W', 'E' and 'R'.
    /// A string is said to be balanced if each of its characters appears 
    /// n/4 times where n is the length of the string.
    /// 
    /// Return the minimum length of the substring that can be replaced 
    /// with any other string of the same length to make the original 
    /// string s balanced.
    ///
    /// Return 0 if the string is already balanced.
    /// Example 1:
    ///Input: s = "QWER"
    /// Output: 0
    /// Explanation: s is already balanced.
    ///
    /// Example 2:
    ///
    /// Input: s = "QQWE"
    /// Output: 1
    /// Explanation: We need to replace a 'Q' to 'R', so that "RQWE" 
    /// (or "QRWE") is balanced.
    ///
    /// Example 3:
    /// 
    /// Input: s = "QQQW"
    /// Output: 2
    /// Explanation: We can replace the first "QQ" to "ER". 
    ///
    /// Example 4:
    /// Input: s = "QQQQ"
    /// Output: 3
    /// Explanation: We can replace the last 3 'Q' to make s = "QWER".
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 10^5
    /// 2. s.length is a multiple of 4
    /// 3. s contains only 'Q', 'W', 'E' and 'R'.
    /// </summary>
    int balancedString(string s);

    /// <summary>
    /// Leet code #1247. Minimum Swaps to Make Strings Equal
    ///  
    /// You are given two strings s1 and s2 of equal length consisting of 
    /// letters "x" and "y" only. Your task is to make these two strings equal 
    /// to each other. You can swap any two characters that belong to different 
    /// strings, which means: swap s1[i] and s2[j].
    ///
    /// Return the minimum number of swaps required to make s1 and s2 equal, 
    /// or return -1 if it is impossible to do so.
    ///
    /// Example 1:
    /// 
    /// Input: s1 = "xx", s2 = "yy"
    /// Output: 1
    /// Explanation: 
    /// Swap s1[0] and s2[1], s1 = "yx", s2 = "yx".
    ///
    /// Example 2: 
    ///
    /// Input: s1 = "xy", s2 = "yx"
    /// Output: 2
    /// Explanation: 
    /// Swap s1[0] and s2[0], s1 = "yy", s2 = "xx".
    /// Swap s1[0] and s2[1], s1 = "xy", s2 = "xy".
    /// Note that you can't swap s1[0] and s1[1] to make s1 equal to "yx", cause 
    /// we can only swap chars in different strings.
    ///
    /// Example 3:
    /// 
    /// Input: s1 = "xx", s2 = "xy"
    /// Output: -1
    ///
    /// Example 4:
    ///
    /// Input: s1 = "xxyyxyxyxx", s2 = "xyyxyxxxyx"
    /// Output: 4
    /// 
    /// Constraints:
    /// 1. 1 <= s1.length, s2.length <= 1000
    /// 2. s1, s2 only contain 'x' or 'y'.
    /// </summary>
    int minimumSwap(string s1, string s2);

    /// <summary>
    /// Leet code #415. Add Strings
    ///  
    /// Given two non-negative integers num1 and num2 represented as string, 
    /// return the sum of num1 and num2.
    ///
    /// Note:
    ///
    /// The length of both num1 and num2 is < 5100.
    /// Both num1 and num2 contains only digits 0-9.
    /// Both num1 and num2 does not contain any leading zero.
    /// You must not use any built-in BigInteger library or convert the 
    /// inputs to integer directly.
    /// </summary>
    string addStrings(string num1, string num2);

    /// <summary>
    /// Leet code #1268. Search Suggestions System
    /// 
    /// Given an array of strings products and a string searchWord. We want to 
    /// design a system that suggests at most three product names from 
    /// products after each character of searchWord is typed. Suggested 
    /// products should have common prefix with the searchWord. If there are 
    /// more than three products with a common prefix return the three 
    /// lexicographically minimums products.
    ///
    /// Return list of lists of the suggested products after each character of 
    /// searchWord is typed. 
    ///
    /// Example 1:
    /// 
    /// Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], 
    /// searchWord = "mouse"
    /// Output: [
    /// ["mobile","moneypot","monitor"],
    /// ["mobile","moneypot","monitor"],
    /// ["mouse","mousepad"],
    /// ["mouse","mousepad"],
    /// ["mouse","mousepad"]
    /// ]
    /// Explanation: products sorted lexicographically = ["mobile","moneypot",
    /// "monitor","mouse","mousepad"]
    /// After typing m and mo all products match and we show user 
    /// ["mobile","moneypot","monitor"]
    /// After typing mou, mous and mouse the system suggests 
    /// ["mouse","mousepad"]
    ///
    /// Example 2:
    ///
    /// Input: products = ["havana"], searchWord = "havana"
    /// Output: [["havana"],["havana"],["havana"],["havana"],["havana"],
    /// ["havana"]]
    ///
    /// Example 3:
    ///
    /// Input: products = ["bags","baggage","banner","box","cloths"], 
    /// searchWord = "bags"
    /// Output: [["baggage","bags","banner"],["baggage","bags","banner"],
    /// ["baggage","bags"],["bags"]]
    ///
    /// Example 4:
    ///
    /// Input: products = ["havana"], searchWord = "tatiana"
    /// Output: [[],[],[],[],[],[],[]]
    /// 
    /// Constraints:
    /// 1. 1 <= products.length <= 1000
    /// 2. 1 <= SUM products[i].length <= 2 * 10^4
    /// 3. All characters of products[i] are lower-case English letters.
    /// 4. 1 <= searchWord.length <= 1000
    /// 5. All characters of searchWord are lower-case English letters.
    /// </summary>
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord);

    /// <summary>
    /// Leetcode #1297. Maximum Number of Occurrences of a Substring
    /// 
    /// Given a string s, return the maximum number of ocurrences of any 
    /// substring under the following rules:
    ///
    /// The number of unique characters in the substring must be less than 
    /// or equal to maxLetters.
    /// The substring size must be between minSize and maxSize inclusive.
    ///
    /// Example 1:
    ///
    /// Input: s = "aababcaab", maxLetters = 2, minSize = 3, maxSize = 4
    /// Output: 2
    /// Explanation: Substring "aab" has 2 ocurrences in the original string.
    /// It satisfies the conditions, 2 unique letters and size 3 (between 
    /// minSize and maxSize).
    ///
    /// Example 2:
    /// 
    /// Input: s = "aaaa", maxLetters = 1, minSize = 3, maxSize = 3
    /// Output: 2
    /// Explanation: Substring "aaa" occur 2 times in the string. It can 
    /// overlap.
    ///
    /// Example 3:
    ///
    /// Input: s = "aabcabcab", maxLetters = 2, minSize = 2, maxSize = 3
    /// Output: 3
    ///
    /// Example 4:
    ///
    /// Input: s = "abcde", maxLetters = 2, minSize = 3, maxSize = 3
    /// Output: 0
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 10^5
    /// 2. 1 <= maxLetters <= 26
    /// 3. 1 <= minSize <= maxSize <= min(26, s.length)
    /// 4. s only contains lowercase English letters.
    /// </summary>
    int maxFreq(string s, int maxLetters, int minSize, int maxSize);

    /// <summary>
    /// Leet code #1309. Decrypt String from Alphabet to Integer Mapping
    /// 
    /// Easy
    ///
    /// Given a string s formed by digits ('0' - '9') and '#' . We want to 
    /// map s to English lowercase characters as follows:
    /// Characters ('a' to 'i') are represented by ('1' to '9') respectively.
    /// Characters ('j' to 'z') are represented by ('10#' to '26#') 
    /// respectively. 
    /// Return the string formed after mapping.
    /// It's guaranteed that a unique mapping will always exist.
    ///
    /// Example 1:
    /// Input: s = "10#11#12"
    /// Output: "jkab"
    /// Explanation: "j" -> "10#" , "k" -> "11#" , "a" -> "1" , "b" -> "2".
    ///
    /// Example 2:
    /// Input: s = "1326#"
    /// Output: "acz"
    ///
    /// Example 3:
    /// Input: s = "25#"
    /// Output: "y"
    /// Example 4:
    /// Input: s = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#"
    /// Output: "abcdefghijklmnopqrstuvwxyz"
    ///  
    /// Constraints:
    /// 1. 1 <= s.length <= 1000
    /// 2. s[i] only contains digits letters ('0'-'9') and '#' letter.
    /// 3. s will be valid string such that mapping is always possible.
    /// </summary>
    string freqAlphabets(string s);

    /// <summary>
    /// Leet code #1316. Distinct Echo Substrings
    ///
    /// Hard
    ///
    /// Return the number of distinct non-empty substrings of text that can be 
    /// written as the concatenation of some string with itself.
    /// 
    /// Example 1:
    /// Input: text = "abcabcabc"
    /// Output: 3
    /// Explanation: The 3 substrings are "abcabc", "bcabca" and "cabcab".
    /// Example 2:
    /// Input: text = "leetcodeleetcode"
    /// Output: 2
    /// Explanation: The 2 substrings are "ee" and "leetcodeleetcode".
    /// 
    /// Constraints:
    /// 1. 1 <= text.length <= 2000
    /// 2. text has only lowercase English letters.
    /// </summary>
    int distinctEchoSubstrings(string text);

    /// <summary>
    /// Leet code #459. Repeated Substring Pattern  
    /// Given a non-empty string check if it can be constructed by taking a substring of it 
    /// and appending multiple copies of the substring together. You may assume the given string 
    /// consists of lowercase English letters only and its length will not exceed 10000. 
    ///
    /// Example 1:
    /// Input: "abab"
    /// Output: True
    ///
    /// Explanation: It's the substring "ab" twice.
    /// Example 2:
    /// Input: "aba"
    /// Output: False
    /// 
    /// Example 3:
    /// Input: "abcabcabcabc" 
    /// Output: True
    /// Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)
    ///
    /// </summary>
    bool repeatedSubstringPattern(string s);

    /// <summary>
    /// Leet code #686. Repeated String Match
    /// Given two strings A and B, find the minimum number of times A has to 
    /// be repeated such that B is a substring of it. If no such solution, 
    /// return -1.
    ///
    /// For example, with A = "abcd" and B = "cdabcdab".
    /// Return 3, because by repeating A three times ("abcdabcdabcd"), 
    /// B is a substring of it; and B is not a substring of A repeated 
    /// two times ("abcdabcd").
    ///
    /// Note:
    /// The length of A and B will be between 1 and 10000.
    /// </summary>
    int repeatedStringMatch(string A, string B);

    /// <summary>
    /// Leet code #796. Rotate String
    /// 
    /// We are given two strings, A and B. 
    /// A shift on A consists of taking string A and moving the leftmost 
    /// character to the rightmost position. For example, if A = 'abcde', 
    /// then it will be 'bcdea' after one shift on A. Return True if and 
    /// only if A can become B after some number of shifts on A.
    ///
    /// Example 1:
    /// Input: A = 'abcde', B = 'cdeab' 
    /// Output: true
    ///
    /// Example 2:
    /// Input: A = 'abcde', B = 'abced' 
    /// Output: false
    /// Note:
    /// 1. A and B will have length at most 100.
    /// </summary>
    bool rotateString(string A, string B);

    /// <summary>
    /// Leet code #1181. Before and After Puzzle
    /// 
    /// Given a list of phrases, generate a list of Before and After puzzles.
    /// A phrase is a string that consists of lowercase English letters and 
    /// spaces only. No space appears in the start or the end of a phrase. 
    /// There are no consecutive spaces in a phrase.
    /// Before and After puzzles are phrases that are formed by merging two 
    /// phrases where the last word of the first phrase is the same as the 
    /// first word of the second phrase.
    /// Return the Before and After puzzles that can be formed by every two 
    /// phrases phrases[i] and phrases[j] where i != j. Note that the order 
    /// of matching two phrases matters, we want to consider both orders.
    /// You should return a list of distinct strings sorted lexicographically.
    /// 
    /// Example 1:
    /// Input: phrases = ["writing code","code rocks"]
    /// Output: ["writing code rocks"]
    ///
    /// Example 2:
    /// Input: phrases = ["mission statement",
    ///                   "a quick bite to eat",
    ///                   "a chip off the old block",
    ///                   "chocolate bar",
    ///                   "mission impossible",
    ///                   "a man on a mission",
    ///                   "block party",
    ///                   "eat my words",
    ///                   "bar of soap"]
    /// Output: ["a chip off the old block party",
    ///          "a man on a mission impossible",
    ///          "a man on a mission statement",
    ///          "a quick bite to eat my words",
    ///          "chocolate bar of soap"]
    ///
    /// Example 3:
    /// Input: phrases = ["a","b","a"]
    /// Output: ["a"]
    /// 
    /// Constraints:
    /// 1. 1 <= phrases.length <= 100
    /// 2. 1 <= phrases[i].length <= 100
    /// </summary>
    vector<string> beforeAndAfterPuzzles(vector<string>& phrases);

    /// <summary>
    /// Leet code #1189. Maximum Number of Balloons
    /// 
    /// Given a string text, you want to use the characters of text to form as 
    /// many instances of the word "balloon" as possible.
    /// You can use each character in text at most once. Return the maximum number 
    /// of instances that can be formed.
    /// 
    /// Example 1:
    ///
    /// Input: text = "nlaebolko"
    /// Output: 1
    /// Example 2:
    ///
    /// Input: text = "loonbalxballpoon"
    /// Output: 2
    /// Example 3:
    /// Input: text = "leetcode"
    /// Output: 0
    /// 
    /// Constraints:
    /// 1. 1 <= text.length <= 10^4
    /// 2. text consists of lower case English letters only.
    /// </summary>
    int maxNumberOfBalloons(string text);

    /// <summary>
    /// Leet code #1170. Compare Strings by Frequency of the Smallest Character
    /// </summary>
    int numSmallerByFrequency(string word);

    /// <summary>
    /// Leet code #1170. Compare Strings by Frequency of the Smallest Character
    ///
    /// Let's define a function f(s) over a non-empty string s, which calculates 
    /// the frequency of the smallest character in s. For example, if s = "dcce" 
    /// then f(s) = 2 because the smallest character is "c" and its frequency 
    /// is 2.
    ///
    /// Now, given string arrays queries and words, return an integer array 
    /// answer, where each answer[i] is the number of words such that 
    /// f(queries[i]) < f(W), where W is a word in words.
    ///
    /// Example 1:
    /// Input: queries = ["cbd"], words = ["zaaaz"]
    /// Output: [1]
    /// Explanation: On the first query we have f("cbd") = 1, 
    /// f("zaaaz") = 3 so f("cbd") < f("zaaaz").
    ///
    /// Example 2:
    /// Input: queries = ["bbb","cc"], words = ["a","aa","aaa","aaaa"]
    /// Output: [1,2]
    /// Explanation: On the first query only f("bbb") < f("aaaa"). On the second 
    /// query both f("aaa") and f("aaaa") are both > f("cc").
    /// 
    /// Constraints:
    /// 1. 1 <= queries.length <= 2000
    /// 2. 1 <= words.length <= 2000
    /// 3. 1 <= queries[i].length, words[i].length <= 10
    /// 4. queries[i][j], words[i][j] are English lowercase letters.
    /// </summary>
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words);

    /// <summary>
    /// Leet code #1165. Single-Row Keyboard
    ///
    /// There is a special keyboard with all keys in a single row.
    /// Given a string keyboard of length 26 indicating the layout of the 
    /// keyboard (indexed from 0 to 25), initially your finger is at index 0. 
    /// To type a character, you have to move your finger to the index of the 
    /// desired character. The time taken to move your finger from index i to 
    /// index j is |i - j|.
    ///
    /// You want to type a string word. Write a function to calculate how 
    /// much time it takes to type it with one finger.
    /// 
    /// Example 1:
    ///
    /// Input: keyboard = "abcdefghijklmnopqrstuvwxyz", word = "cba"
    /// Output: 4
    /// Explanation: The index moves from 0 to 2 to write 'c' then to 1 to 
    /// write 'b' then to 0 again to write 'a'.
    /// Total time = 2 + 1 + 1 = 4. 
    ///
    /// Example 2:
    /// 
    /// Input: keyboard = "pqrstuvwxyzabcdefghijklmno", word = "leetcode"
    /// Output: 73
    ///  
    /// Constraints:
    /// 1. keyboard.length == 26
    /// 2. keyboard contains each English lowercase letter exactly once in 
    ///    some order.
    /// 3. 1 <= word.length <= 10^4
    /// 4. word[i] is an English lowercase letter.
    /// </summary>
    int calculateTime(string keyboard, string word);

    /// <summary>
    /// Leet code #830. Positions of Large Groups
    /// 
    /// In a string S of lowercase letters, these letters form consecutive 
    /// groups of the same character.
    ///
    /// For example, a string like S = "abbxxxxzyy" has the groups "a", "bb", 
    /// "xxxx", "z" and "yy".
    ///
    /// Call a group large if it has 3 or more characters.  We would like the 
    /// starting and ending positions of every large group.
    /// 
    /// The final answer should be in lexicographic order.
    ///
    /// Example 1:
    ///
    /// Input: "abbxxxxzzy"
    /// Output: [[3,6]]
    /// Explanation: "xxxx" is the single large group with starting  3 and 
    /// ending positions 6.
    ///
    /// Example 2:
    ///
    /// Input: "abc"
    /// Output: []
    /// Explanation: We have "a","b" and "c" but no large group.
    ///
    /// Example 3:
    ///
    /// Input: "abcdddeeeeaabbbcd"
    /// Output: [[3,5],[6,9],[12,14]]
    ///
    /// Note:  1. 1 <= S.length <= 1000
    /// </summary>
    vector<vector<int>> largeGroupPositions(string S);

    /// <summary>
    /// Leet code #58. Length of Last Word
    ///
    /// Given a string s consists of upper/lower-case alphabets and empty 
    /// space characters ' ', 
    /// return the length of last word in the string.
    /// If the last word does not exist, return 0.
    /// Note: A word is defined as a character sequence consists of non-space 
    /// characters only. 
    /// For example,
    /// Given s = "Hello World",
    /// return 5.
    /// </summary>
    int lengthOfLastWord(string s);

    /// <summary>
    /// Leet code #165. Compare Version Numbers
    ///
    /// Compare two version numbers version1 and version2.
    /// If version1 > version2 return 1, if version1 < version2 return -1, 
    /// otherwise return 0. 
    /// You may assume that the version strings are non-empty and contain 
    /// only digits and the . character.
    /// The . character does not represent a decimal point and is used to 
    /// separate number sequences.
    /// For instance, 2.5 is not "two and a half" or "half way to version 
    /// three", it is the fifth second-level revision of the second 
    /// first-level revision.
    /// Here is an example of version numbers ordering:
    /// 0.1 < 1.1 < 1.2 < 13.37 
    /// </summary>
    int compareVersion(string version1, string version2);

    /// <summary>
    /// Leet code #71. Simplify Path
    ///
    /// Medium
    ///
    /// Given an absolute path for a file (Unix-style), simplify it. Or in other 
    /// words, convert it to the canonical path.
    ///
    /// In a UNIX-style file system, a period . refers to the current directory. 
    /// Furthermore, a double period .. moves the directory up a level. For more 
    /// information, see: Absolute path vs relative path in Linux/Unix
    ///
    /// Note that the returned canonical path must always begin with a slash /, 
    /// and there must be only a single slash / between two directory names. The 
    /// last directory name (if it exists) must not end with a trailing /. Also, 
    /// the canonical path must be the shortest string representing the absolute 
    /// path.
    ///
    /// Example 1:
    /// Input: "/home/"
    /// Output: "/home"
    /// Explanation: Note that there is no trailing slash after the last directory 
    /// name.
    ///
    /// Example 2:
    /// Input: "/../"
    /// Output: "/"
    /// Explanation: Going one level up from the root directory is a no-op, as the 
    /// root level is the highest level you can go.
    ///
    /// Example 3:
    /// Input: "/home//foo/"
    /// Output: "/home/foo"
    /// Explanation: In the canonical path, multiple consecutive slashes are 
    /// replaced by a single one.
    ///
    /// Example 4:
    /// Input: "/a/./b/../../c/"
    /// Output: "/c"
    ///
    /// Example 5:
    /// Input: "/a/../../b/../c//.//"
    /// Output: "/c"
    ///
    /// Example 6:
    ///
    /// Input: "/a//b////c/d//././/.."
    /// Output: "/a/b/c"
    /// </summary>
    string simplifyPath(string path);

    /// <summary>
    /// Leet code #151. Reverse Words in a String
    /// Given an input string, reverse the string word by word. 
    /// For example,
    ///   Given s = "the sky is blue",
    ///   return "blue is sky the". 
    /// Update (2015-02-12):
    /// For C programmers: Try to solve it in-place in O(1) space. 
    /// </summary>
    string reverseWords(string s);

    /// <summary>
    /// Leet code #186. Reverse Words in a String II  
    /// 
    /// Given an input string, reverse the string word by word. A word 
    /// is defined as a sequence of non-space characters. 
    /// The input string does not contain leading or trailing spaces and 
    /// the words are always separated by a single space.  
    /// For example,
    /// Given s = "the sky is blue",
    /// return "blue is sky the".
    /// Could you do it in-place without allocating extra space? 
    /// </summary>
    void reverseWordsII(string &s);

    /// <summary>
    /// Leet code #344. Reverse String 
    ///
    /// Write a function that takes a string as input and returns the string 
    /// reversed.
    /// Example:
    ///  Given s = "hello", return "olleh".	
    /// </summary>
    string reverseString(string s);

    /// <summary>
    /// Leet code #14. Longest Common Prefix 
    ///
    /// Write a function to find the longest common prefix string amongst 
    /// an array of strings. 
    /// </summary>
    string longestCommonPrefix(vector<string>& strs);

    /// <summary>
    /// Leet code #68. Text Justification 
    ///
    /// Given an array of words and a length L, format the text such that 
    /// each line has exactly L characters and is fully (left and right) 
    /// justified. 
    /// You should pack your words in a greedy approach; that is, pack as 
    /// many words as you can in each line. 
    /// Pad extra spaces ' ' when necessary so that each line has exactly L 
    /// characters. 
    /// Extra spaces between words should be distributed as evenly as 
    /// possible. 
    /// If the number of spaces on a line do not divide evenly between words, 
    /// the empty slots on the left will be assigned more spaces than the 
    /// slots on the right. 
    /// For the last line of text, it should be left justified and no extra 
    /// space is inserted between words. 
    /// For example,
    /// words: ["This", "is", "an", "example", "of", "text", "justification."]
    /// L: 16. 
    /// Return the formatted lines as:
    /// [
    ///   "This    is    an",
    ///   "example  of text",
    ///   "justification.  "
    /// ]
    /// </summary>
    vector<string> fullJustify(vector<string>& words, int maxWidth);

    /// <summary>
    /// Leet code #76. Minimum Window Substring 
    ///
    /// Given a string S and a string T, find the minimum window in S which 
    /// will contain all the characters in T in complexity O(n).
    /// For example, 
    /// S = "ADOBECODEBANC"
    /// T = "ABC"
    /// Minimum window is "BANC".  
    /// Note:
    /// If there is no such window in S that covers all characters in T, 
    /// return the empty string "". 
    /// If there are multiple such windows, you are guaranteed that there 
    /// will always be only one unique minimum window in S. 
    /// </summary> 
    string minWindow(string s, string t);

    /// <summary>
    /// Leet code #3. Longest Substring Without Repeating Characters
    /// Given a string, find the length of the longest substring without 
    /// repeating characters.
    /// Examples:
    /// Given "abcabcbb", the answer is "abc", which the length is 3.
    /// Given "bbbbb", the answer is "b", with the length of 1.
    /// Given "pwwkew", the answer is "wke", with the length of 3. 
    /// Note that the answer must be a substring, "pwke" is a subsequence 
    /// and not a substring.
    /// </summary>
    int lengthOfLongestSubstring(string s);

    /// <summary>
    /// Leet code #242. Valid Anagram 
    ///
    /// Given two strings s and t, write a function to determine if t is an 
    /// anagram of s.
    /// For example,  
    /// s = "anagram", t = "nagaram", return true.
    /// s = "rat", t = "car", return false.
    /// Note:
    ///   You may assume the string contains only lowercase alphabets.
    /// Follow up:
    ///   What if the inputs contain unicode characters? How would you adapt 
    ///   your solution to such case? 
    /// </summary>
    bool isAnagram(string s, string t);

    /// <summary>
    /// Leet code #383. Ransom Note
    ///
    /// Given an arbitrary ransom note string and another string containing 
    /// letters from all the magazines, write a function that will return 
    /// true if the ransom note can be constructed from the magazines; 
    /// otherwise, it will return false. 
    ///
    /// Each letter in the magazine string can only be used once in your 
    /// ransom note. 
    /// Note:
    /// You may assume that both strings contain only lowercase letters. 
    /// canConstruct("a", "b") -> false
    /// canConstruct("aa", "ab") -> false
    /// canConstruct("aa", "aab") -> true
    /// </summary>
    bool canConstruct(string ransomNote, string magazine);

    /// <summary>
    /// Leet code #387. First Unique Character in a String
    ///
    /// Given a string, find the first non-repeating character in it and 
    /// return it's index. If it doesn't exist, return -1. 
    /// Examples: 
    /// s = "leetcode"
    /// return 0.
    /// s = "loveleetcode",
    /// return 2.
    /// Note: You may assume the string contain only lowercase letters. 
    /// </summary>
    int firstUniqChar(string s);

    /// <summary>
    /// Leet code #423. Reconstruct Original Digits from English   
    ///
    /// Given a non-empty string containing an out-of-order English representation
    /// of digits 0-9, output the digits in ascending order.
    /// Note:
    /// 1.Input contains only lowercase English letters.
    /// 2.Input is guaranteed to be valid and can be transformed to its original 
    ///   digits.That means invalid inputs such as "abc" or "zerone" are not 
    ///   permitted.
    /// 3.Input length is less than 50,000.
    /// Example 1:  
    /// Input: "owoztneoer" 
    /// Output: "012"
    /// Input: "fviefuro"
    /// Example 2:
    /// Output: "45"
    /// </summary>
    string originalDigits(string s);

    /// <summary>
    /// Leet code #434. Number of Segments in a String
    ///
    /// Count the number of segments in a string, where a segment is defined 
    /// to be a contiguous sequence of non-space characters.
    /// Please note that the string does not contain any non-printable 
    /// characters.
    /// Example:
    /// Input: "Hello, my name is John"
    /// Output: 5
    /// </summary>
    int countSegments(string s);

    /// <summary>
    /// Leet code #438. Find All Anagrams in a String
    ///
    /// Given a string s and a non-empty string p, find all the start 
    /// indices of p's anagrams in s. 
    /// Strings consists of lowercase English letters only and the length 
    /// of both strings s and p will not be larger than 20,100.
    /// The order of output does not matter.
    ///
    /// Example 1: 
    /// Input:
    /// s: "cbaebabacd" p: "abc"
    /// Output:
    /// [0, 6]
    /// Explanation:
    /// The substring with start index = 0 is "cba", which is an anagram of "abc".
    /// The substring with start index = 6 is "bac", which is an anagram of "abc".
    ///
    /// Example 2: 
    /// Input:
    /// s: "abab" p: "ab"
    /// Output:
    /// [0, 1, 2]
    /// Explanation:
    /// The substring with start index = 0 is "ab", which is an anagram of "ab".
    /// The substring with start index = 1 is "ba", which is an anagram of "ab".
    /// The substring with start index = 2 is "ab", which is an anagram of "ab".
    /// </summary>
    vector<int> findAnagrams(string s, string p);

    /// <summary>
    /// Check if this is a valid IPv4 address
    /// </summary>
    bool checkIPv4Address(vector<string> addressList);

    /// <summary>
    /// Check if this is a valid IPv6 address
    /// </summary>
    bool checkIPv6Address(vector<string> addressList);

    /// <summary>
    /// Leet code #468. Validate IP Address        
    ///
    /// In this problem, your job to write a function to check whether a input 
    /// string is a valid IPv4 address or IPv6 address or neither. IPv4 
    /// addresses are canonically represented in dot-decimal notation, which 
    /// consists of four decimal numbers, each ranging from 0 to 255, separated 
    /// by dots ("."), e.g.,172.16.254.1; 
    /// Besides, you need to keep in mind that leading zeros in the IPv4 is 
    /// illegal. For example, the address 172.16.254.01 is illegal. 
    /// IPv6 addresses are represented as eight groups of four hexadecimal 
    /// digits, each group representing 16 bits. 
    /// The groups are separated by colons (":"). For example, the 
    /// address 2001:0db8:85a3:0000:0000:8a2e:0370:7334 is a legal one. 
    /// Also, we could omit some leading zeros among four hexadecimal digits 
    /// and some low-case characters in the address to upper-case ones, 
    /// so 2001:db8:85a3:0:0:8A2E:0370:7334 is also a valid IPv6 address(Omit 
    /// leading zeros and using upper cases). 
    /// However, we don't replace a consecutive group of zero value with a 
    /// single empty group using two consecutive colons (::) to pursue 
    /// simplicity. For example, 2001:0db8:85a3::8A2E:0370:7334 is an invalid 
    /// IPv6 address. 
    /// Besides, you need to keep in mind that extra leading zeros in the 
    //// IPv6 is also illegal. For example, the address 
    /// 02001:0db8:85a3:0000:0000:8a2e:0370:7334 is also illegal. 
    /// Note: You could assume there is no extra space in the test cases and 
    /// there may some special characters in the input string. 
    /// Example 1:
    /// Input: "172.16.254.1"
    /// Output: "IPv4"
    /// Explanation: This is a valid IPv4 address, return "IPv4".
    /// Example 2:
    /// Input: "2001:0db8:85a3:0:0:8A2E:0370:7334"
    /// Output: "IPv6"
    /// Explanation: This is a valid IPv6 address, return "IPv6".
    /// Example 3:
    /// Input: "256.256.256.256"
    /// Output: "Neither"
    /// Explanation: This is neither a IPv4 address nor a IPv6 address.
    /// </summary>
    string validIPAddress(string IP);

    /// <summary>
    /// Leet code #520. Detect Capital   
    /// 
    /// Given a word, you need to judge whether the usage of capitals in it is right or not. 
    /// We define the usage of capitals in a word to be right when one of the following cases holds: 
    /// 1.All letters in this word are capitals, like "USA".
    /// 2.All letters in this word are not capitals, like "leetcode".
    /// 3.Only the first letter in this word is capital if it has more than one letter, like "Google".
    /// Otherwise, we define that this word doesn't use capitals in a right way. 
    ///
    /// Example 1:
    ///
    /// Input: "USA"
    /// Output: True
    /// 
    /// Example 2:
    /// Input: "FlaG"
    /// Output: False
    /// Note: The input will be a non-empty word consisting of uppercase and lowercase latin letters. 
    /// </summary>
    bool detectCapitalUse(string word);

    /// <summary>
    /// Leet code #49. Group Anagrams   
    /// Given an array of strings, group anagrams together.
    /// For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"],  
    /// Return: 
    /// [
    ///   ["ate", "eat","tea"],
    ///   ["nat","tan"],
    ///   ["bat"]
    /// ]
    /// </summary>
    vector<vector<string>> groupAnagrams(vector<string>& strs);

    /// <summary>
    /// Leet code #1178. Number of Valid Words for Each Puzzle
    /// 
    /// With respect to a given puzzle string, a word is valid if both the 
    /// following conditions are satisfied: 
    /// word contains the first letter of puzzle.
    /// For each letter in word, that letter is in puzzle.
    /// For example, if the puzzle is "abcdefg", then valid words are "faced", 
    /// "cabbage", and "baggage"; while invalid words are "beefed" (doesn't 
    /// include "a") and "based" (includes "s" which isn't in the puzzle).
    /// Return an array answer, where answer[i] is the number of words in the 
    /// given word list words that are valid with respect to the puzzle puzzles[i]. 
    /// 
    /// Example :
    /// Input: 
    /// words = ["aaaa","asas","able","ability","actt","actor","access"], 
    /// puzzles = ["aboveyz","abrodyz","abslute","absoryz","actresz","gaswxyz"]
    /// Output: [1,1,3,2,4,0]
    /// Explanation:
    /// 1 valid word for "aboveyz" : "aaaa" 
    /// 1 valid word for "abrodyz" : "aaaa"
    /// 3 valid words for "abslute" : "aaaa", "asas", "able"
    /// 2 valid words for "absoryz" : "aaaa", "asas"
    /// 4 valid words for "actresz" : "aaaa", "asas", "actt", "access"
    /// There're no valid words for "gaswxyz" cause none of the words in the 
    /// list contains letter 'g'.
    /// 
    /// Constraints:
    /// 1. 1 <= words.length <= 10^5
    /// 2. 4 <= words[i].length <= 50
    /// 3. 1 <= puzzles.length <= 10^4
    /// 4. puzzles[i].length == 7
    /// 5. words[i][j], puzzles[i][j] are English lowercase letters.
    /// 6. Each puzzles[i] doesn't contain repeated characters.
    /// </summary>
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles);

    /// <summary>
    /// Leet code #224. Basic Calculator    
    /// Implement a basic calculator to evaluate a simple expression string.
    /// The expression string may contain open ( and closing parentheses ), the plus + or minus sign -, non-negative integers and empty spaces .
    /// You may assume that the given expression is always valid. 
    /// Some examples:
    /// "1 + 1" = 2
    /// " 2-1 + 2 " = 3
    /// "(1+(4+5+2)-3)+(6+8)" = 23	
    /// </summary>
    int calculate(string s);

    /// <summary>
    /// Leet code #227. Basic Calculator II 
    /// </summary>   
    inline int calculateII(int a, int b, char op);

    /// <summary>
    /// Leet code #227. Basic Calculator II 
    /// Implement a basic calculator to evaluate a simple expression string. 
    /// The expression string contains only non-negative integers, +, -, *, / 
    /// operators and empty spaces . The integer division should truncate 
    /// toward zero.
    /// You may assume that the given expression is always valid.
    /// Some examples:
    /// "3+2*2" = 7
    /// " 3/2 " = 1
    /// " 3+5 / 2 " = 5
    /// Note: Do not use the eval built-in library function. 
    /// </summary>   
    int calculateII(string s);

    /// <summary>
    /// Leet code #772. Basic Calculator III   
    /// </summary>
    string parseExpressionToken(string s, int& index);

    /// <summary>
    /// Leet code #772. Basic Calculator III   
    ///
    /// Implement a basic calculator to evaluate a simple expression string.
    /// The expression string may contain open ( and closing parentheses ), 
    /// the plus + or minus sign -, non-negative integers and empty spaces.
    /// 
    /// The expression string contains only non-negative integers, +, -, *, / 
    /// operators , open ( and closing parentheses ) and empty spaces . 
    /// The integer division should truncate toward zero.
    ///
    /// You may assume that the given expression is always valid. All 
    /// intermediate results will be in the range of [-2147483648, 2147483647].
    ///
    /// Some examples:
    ///
    /// "1 + 1" = 2
    /// " 6-4 / 2 " = 4
    /// "2*(5+5*2)/3+(6/2+8)" = 21
    /// "(2+6* 3+5- (3*14/7+2)*5)+3"=-12
    /// </summary>
    int calculateIII(string s);

    /// <summary>
    /// Leet code #772. Basic Calculator III   
    /// </summary>
    int parseTerm(vector<string>& tokens, int& index);

    /// <summary>
    /// Leet code #772. Basic Calculator III   
    /// </summary>
    int parseFactor(vector<string>& tokens, int& index);

    /// <summary>
    /// Leet code #772. Basic Calculator III   
    /// </summary>
    int parseExpression(vector<string>& tokens, int& index);

    /// <summary>
    /// Leet code #770. Basic Calculator IV   
    /// </summary>
    vector<string> polyToString(map<vector<string>, int> &ploy_map);

    /// <summary>
    /// Leet code #770. Basic Calculator IV   
    /// </summary>
    void calculatePolyExpression(
        stack<map<vector<string>, int>>& operands,
        stack<string>& operators);

    /// <summary>
    /// Leet code #770. Basic Calculator IV   
    /// </summary>
    map<vector<string>, int> parsePolyExpression(string& s, int& index,
        unordered_map<string, int>& eval_map);

    /// <summary>
    /// Leet code #770. Basic Calculator IV    
    ///
    /// Given an expression such as expression = "e + 8 - a + 5" and an 
    /// evaluation map such as {"e": 1} (given in terms of evalvars = ["e"] 
    /// and evalints = [1]), return a list of tokens representing the 
    /// simplified expression, such as ["-1*a","14"]
    ///
    /// An expression alternates chunks and symbols, with a space separating 
    /// each chunk and symbol.
    /// A chunk is either an expression in parentheses, a variable, or a 
    /// non-negative integer.
    /// A variable is a string of lowercase letters (not including digits.) 
    /// Note that variables can be multiple letters, and note that variables 
    /// never have a leading coefficient or unary operator like "2x" or "-x".
    /// 
    /// Expressions are evaluated in the usual order: brackets first, then 
    /// multiplication, then addition and subtraction. For example, 
    /// expression = "1 + 2 * 3" has an answer of ["7"].
    ///
    /// The format of the output is as follows:
    ///
    /// For each term of free variables with non-zero coefficient, we write 
    /// the free variables within a term in sorted order lexicographically. 
    /// For example, we would never write a term like "b*a*c", only "a*b*c".
    /// Terms have degree equal to the number of free variables being 
    /// multiplied, counting multiplicity. (For example, "a*a*b*c" has degree 
    /// 4.) We write the largest degree terms of our answer first, breaking 
    /// ties by lexicographic order ignoring the leading coefficient of the 
    /// term.
    /// The leading coefficient of the term is placed directly to the left 
    /// with an asterisk separating it from the variables (if they exist.)  
    /// A leading coefficient of 1 is still printed.
    /// An example of a well formatted answer is ["-2*a*a*a", "3*a*a*b", 
    /// "3*b*b", "4*a", "5*c", "-6"] 
    /// Terms (including constant terms) with coefficient 0 are not included.  
    /// For example, an expression of "0" has an output of [].
    ///
    /// Examples:
    ///
    /// Input: expression = "e + 8 - a + 5", evalvars = ["e"], evalints = [1]
    /// Output: ["-1*a","14"]
    ///
    /// Input: expression = "e - 8 + temperature - pressure",
    /// evalvars = ["e", "temperature"], evalints = [1, 12]
    /// Output: ["-1*pressure","5"]
    ///
    /// Input: expression = "(e + 8) * (e - 8)", evalvars = [], evalints = []
    /// Output: ["1*e*e","-64"]
    ///
    /// Input: expression = "7 - 7", evalvars = [], evalints = []
    /// Output: []
    ///
    /// Input: expression = "a * b * c + b * a * c * 4", evalvars = [], 
    /// evalints = []
    /// Output: ["5*a*b*c"]
    ///
    /// Input: expression = "((a - b) * (b - c) + (c - a)) * ((a - b) + 
    ///                       (b - c) * (c - a))",
    /// evalvars = [], evalints = []
    /// Output: 
    /// ["-1*a*a*b*b","2*a*a*b*c","-1*a*a*c*c","1*a*b*b*b","-1*a*b*b*c",
    ///  "-1*a*b*c*c","1*a*c*c*c","-1*b*b*b*c","2*b*b*c*c","-1*b*c*c*c",
    ///  "2*a*a*b", "-2*a*a*c","-2*a*b*b","2*a*c*c","1*b*b*b","-1*b*b*c",
    ///  "1*b*c*c","-1*c*c*c","-1*a*a","1*a*b","1*a*c","-1*b*c"]
    /// Note:
    /// 1. expression will have length in range [1, 250].
    /// 2. evalvars, evalints will have equal lengths in range [0, 100].
    /// </summary>
    vector<string> basicCalculatorIV(string expression, vector<string>& evalvars,
        vector<int>& evalints);

    /// <summary>
    /// Leet code #388. Longest Absolute File Path    
    /// 
    /// Suppose we abstract our file system by a string in the following manner:
    /// The string "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext" represents:
    /// dir
    ///     subdir1
    ///     subdir2
    ///         file.ext
    /// The directory dir contains an empty sub-directory subdir1 and a sub-directory subdir2 containing a file file.ext.
    /// The string "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext" represents:
    /// dir
    ///     subdir1
    ///         file1.ext
    ///         subsubdir1
    ///     subdir2
    ///         subsubdir2
    ///             file2.ext
    /// The directory dir contains two sub-directories subdir1 and subdir2. subdir1 contains a file 
    /// file1.ext and an empty second-level sub-directory subsubdir1. subdir2 contains a second-level 
    /// sub-directory subsubdir2 containing a file file2.ext.
    /// We are interested in finding the longest (number of characters) absolute path to a file within 
    /// our file system. For example, in the second example above, the longest absolute path is 
    /// "dir/subdir2/subsubdir2/file2.ext", and its length is 32 (not including the double quotes).
    /// Given a string representing the file system in the above format, return the length of 
    /// the longest absolute path to file in the abstracted file system. If there is no file in the system, return 0.
    /// Note:
    /// The name of a file contains at least a . and an extension.
    /// The name of a directory or sub-directory will not contain a ..
    ///  ime complexity required: O(n) where n is the size of the input string.
    /// Notice that a/aa/aaa/file1.txt is not the longest file path, if there is another path aaaaaaaaaaaaaaaaaaaaa/sth.png.
    /// </summary>
    int lengthLongestPath(string input);

    /// <summary>
    /// Leet code #424. Longest Repeating Character Replacement    
    /// 
    /// Given a string that consists of only uppercase English letters, 
    /// you can replace any letter in the string with another letter at 
    /// most k times. Find the length of a longest substring containing 
    /// all repeating letters you can get after performing the above 
    /// operations.
    /// Note:
    /// Both the string's length and k will not exceed 104. 
    ///
    /// Example 1: 
    /// Input:
    /// s = "ABAB", k = 2
    /// Output:
    /// 4
    /// Explanation:
    /// Replace the two 'A's with two 'B's or vice versa.
    /// 
    /// Example 2: 
    /// Input:
    /// s = "AABABBA", k = 1
    /// Output:
    /// 4
    /// Explanation:
    /// Replace the one 'A' in the middle with 'B' and form "AABBBBA".
    /// The substring "BBBB" has the longest repeating letters, which is 4.
    /// </summary>
    int characterReplacement(string s, int k);

    /// <summary>
    /// Leet code #395. Longest Substring with At Least K Repeating Characters
    /// 
    /// Find the length of the longest substring T of a given string 
    /// (consists of lowercase letters only) such that every character in T appears no less than k times. 
    ///
    /// Example 1: 
    /// Input:
    /// s = "aaabb", k = 3
    /// Output:
    /// 3
    /// The longest substring is "aaa", as 'a' is repeated 3 times.
    ///
    /// Example 2: 
    /// Input:
    /// s = "ababbc", k = 2
    /// Output:
    /// 5
    /// The longest substring is "ababb", as 'a' is repeated 2 times and 'b' is repeated 3 times.
    /// </summary>
    int longestSubstring(string s, int k);

    /// <summary>
    /// Leet code #1160. Find Words That Can Be Formed by Characters
    /// 
    /// You are given an array of strings words and a string chars.
    /// A string is good if it can be formed by characters from chars 
    /// (each character can only be used once).
    /// Return the sum of lengths of all good strings in words.
    /// 
    /// Example 1:
    /// Input: words = ["cat","bt","hat","tree"], chars = "atach"
    /// Output: 6
    /// Explanation: 
    /// The strings that can be formed are "cat" and "hat" so the answer 
    /// is 3 + 3 = 6.
    ///
    /// Example 2:
    /// Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
    /// Output: 10
    /// Explanation: 
    /// The strings that can be formed are "hello" and "world" so the answer 
    /// is 5 + 5 = 10.
    /// 
    /// Note:
    /// 1. 1 <= words.length <= 1000
    /// 2. 1 <= words[i].length, chars.length <= 100
    /// 3. All strings contain lowercase English letters only.
    /// </summary>
    int countCharacters(vector<string>& words, string chars);

    /// <summary>
    /// Leet code #1119. Remove Vowels from a String
    /// 
    /// Given a string S, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it,
    /// and return the new string.
    ///
    /// Example 1:
    ///
    /// Input: "leetcodeisacommunityforcoders"
    /// Output: "ltcdscmmntyfrcdrs"
    ///
    /// Example 2:
    ///
    /// Input: "aeiou"
    /// Output: ""
    ///
    /// Note:
    ///
    /// 1. S consists of lowercase English letters only.
    /// 2. 1 <= S.length <= 1000
    /// </summary>
    string removeVowels(string S);

    /// <summary>
    /// Leet code #1106. Parsing A Boolean Expression
    /// </summary>
    bool parseBoolExprAnd(string expression, int &pos);

    /// <summary>
    /// Leet code #1106. Parsing A Boolean Expression
    /// </summary>
    bool parseBoolExprOr(string expression, int &pos);

    /// <summary>
    /// Leet code #1106. Parsing A Boolean Expression
    /// </summary>
    bool parseBoolExprNot(string expression, int &pos);

    /// <summary>
    /// Leet code #1106. Parsing A Boolean Expression
    /// </summary>
    bool parseBoolExpr(string expression, int &pos);

    /// <summary>
    /// Leet code #1106. Parsing A Boolean Expression
    /// 
    /// Return the result of evaluating a given boolean expression, represented 
    /// as a string.
    ///
    /// An expression can either be:
    ///
    /// "t", evaluating to True;
    /// "f", evaluating to False;
    /// "!(expr)", evaluating to the logical NOT of the inner expression expr;
    /// "&(expr1,expr2,...)", evaluating to the logical AND of 2 or more inner 
    /// expressions expr1, expr2, ...;
    /// "|(expr1,expr2,...)", evaluating to the logical OR of 2 or more inner 
    /// expressions expr1, expr2, ...
    ///
    /// Example 1:
    /// Input: expression = "!(f)"
    /// Output: true
    ///
    /// Example 2:
    /// Input: expression = "|(f,t)"
    /// Output: true
    ///
    /// Example 3:
    /// Input: expression = "&(t,f)"
    /// Output: false
    ///
    /// Example 4:
    /// Input: expression = "|(&(t,f,t),!(t))"
    /// Output: false
    /// 
    /// Constraints:
    ///
    /// 1. 1 <= expression.length <= 20000
    /// 2. expression[i] consists of characters in {'(', ')', '&', '|', '!', 
    ///    't', 'f', ','}.
    /// 3. expression is a valid expression representing a boolean, as given in 
    ///    the description.
    /// </summary>
    bool parseBoolExpr(string expression);

    /// <summary>
    /// Leet code #1108. Defanging an IP Address
    /// 
    /// Given a valid (IPv4) IP address, return a defanged version of that IP 
    /// address.
    ///
    /// A defanged IP address replaces every period "." with "[.]".
    /// 
    /// Example 1:
    /// 
    /// Input: address = "1.1.1.1"
    /// Output: "1[.]1[.]1[.]1"
    ///
    /// Example 2:
    ///
    /// Input: address = "255.100.50.0"
    /// Output: "255[.]100[.]50[.]0"
    ///
    /// Constraints:
    /// The given address is a valid IPv4 address.
    /// </summary>
    string defangIPaddr(string address);

    /// <summary>
    /// Leet code #1096. Brace Expansion II
    /// </summary>
    void braceExpansionIIProduct(string &expression, size_t& pos, unordered_set<string> &result);

    /// <summary>
    /// Leet code #1096. Brace Expansion II
    /// </summary>
    void braceExpansionIIUnion(string &expression, size_t& pos, unordered_set<string> &result);

    /// <summary>
    /// Leet code #1096. Brace Expansion II
    /// 
    /// Under a grammar given below, strings can represent a set of lowercase 
    /// words.  Let's use R(expr) to denote the set of words the expression 
    /// represents.
    ///
    /// Grammar can best be understood through simple examples:
    ///
    /// Single letters represent a singleton set containing that word.
    /// R("a") = {"a"}
    /// R("w") = {"w"}
    /// When we take a comma delimited list of 2 or more expressions, we take 
    /// the union of possibilities.
    /// R("{a,b,c}") = {"a","b","c"}
    /// R("{{a,b},{b,c}}") = {"a","b","c"} (notice the final set only contains 
    /// each word at most once)
    /// When we concatenate two expressions, we take the set of possible 
    /// concatenations between two words where the first word comes from the 
    /// first expression and the second word comes from the second expression.
    /// R("{a,b}{c,d}") = {"ac","ad","bc","bd"}
    /// R("{a{b,c}}{{d,e}f{g,h}}") = R("{ab,ac}{dfg,dfh,efg,efh}") = 
    /// {"abdfg", "abdfh", "abefg", "abefh", "acdfg", "acdfh", "acefg", 
    ///  "acefh"}
    /// Formally, the 3 rules for our grammar:
    ///
    /// For every lowercase letter x, we have R(x) = {x}
    /// For expressions e_1, e_2, ... , e_k with k >= 2, we have 
    /// R({e_1,e_2,...}) = R(e_1) �� R(e_2) �� ...
    /// For expressions e_1 and e_2, we have R(e_1 + e_2) = {a + b for (a, b) 
    /// in R(e_1) �� R(e_2)}, where + denotes concatenation, and �� denotes the 
    /// cartesian product.
    /// Given an expression representing a set of words under the given 
    /// grammar, return the sorted list of words that the expression 
    /// represents.
    ///
    /// Example 1:
    ///
    /// Input: "{a,b}{c{d,e}}"
    /// Output: ["acd","ace","bcd","bce"]
    ///
    /// Example 2:
    ///
    /// Input: "{{a,z},a{b,c},{ab,z}}"
    /// Output: ["a","ab","ac","z"]
    /// Explanation: Each distinct word is written only once in the final 
    /// answer.
    /// 
    /// Constraints:
    /// 1. 1 <= expression.length <= 50
    /// 2. expression[i] consists of '{', '}', ','or lowercase English letters.
    /// 3. The given expression represents a set of words based on the grammar 
    ///    given in the description.
    /// </summary>
    vector<string> braceExpansionII(string expression);

    /// <summary>
    /// Leet code #1111. Maximum Nesting Depth of Two Valid Parentheses Strings
    /// 
    /// A string is a valid parentheses string (denoted VPS) if and only if it 
    /// consists of "(" and ")" characters only, and:
    ///
    /// It is the empty string, or
    /// It can be written as AB (A concatenated with B), where A and B are VPS's, 
    /// or
    /// It can be written as (A), where A is a VPS.
    /// We can similarly define the nesting depth depth(S) of any VPS S as follows:
    ///
    /// depth("") = 0
    /// depth(A + B) = max(depth(A), depth(B)), where A and B are VPS's
    /// depth("(" + A + ")") = 1 + depth(A), where A is a VPS.
    /// For example,  "", "()()", and "()(()())" are VPS's (with nesting depths 0,
    /// 1, and 2), and ")(" and "(()" are not VPS's.
    ///
    /// 
    /// Given a VPS seq, split it into two disjoint subsequences A and B, such that
    /// A and B are VPS's (and A.length + B.length = seq.length).
    ///
    /// Now choose any such A and B such that max(depth(A), depth(B)) is the minimum 
    /// possible value.
    ///
    /// Return an answer array (of length seq.length) that encodes such a choice of
    /// A and B:  answer[i] = 0 if seq[i] is part of A, else answer[i] = 1.  Note 
    /// that even though multiple answers may exist, you may return any of them.
    ///
    /// Example 1:
    //
    /// Input: seq = "(()())"
    /// Output: [0,1,1,1,1,0]
    ///
    /// Example 2:
    ///
    /// Input: seq = "()(())()"
    /// Output: [0,0,0,1,1,0,1,1]
    ///  
    ///
    /// Constraints:
    /// 
    /// 1. 1 <= seq.size <= 10000
    /// </summary>
    vector<int> maxDepthAfterSplit(string seq);

    /// <summary>
    /// Leet code #1071. Greatest Common Divisor of Strings
    /// </summary>
    string getRepeatedOfStrings(string str);

    /// <summary>
    /// Leet code #1071. Greatest Common Divisor of Strings
    /// 
    /// For strings S and T, we say "T divides S" if and only if S = T + ... + T  
    /// (T concatenated with itself 1 or more times)
    ///
    /// Return the largest string X such that X divides str1 and X divides str2.
    ///
    /// Example 1:
    ///
    /// Input: str1 = "ABCABC", str2 = "ABC"
    /// Output: "ABC"
    ///
    /// Example 2:
    ///
    /// Input: str1 = "ABABAB", str2 = "ABAB"
    /// Output: "AB"
    ///
    /// Example 3:
    ///
    /// Input: str1 = "LEET", str2 = "CODE"
    /// Output: ""
    /// 
    /// Note:
    ///
    /// 1. 1 <= str1.length <= 1000
    /// 2. 1 <= str2.length <= 1000
    /// 3. str1[i] and str2[i] are English uppercase letters.
    /// </summary>
    string gcdOfStrings(string str1, string str2);

    /// <summary>
    /// Leet code #966. Vowel Spellchecker
    /// 
    /// Given a wordlist, we want to implement a spellchecker that converts 
    /// a query word into a correct word.
    ///
    /// For a given query word, the spell checker handles two categories of 
    /// spelling mistakes:
    ///
    /// Capitalization: If the query matches a word in the wordlist 
    /// (case-insensitive), then the query word is returned with the same case 
    /// as the case in the wordlist.
    /// Example: wordlist = ["yellow"], query = "YellOw": correct = "yellow"
    /// Example: wordlist = ["Yellow"], query = "yellow": correct = "Yellow"
    /// Example: wordlist = ["yellow"], query = "yellow": correct = "yellow"
    /// Vowel Errors: If after replacing the vowels ('a', 'e', 'i', 'o', 'u') of 
    /// the query word with any vowel individually, it matches a word in the 
    /// wordlist (case-insensitive), then the query word is returned with the 
    /// same case as the match in the wordlist.
    /// Example: wordlist = ["YellOw"], query = "yollow": correct = "YellOw"
    /// Example: wordlist = ["YellOw"], query = "yeellow": correct = "" (no match)
    /// Example: wordlist = ["YellOw"], query = "yllw": correct = "" (no match)
    /// In addition, the spell checker operates under the following precedence 
    /// rules:
    ///
    /// When the query exactly matches a word in the wordlist (case-sensitive), 
    /// you should return the same word back.
    /// When the query matches a word up to capitlization, you should return 
    /// the first such match in the wordlist.
    /// When the query matches a word up to vowel errors, you should return the 
    /// first such match in the wordlist.
    /// If the query has no matches in the wordlist, you should return the empty 
    /// string.
    /// Given some queries, return a list of words answer, where answer[i] is the 
    /// correct word for query = queries[i].
    ///
    /// Example 1:
    /// Input: wordlist = ["KiTe","kite","hare","Hare"], 
    /// queries = ["kite","Kite","KiTe","Hare","HARE","Hear","hear",
    /// "keti","keet","keto"]
    /// Output: ["kite","KiTe","KiTe","Hare","hare","","","KiTe","","KiTe"]
    /// 
    /// Note:
    /// 
    /// 1. 1 <= wordlist.length <= 5000
    /// 2. 1 <= queries.length <= 5000
    /// 3. 1 <= wordlist[i].length <= 7
    /// 4. 1 <= queries[i].length <= 7
    /// 5. All strings in wordlist and queries consist only of english letters.
    /// </summary>
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries);

    /// <summary>
    /// Leet code #972. Equal Rational Numbers
    /// </summary>
    string parseRationalInteger(string S, size_t &index);

    /// <summary>
    /// Leet code #972. Equal Rational Numbers
    /// </summary>
    string parseRationalDecimal(string S, size_t &index);

    /// <summary>
    /// Leet code #972. Equal Rational Numbers
    /// 
    /// Given two strings S and T, each of which represents a non-negative 
    /// rational number, return True if and only if they represent the same 
    /// number. The strings may use parentheses to denote the repeating part 
    /// of the rational number.
    ///
    /// In general a rational number can be represented using up to three parts: 
    /// an integer part, a non-repeating part, and a repeating part. The number 
    /// will be represented in one of the following three ways:
    ///
    /// <IntegerPart> (e.g. 0, 12, 123)
    /// <IntegerPart><.><NonRepeatingPart>  (e.g. 0.5, 1., 2.12, 2.0001)
    /// <IntegerPart><.><NonRepeatingPart><(><RepeatingPart><)> (e.g. 0.1(6), 
    /// 0.9(9), 0.00(1212))
    /// The repeating portion of a decimal expansion is conventionally denoted 
    /// within a pair of round brackets.  For example:
    ///
    /// 1 / 6 = 0.16666666... = 0.1(6) = 0.1666(6) = 0.166(66)
    ///
    /// Both 0.1(6) or 0.1666(6) or 0.166(66) are correct representations of 1 / 6.
    ///
    /// Example 1:
    /// Input: S = "0.(52)", T = "0.5(25)"
    /// Output: true
    /// Explanation:
    /// Because "0.(52)" represents 0.52525252..., and "0.5(25)" represents 
    /// 0.52525252525..... , the strings represent the same number.
    ///
    /// Example 2:
    /// Input: S = "0.1666(6)", T = "0.166(66)"
    /// Output: true
    ///
    /// Example 3:
    ///
    /// Input: S = "0.9(9)", T = "1."
    /// Output: true
    /// Explanation: 
    /// "0.9(9)" represents 0.999999999... repeated forever, which equals 1.  
    /// [See this link for an explanation.]
    /// "1." represents the number 1, which is formed correctly: 
    /// (IntegerPart) = "1" and (NonRepeatingPart) = "".
    ///
    /// Note:
    /// 
    /// 1. Each part consists only of digits.
    /// 2. The <IntegerPart> will not begin with 2 or more zeros.  (
    ///    There is no other restriction on the digits of each part.)
    /// 3. 1 <= <IntegerPart>.length <= 4
    /// 4. 0 <= <NonRepeatingPart>.length <= 4
    /// 5. 1 <= <RepeatingPart>.length <= 4
    /// </summary>
    bool isRationalEqual(string S, string T);

    /// <summary>
    /// Leet code #1065. Index Pairs of a String
    /// 
    /// Given a text string and words (a list of strings), return all index 
    /// pairs [i, j] so that the substring text[i]...text[j] is in the list 
    /// of words.
    ///
    /// Example 1:
    ///
    /// Input: text = "thestoryofleetcodeandme", 
    /// words = ["story","fleet","leetcode"]
    /// Output: [[3,7],[9,13],[10,17]]
    ///
    /// Example 2:
    ///
    /// Input: text = "ababa", words = ["aba","ab"]
    /// Output: [[0,1],[0,2],[2,3],[2,4]]
    /// Explanation: 
    /// Notice that matches can overlap, see "aba" is found in [0,2] and [2,4].
    ///  
    /// Note:
    ///
    /// 1. All strings contains only lowercase English letters.
    /// 2. It's guaranteed that all strings in words are different.
    /// 3. 1 <= text.length <= 100
    /// 4. 1 <= words.length <= 20
    /// 5. 1 <= words[i].length <= 50
    /// 6. Return the pairs [i,j] in sorted order (i.e. sort them by their first 
    /// coordinate in case of ties sort them by their second coordinate).
    /// </summary>
    vector<vector<int>> indexPairs(string text, vector<string>& words);

    /// <summary>
    /// Leet code #1078. Occurrences After Bigram
    /// 
    /// Given words first and second, consider occurrences in some text of the 
    /// form "first second third", where second comes immediately after first, 
    /// and third comes immediately after second.
    ///
    /// For each such occurrence, add "third" to the answer, and return the answer.
    /// 
    /// Example 1:
    ///
    /// Input: text = "alice is a good girl she is a good student", first = "a", 
    /// second = "good"
    /// Output: ["girl","student"]
    ///
    /// Example 2:
    ///
    /// Input: text = "we will we will rock you", first = "we", second = "will"
    /// Output: ["we","rock"]
    ///  
    /// Note:
    /// 1. 1 <= text.length <= 1000
    /// 2. text consists of space separated words, where each word consists of 
    ///    lowercase English letters.
    /// 3. 1 <= first.length, second.length <= 10
    /// 4. first and second consist of lowercase English letters.
    /// </summary>
    vector<string> findOcurrences(string text, string first, string second);

    /// <summary>
    /// Leet code #1055. Shortest Way to Form String
    /// 
    /// From any string, we can form a subsequence of that string by deleting 
    /// some number of characters (possibly no deletions).
    ///
    /// Given two strings source and target, return the minimum number of 
    /// subsequences of source such that their concatenation equals target. 
    /// If the task is impossible, return -1.
    ///
    /// 
    /// Example 1:
    /// Input: source = "abc", target = "abcbc"
    /// Output: 2
    /// Explanation: The target "abcbc" can be formed by "abc" and "bc", which 
    /// are subsequences of source "abc".
    ///
    /// Example 2:
    /// Input: source = "abc", target = "acdbc"
    /// Output: -1
    /// Explanation: The target string cannot be constructed from the 
    /// subsequences of source string due to the character "d" in target string.
    ///
    /// Example 3:
    /// Input: source = "xyz", target = "xzyxz"
    /// Output: 3
    /// Explanation: The target string can be constructed as follows 
    /// "xz" + "y" + "xz".
    /// 
    /// Note:
    /// 1. Both the source and target strings consist of only lowercase English 
    /// letters from "a"-"z".
    /// 2. The lengths of source and target string are between 1 and 1000.
    int shortestWay(string source, string target);

    /// <summary>
    /// Leet code #1044. Longest Duplicate Substring
    /// 
    /// Given a string S, consider all duplicated substrings: (contiguous) 
    /// substrings of S that occur 2 or more times.  (The occurrences may overlap.)
    ///
    /// Return any duplicated substring that has the longest possible length.  
    /// (If S does not have a duplicated substring, the answer is "".)
    /// 
    /// Example 1:
    ///
    /// Input: "banana"
    /// Output: "ana"
    ///
    /// Example 2:
    /// 
    /// Input: "abcd"
    /// Output: ""
    /// 
    /// Note:
    ///
    /// 1. 2 <= S.length <= 10^5
    /// 2. S consists of lowercase English letters.
    /// </summary>
    string longestDupSubstring(string S);

    /// <summary>
    /// Leet code #1324. Print Words Vertically
    ///
    /// Medium
    ///
    /// Given a string s. Return all the words vertically in the same 
    /// order in which they appear in s.
    /// Words are returned as a list of strings, complete with spaces when 
    /// is necessary. (Trailing spaces are not allowed).
    /// Each word would be put on only one column and that in one column 
    /// there will be only one word.
    /// 
    /// Example 1:
    /// Input: s = "HOW ARE YOU"
    /// Output: ["HAY","ORO","WEU"]
    /// Explanation: Each word is printed vertically. 
    ///  "HAY"
    ///  "ORO"
    ///  "WEU"
    ///
    /// Example 2:
    /// Input: s = "TO BE OR NOT TO BE"
    /// Output: ["TBONTB","OEROOE","   T"]
    /// Explanation: Trailing spaces is not allowed. 
    /// "TBONTB"
    /// "OEROOE"
    /// "   T"
    ///
    /// Example 3:
    /// Input: s = "CONTEST IS COMING"
    /// Output: ["CIC","OSO","N M","T I","E N","S G","T"]
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 200
    /// 2. s contains only upper case English letters.
    /// 3. It's guaranteed that there is only one space between 2 words.
    /// </summary>
    vector<string> printVertically(string s);

    /// <summary>
    /// Leet code #1328. Break a Palindrome
    /// 
    /// Medium
    ///
    /// Given a palindromic string palindrome, replace exactly one character 
    /// by any lowercase English letter so that the string becomes the 
    /// lexicographically smallest possible string that isn't a palindrome.
    ///
    /// After doing so, return the final string.  If there is no way to do 
    /// so, return the empty string.
    ///
    /// Example 1:
    /// Input: palindrome = "abccba"
    /// Output: "aaccba"
    ///
    /// Example 2:
    /// Input: palindrome = "a"
    /// Output: ""
    /// 
    /// Constraints:
    /// 1. 1 <= palindrome.length <= 1000
    /// 2. palindrome consists of only lowercase English letters.
    /// </summary>
    string breakPalindrome(string palindrome); 

    /// <summary>
    /// Leet code #1332. Remove Palindromic Subsequences
    /// 
    /// Easy
    ///
    /// Given a string s consisting only of letters 'a' and 'b'. In a single 
    /// step you can remove one palindromic subsequence from s.
    ///
    /// Return the minimum number of steps to make the given string empty.
    ///
    /// A string is a subsequence of a given string, if it is generated by 
    /// deleting some characters of a given string without changing its order.
    ///
    /// A string is called palindrome if is one that reads the same backward 
    /// as well as forward.
    ///
    /// Example 1:
    /// Input: s = "ababa"
    /// Output: 1
    /// Explanation: String is already palindrome
    ///
    /// Example 2:
    /// Input: s = "abb"
    /// Output: 2
    /// Explanation: "abb" -> "bb" -> "". 
    /// Remove palindromic subsequence "a" then "bb".
    /// 
    /// Example 3:
    /// Input: s = "baabb"
    /// Output: 2
    /// Explanation: "baabb" -> "b" -> "". 
    /// Remove palindromic subsequence "baab" then "b".
    ///
    /// Example 4:
    /// Input: s = ""
    /// Output: 0
    ///
    /// Constraints:
    /// 1. 0 <= s.length <= 1000
    /// 2. s only consists of letters 'a' and 'b'
    /// </summary>
    int removePalindromeSub(string s);

    /// <summary>
    /// Leet code #1347. Minimum Number of Steps to Make Two Strings Anagram
    ///
    /// Medium
    ///
    /// Given two equal-size strings s and t. In one step you can choose any 
    /// character of t and replace it with another character.
    ///
    /// Return the minimum number of steps to make t an anagram of s.
    ///
    /// An Anagram of a string is a string that contains the same characters 
    /// with a different (or the same) ordering.
    /// 
    /// Example 1: 
    /// Input: s = "bab", t = "aba"
    /// Output: 1
    /// Explanation: Replace the first 'a' in t with b, t = "bba" which is 
    /// anagram of s.
    /// 
    /// Example 2:
    /// Input: s = "leetcode", t = "practice"
    /// Output: 5
    /// Explanation: Replace 'p', 'r', 'a', 'i' and 'c' from t with proper 
    /// characters to make t anagram of s.
    ///
    /// Example 3:
    /// Input: s = "anagram", t = "mangaar"
    /// Output: 0
    /// Explanation: "anagram" and "mangaar" are anagrams. 
    ///
    /// Example 4:
    /// Input: s = "xxyyzz", t = "xxyyzz"
    /// Output: 0
    ///
    /// Example 5:
    /// Input: s = "friend", t = "family"
    /// Output: 4
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 50000
    /// 2. s.length == t.length
    /// 3. s and t contain lower-case English letters only.
    /// </summary>
    int minSteps(string s, string t);

    /// <summary>
    /// Leet code #1177. Can Make Palindrome from Substring
    /// 
    /// Given a string s, we make queries on substrings of s.
    /// For each query queries[i] = [left, right, k], we may rearrange the 
    /// substring s[left], ..., s[right], and then choose up to k of them to 
    /// replace with any lowercase English letter. 
    /// If the substring is possible to be a palindrome string after the 
    /// operations above, the result of the query is true. Otherwise, the result 
    /// is false.
    /// Return an array answer[], where answer[i] is the result of the i-th query 
    /// queries[i].
    /// Note that: Each letter is counted individually for replacement so if for 
    /// example s[left..right] = "aaa", and k = 2, we can only replace two of the 
    /// letters.  (Also, note that the initial string s is never modified by 
    /// any query.)
    /// 
    /// Example :
    /// Input: s = "abcda", queries = [[3,3,0],[1,2,0],[0,3,1],[0,3,2],[0,4,1]]
    /// Output: [true,false,false,true,true]
    /// Explanation:
    /// queries[0] : substring = "d", is palidrome.
    /// queries[1] : substring = "bc", is not palidrome.
    /// queries[2] : substring = "abcd", is not palidrome after replacing only 1 
    ///              character.
    /// queries[3] : substring = "abcd", could be changed to "abba" which is 
    ///              palidrome. Also this can be changed to "baab" first rearrange 
    ///              it "bacd" then replace "cd" with "ab".
    /// queries[4] : substring = "abcda", could be changed to "abcba" which is palidrome.
    /// 
    /// Constraints:
    /// 1. 1 <= s.length, queries.length <= 10^5
    /// 2. 0 <= queries[i][0] <= queries[i][1] < s.length
    /// 3. 0 <= queries[i][2] <= s.length
    /// 4. s only contains lowercase English letters.
    /// </summary>
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries);

    /// <summary>
    /// Leet code #1358. Number of Substrings Containing All Three Characters
    ///
    /// Medium
    ///
    /// Given a string s consisting only of characters a, b and c.
    /// Return the number of substrings containing at least one occurrence of 
    /// all these characters a, b and c.
    /// 
    /// Example 1:
    /// Input: s = "abcabc"
    /// Output: 10
    /// Explanation: The substrings containing at least one occurrence of the 
    /// characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", 
    /// "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
    ///
    /// Example 2:
    /// Input: s = "aaacb"
    /// Output: 3
    /// Explanation: The substrings containing at least one occurrence of 
    /// the characters a, b and c are "aaacb", "aacb" and "acb". 
    ///
    /// Example 3:
    /// Input: s = "abc"
    /// Output: 1
    ///
    /// Constraints:
    /// 1. 3 <= s.length <= 5 x 10^4
    /// 2. s only consists of a, b or c characters.
    /// </summary>
    int numberOfSubstrings(string s);

    /// <summary>
    /// Leet code #1370. Increasing Decreasing String
    ///
    /// Easy
    ///
    /// 1. Pick the smallest character from s and append it to the result.
    /// 2. Pick the smallest character from s which is greater than the last 
    ///    appended character to the result and append it.
    /// 3. Repeat step 2 until you cannot pick more characters.
    /// 4. Pick the largest character from s and append it to the result.
    /// 5. Pick the largest character from s which is smaller than the last 
    ///    appended character to the result and append it.  
    /// 6. Repeat step 5 until you cannot pick more characters.
    /// 7. Repeat the steps from 1 to 6 until you pick all characters from s.
    /// In each step, If the smallest or the largest character appears 
    /// more than once you can choose any occurrence and append it to 
    /// the result.
    ///
    /// Return the result string after sorting s with this algorithm.
    ///
    /// Example 1:
    /// Input: s = "aaaabbbbcccc"
    /// Output: "abccbaabccba"
    /// Explanation: After steps 1, 2 and 3 of the first iteration, 
    /// result = "abc"
    /// After steps 4, 5 and 6 of the first iteration, result = "abccba"
    /// First iteration is done. Now s = "aabbcc" and we go back to step 1
    /// After steps 1, 2 and 3 of the second iteration, result = "abccbaabc"
    /// After steps 4, 5 and 6 of the second iteration, result = "abccbaabccba"
    ///
    /// Example 2:
    /// Input: s = "rat"
    /// Output: "art"
    /// Explanation: The word "rat" becomes "art" after re-ordering it with 
    /// the mentioned algorithm.
    ///
    /// Example 3:
    /// Input: s = "leetcode"
    /// Output: "cdelotee"
    ///
    /// Example 4:
    /// Input: s = "ggggggg"
    /// Output: "ggggggg"
    ///
    /// Example 5: 
    /// Input: s = "spo"
    /// Output: "ops"
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 500
    /// 2. s contains only lower-case English letters.
    /// </summary>
    string sortString(string s);

    /// <summary>
    /// Leet code #1371. Find the Longest Substring Containing Vowels 
    ///                  in Even Counts
    ///
    /// Medium
    ///
    /// Given the string s, return the size of the longest substring 
    /// containing each vowel an even number of times. That is, 'a', 
    /// 'e', 'i', 'o', and 'u' must appear an even number of times.
    ///
    /// Example 1:
    /// Input: s = "eleetminicoworoep"
    /// Output: 13
    /// Explanation: The longest substring is "leetminicowor" which 
    /// contains two each of the vowels: e, i and o and zero of the 
    /// vowels: a and u.  
    /// Example 2:
    /// Input: s = "leetcodeisgreat"
    /// Output: 5
    /// Explanation: The longest substring is "leetc" which contains two e's.
    ///
    /// Example 3:
    /// Input: s = "bcbcbc"
    /// Output: 6
    /// Explanation: In this case, the given string "bcbcbc" is the longest 
    /// because all vowels: a, e, i, o and u appear zero times.
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 5 x 10^5
    /// 2. s contains only lowercase English letters.
    /// </summary>
    int findTheLongestSubstring(string s);

    /// <summary>
    /// Leet code #1374. Generate a String With Characters That Have Odd 
    ///           Counts 
    /// Easy
    ///
    /// Given an integer n, return a string with n characters such that 
    /// each character in such string occurs an odd number of times.
    ///
    /// The returned string must contain only lowercase English letters. 
    /// If there are multiples valid strings, return any of them.  
    ///
    /// Example 1:
    /// Input: n = 4
    /// Output: "pppz"
    /// Explanation: "pppz" is a valid string since the character 'p' 
    /// occurs three times and the character 'z' occurs once. Note that 
    /// there are many other valid strings such as "ohhh" and "love".
    /// 
    /// Example 2:
    /// Input: n = 2
    /// Output: "xy"
    /// Explanation: "xy" is a valid string since the characters 'x' and 'y' 
    /// occur once. Note that there are many other valid strings such as 
    /// "ag" and "ur".
    ///
    /// Example 3:
    /// Input: n = 7
    /// Output: "holasss"
    ///
    /// Constraints:
    /// 1. 1 <= n <= 500
    /// </summary>
    string generateTheString(int n);

    /// <summary>
    /// Leet code #1392. Longest Happy Prefix
    /// 
    /// Hard
    ///
    /// A string is called a happy prefix if is a non-empty prefix which is 
    /// also a suffix (excluding itself).
    ///
    /// Given a string s. Return the longest happy prefix of s .
    ///
    /// Return an empty string if no such prefix exists.
    /// 
    /// Example 1:
    ///
    /// Input: s = "level"
    /// Output: "l"
    /// Explanation: s contains 4 prefix excluding itself ("l", "le", "lev", "leve"), 
    /// and suffix ("l", "el", "vel", "evel"). The largest prefix which is also 
    /// suffix is given by "l".
    ///
    /// Example 2:
    /// Input: s = "ababab"
    /// Output: "abab"
    /// Explanation: "abab" is the largest prefix which is also suffix. They can 
    /// overlap in the original string.
    ///
    /// Example 3:
    /// Input: s = "leetcodeleet"
    /// Output: "leet"
    ///
    /// Example 4:
    /// Input: s = "a"
    /// Output: ""
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 10^5
    /// 2. s contains only lowercase English letters.
    /// </summary>
    string longestPrefix(string s);

    /// <summary>
    /// Leet code #1400. Construct K Palindrome Strings
    /// 
    /// Medium
    ///
    /// Given a string s and an integer k. You should construct k non-empty 
    /// palindrome strings using all the characters in s.
    ///
    /// Return True if you can use all the characters in s to construct k 
    /// palindrome strings or False otherwise.
    /// 
    /// Example 1:
    /// Input: s = "annabelle", k = 2
    /// Output: true
    /// Explanation: You can construct two palindromes using all characters 
    /// in s.
    /// Some possible constructions "anna" + "elble", "anbna" + "elle", 
    /// "anellena" + "b"
    ///
    /// Example 2:
    /// Input: s = "leetcode", k = 3
    /// Output: false
    /// Explanation: It is impossible to construct 3 palindromes using all 
    /// the characters of s.
    ///
    /// Example 3:
    /// Input: s = "true", k = 4
    /// Output: true
    /// Explanation: The only possible solution is to put each character 
    /// in a separate string.
    ///
    /// Example 4:
    /// Input: s = "yzyzyzyzyzyzyzy", k = 2
    /// Output: true
    /// Explanation: Simply you can put all z's in one string and all y's 
    /// in the other string. Both strings will be palindrome.
    ///
    /// Example 5:
    /// Input: s = "cr", k = 7
    /// Output: false
    /// Explanation: We don't have enough characters in s to construct 7 
    /// palindromes.
    /// 
    /// Constraints:
    /// 1. 1 <= s.length <= 10^5
    /// 2. All characters in s are lower-case English letters.
    /// 3. 1 <= k <= 10^5
    /// </summary>
    bool canConstruct(string s, int k);

    /// <summary>
    /// Leet code #1404. Number of Steps to Reduce a Number in Binary 
    /// Representation to One
    /// 
    /// Medium
    ///
    /// Given a number s in their binary representation. Return the number 
    /// of steps to reduce it to 1 under the following rules:
    ///
    /// If the current number is even, you have to divide it by 2.
    ///
    /// If the current number is odd, you have to add 1 to it.
    ///
    /// It's guaranteed that you can always reach to one for all testcases.
    ///
    /// Example 1:
    /// Input: s = "1101"
    /// Output: 6
    /// Explanation: "1101" corressponds to number 13 in their decimal 
    /// representation.
    /// Step 1) 13 is odd, add 1 and obtain 14. 
    /// Step 2) 14 is even, divide by 2 and obtain 7.
    /// Step 3) 7 is odd, add 1 and obtain 8.
    /// Step 4) 8 is even, divide by 2 and obtain 4.  
    /// Step 5) 4 is even, divide by 2 and obtain 2. 
    /// Step 6) 2 is even, divide by 2 and obtain 1.  
    ///
    /// Example 2:
    /// Input: s = "10"
    /// Output: 1
    /// Explanation: "10" corressponds to number 2 in their decimal 
    /// representation.
    /// Step 1) 2 is even, divide by 2 and obtain 1.  
    /// Example 3:
    ///
    /// Input: s = "1"
    /// Output: 0
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 500
    /// 2. s consists of characters '0' or '1'
    /// 3. s[0] == '1'
    /// </summary>
    int numSteps(string s);

    /// <summary>
    /// Leet code #1408. String Matching in an Array 
    /// 
    /// Easy
    ///
    /// Given an array of string words. Return all strings in words which 
    /// is substring of another word in any order. 
    ///
    /// String words[i] is substring of words[j], if can be obtained removing 
    /// some characters to left and/or right side of words[j].
    ///
    /// Example 1:
    /// Input: words = ["mass","as","hero","superhero"]
    /// Output: ["as","hero"]
    /// Explanation: "as" is substring of "mass" and "hero" is substring 
    /// of "superhero".
    /// ["hero","as"] is also a valid answer.
    ///
    /// Example 2:
    /// Input: words = ["leetcode","et","code"]
    /// Output: ["et","code"]
    /// Explanation: "et", "code" are substring of "leetcode".
    ///
    /// Example 3:
    /// Input: words = ["blue","green","bu"]
    /// Output: []
    ///
    /// Constraints:
    /// 1. 1 <= words.length <= 100
    /// 2. 1 <= words[i].length <= 30
    /// 3. words[i] contains only lowercase English letters.
    /// 4. It's guaranteed that words[i] will be unique.
    /// </summary>
    vector<string> stringMatching(vector<string>& words);

    /// <summary>
    /// Leet code #1410. HTML Entity Parser 
    /// 
    /// Medium
    ///
    /// HTML entity parser is the parser that takes HTML code as input and 
    /// replace all the entities of the special characters by the characters 
    /// itself.
    ///
    /// The special characters and their entities for HTML are:
    ///
    /// Quotation Mark: the entity is &quot; and symbol character is ".
    /// Single Quote Mark: the entity is &apos; and symbol character is '.
    /// Ampersand: the entity is &amp; and symbol character is &.
    /// Greater Than Sign: the entity is &gt; and symbol character is >.
    /// Less Than Sign: the entity is &lt; and symbol character is <.
    /// Slash: the entity is &frasl; and symbol character is /.
    /// Given the input text string to the HTML parser, you have to implement 
    /// the entity parser.
    ///
    /// Return the text after replacing the entities by the special characters.
    /// 
    /// Example 1:
    /// Input: text = "&amp; is an HTML entity but &ambassador; is not."
    /// Output: "& is an HTML entity but &ambassador; is not."
    /// Explanation: The parser will replace the &amp; entity by &
    ///
    /// Example 2:
    /// Input: text = "and I quote: &quot;...&quot;"
    /// Output: "and I quote: \"...\""
    ///
    /// Example 3:
    /// Input: text = "Stay home! Practice on Leetcode :)"
    /// Output: "Stay home! Practice on Leetcode :)"
    ///
    /// Example 4:
    /// Input: text = "x &gt; y &amp;&amp; x &lt; y is always false"
    /// Output: "x > y && x < y is always false"
    ///
    /// Example 5:
    /// Input: text = "leetcode.com&frasl;problemset&frasl;all"
    ///  Output: "leetcode.com/problemset/all"
    /// 
    /// Constraints:
    /// 1. 1 <= text.length <= 10^5
    /// 2. The string may contain any possible characters out of all the 256 
    ///    ASCII characters.
    /// </summary>
    string entityParser(string text);

    /// <summary>
    /// Leet code #1417. Reformat The String
    /// 
    /// Easy
    ///
    /// Given alphanumeric string s. (Alphanumeric string is a string 
    /// consisting of lowercase English letters and digits).
    ///
    /// You have to find a permutation of the string where no letter is 
    /// followed by another letter and no digit is followed by another 
    /// digit. That is, no two adjacent characters have the same type.
    ///
    /// Return the reformatted string or return an empty string if it is 
    /// impossible to reformat the string.
    /// 
    /// Example 1:
    /// Input: s = "a0b1c2"
    /// Output: "0a1b2c"
    /// Explanation: No two adjacent characters have the same type in 
    /// "0a1b2c". "a0b1c2", "0a1b2c", "0c2a1b" are also valid permutations.
    ///
    /// Example 2:
    /// Input: s = "leetcode"
    /// Output: ""
    /// Explanation: "leetcode" has only characters so we cannot separate 
    /// them by digits.
    ///
    /// Example 3:
    /// Input: s = "1229857369"
    /// Output: ""
    /// Explanation: "1229857369" has only digits so we cannot separate them 
    /// by characters.
    ///
    /// Example 4:
    /// Input: s = "covid2019"
    /// Output: "c2o0v1i9d"
    ///
    /// Example 5:
    /// Input: s = "ab123"
    /// Output: "1a2b3"
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 500
    /// 2. s consists of only lowercase English letters and/or digits.
    /// </summary>
    string reformat(string s);

    /// <summary>
    /// Leet code #1422. Maximum Score After Splitting a String
    /// 
    /// Easy
    ///
    /// Given a string s of zeros and ones, return the maximum score after 
    /// splitting the string into two non-empty substrings (i.e. left 
    /// substring and right substring).
    ///
    /// The score after splitting a string is the number of zeros in the 
    /// left substring plus the number of ones in the right substring.
    ///
    /// Example 1:
    /// Input: s = "011101"
    /// Output: 5 
    /// Explanation: 
    /// All possible ways of splitting s into two non-empty substrings are:
    /// left = "0" and right = "11101", score = 1 + 4 = 5 
    /// left = "01" and right = "1101", score = 1 + 3 = 4 
    /// left = "011" and right = "101", score = 1 + 2 = 3 
    /// left = "0111" and right = "01", score = 1 + 1 = 2 
    /// left = "01110" and right = "1", score = 2 + 1 = 3
    ///
    /// Example 2:
    /// Input: s = "00111"
    /// Output: 5
    /// Explanation: When left = "00" and right = "111", we get the maximum score = 2 + 3 = 5
    ///
    /// Example 3:
    ///
    /// Input: s = "1111"
    /// Output: 3
    ///
    /// Constraints:
    ///
    /// 1. 2 <= s.length <= 500
    /// 2. The string s consists of characters '0' and '1' only.
    /// </summary>
    int maxScore(string s);

    /// <summary>
    /// Leet code #1433. Check If a String Can Break Another String
    /// 
    /// Medium
    ///
    /// Given two strings: s1 and s2 with the same size, check if some 
    /// permutation of string s1 can break some permutation of string s2 
    /// or vice-versa (in other words s2 can break s1).
    /// 
    /// A string x can break string y (both of size n) if x[i] >= y[i] 
    /// (in alphabetical order) for all i between 0 and n-1.
    ///
    /// Example 1:
    /// Input: s1 = "abc", s2 = "xya"
    /// Output: true
    /// Explanation: "ayx" is a permutation of s2="xya" which can break 
    /// to string "abc" which is a permutation of s1="abc".
    ///
    /// Example 2:
    /// Input: s1 = "abe", s2 = "acd"
    /// Output: false 
    /// Explanation: All permutations for s1="abe" are: "abe", "aeb", "bae", 
    /// "bea", "eab" and "eba" and all permutation for s2="acd" are: "acd", 
    /// "adc", "cad", "cda", "dac" and "dca". However, there is not any 
    /// permutation from s1 which can break some permutation from s2 and 
    /// vice-versa.
    ///
    /// Example 3:
    /// Input: s1 = "leetcodee", s2 = "interview"
    /// Output: true
    /// Constraints:
    /// 1. s1.length == n
    /// 2. s2.length == n
    /// 3. 1 <= n <= 10^5
    /// 4. All strings consist of lowercase English letters.
    /// </summary>
    bool checkIfCanBreak(string s1, string s2);

    /// <summary>
    /// Leet code #1427. Perform String Shifts
    /// 
    /// Easy
    ///
    /// You are given a string s containing lowercase English letters, 
    /// and a matrix shift, where shift[i] = [direction, amount]:
    ///
    /// direction can be 0 (for left shift) or 1 (for right shift). 
    /// amount is the amount by which string s is to be shifted.
    /// A left shift by 1 means remove the first character of s and append 
    /// it to the end.
    /// Similarly, a right shift by 1 means remove the last character of s 
    /// and add it to the beginning.
    /// Return the final string after all operations.
    ///
    /// Example 1:
    /// Input: s = "abc", shift = [[0,1],[1,2]]
    /// Output: "cab"
    /// Explanation: 
    /// [0,1] means shift to left by 1. "abc" -> "bca"
    /// [1,2] means shift to right by 2. "bca" -> "cab"
    ///
    /// Example 2:
    /// Input: s = "abcdefg", shift = [[1,1],[1,1],[0,2],[1,3]]
    /// Output: "efgabcd"
    /// Explanation:  
    /// [1,1] means shift to right by 1. "abcdefg" -> "gabcdef"
    /// [1,1] means shift to right by 1. "gabcdef" -> "fgabcde"
    /// [0,2] means shift to left by 2. "fgabcde" -> "abcdefg"
    /// [1,3] means shift to right by 3. "abcdefg" -> "efgabcd"
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 100
    /// 2. s only contains lower case English letters.
    /// 3. 1 <= shift.length <= 100
    /// 4. shift[i].length == 2
    /// 5. 0 <= shift[i][0] <= 1
    /// 6. 0 <= shift[i][1] <= 100
    /// </summary>
    string stringShift(string s, vector<vector<int>>& shift);

    /// <summary>
    /// Leet code #1451. Rearrange Words in a Sentence
    /// 
    /// Medium
    ///
    /// Given a sentence text (A sentence is a string of space-separated 
    /// words) in the following format:
    ///
    /// First letter is in upper case.
    /// Each word in text are separated by a single space.
    /// Your task is to rearrange the words in text such that all words are 
    /// rearranged in an increasing order of their lengths. If two words 
    /// have the same length, arrange them in their original order.
    ///
    /// Return the new text following the format shown above.
    /// Example 1:
    /// Input: text = "Leetcode is cool"
    /// Output: "Is cool leetcode"
    /// Explanation: There are 3 words, "Leetcode" of length 8, "is" of 
    /// length 2 and "cool" of length 4.
    /// Output is ordered by length and the new first word starts with 
    /// capital letter.
    ///
    /// Example 2:
    /// Input: text = "Keep calm and code on"
    /// Output: "On and keep calm code"
    /// Explanation: Output is ordered as follows:
    /// "On" 2 letters.
    /// "and" 3 letters.
    /// "keep" 4 letters in case of tie order by position in original text.
    /// "calm" 4 letters.
    /// "code" 4 letters.
    ///
    /// Example 3:
    /// Input: text = "To be or not to be"
    /// Output: "To be or to be not"
    ///
    /// Constraints:
    /// 1. text begins with a capital letter and then contains lowercase 
    ///    letters and single space between words.
    /// 2. 1 <= text.length <= 10^5
    /// </summary>
    string arrangeWords(string text);
#pragma endregion
};

#endif  // LeetCodeString_H
