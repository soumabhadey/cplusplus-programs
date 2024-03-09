#include <iostream>
#include <string.h>

#define MAX 10

using namespace std;

class String
{
	char *val;
	
	public :
		String() {}
		String(char *);
		char * getval();
		int length();
		void operator =(String);
		String operator +(String);
		bool operator <(String);
		bool operator ==(String);
		void show();
};

int main(void)
{
	cout << "ENTER TWO WORDS\n";
	char s1[MAX], s2[MAX];
	cin >> s1 >> s2;
	
	String str1(s1), str2(s2);
	
	String str3;
	str3 = str1 + str2;
	cout << "concatenated string : ";
	str3.show();
	
	if(str1 < str2) {
		
		cout << "word1 < word2\n";
	}
	else if(str1 == str2) {
		
		cout << "word1 = word2\n";
	}
	else {
		
		cout << "word1 > word2\n";
	}
	return 0;
}

String :: String(char * s)
{
    val = new char[strlen(s) + 1];
    strcpy(val, s);
}

char * String :: getval()
{
    return val;
}

int String :: length()
{
    return strlen(val);
}

void String :: operator =(String s)
{
    delete [] val;

    val = new char[s.length() + 1];

    strcpy(val, s.getval());
}

String String :: operator +(String s)
{
    char temp[MAX * 2];

    strcpy(temp, val);
    strcat(temp, s.getval());

    return String(temp);
}

bool String :: operator <(String s)
{
    return strcmp(val, s.getval()) < 0;
}

bool String :: operator ==(String s)
{
    return strcmp(val, s.getval()) == 0;
}

void String :: show()
{
    puts(val);
}