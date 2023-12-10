#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	/*Enter the string*/
	string text;
	cout<<"Enter string:";
	cin>> text;
	/*Create a second string for saving the resukt*/
	string result;
	/*Use for loop to crawling the string*/
	for (size_t i= 0; i < text.length() - 1; ++i) 
	{
		/*We crawling all the text to find two similar caracters and chenge them with XX */
        if (i< text.length()+1 && text[i] == text[i+1]) {
            result+="XX";
            i++;
        }
        /*If we do no find anything we output the text into the result variable*/
        else
        {
        	result+=text[i];
		}
    }
    cout<<"The result:"<<result<<endl;
	
	return 0;
}
