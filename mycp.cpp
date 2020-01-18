#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const* argv[]){
	// Variable Delarations
 	ifstream fin;
 	ofstream fout;
	string arg1;
	string arg2;
	
	// assigning arguments
	if (argc == 3){
		arg1 = argv[1];
		arg2 = argv[2];
	}
	else{
		cerr << "wrong arguments" << endl;
		return 1;
	}
	
	// open the first file
	fin.open(arg1);
	fout.open(arg2);
	
	if (fin.fail()){
		cerr << "Can not open file" << endl;
		return 1;
	}
	
	if (fout.fail()){
		cerr << "Can not open output file" << endl;
		return 1;
	}
	
	while (!fin.eof()){
		char character;
		fin.get(character);
		fout << character;
	}
	
 	fin.close(); 
	
 	fout.close();
	
	return 0;
}