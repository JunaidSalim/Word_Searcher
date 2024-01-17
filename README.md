# Word-Searcher
A 3-digit word search program in a 2D array, developed in C++, finds and displays words appearing horizontally, vertically, diagonally, and backward, along with their starting and ending positions.

The program takes a 2D array of characters as input and searches for all possible words within the array. It searches not only horizontally and vertically but also in backward, vertical backward, diagonal, and diagonal backward directions.

For example, given the following input:<br>
dogxbxxxnoon <br>
rhellotherex <br>
okciuqbrownm <br>
wxwgexlxhjij <br>
oozokvuxdrow <br>
rlxdrxextxja <br>
drowblonkgod<br>

The extracted words will be displayed on the screen along with their starting and ending positions. For example, if the word "god" is found, the output should be:
god (7,10) (7,12)
