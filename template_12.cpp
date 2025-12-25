#include <iostream>
#include <fstream>
using namespace std;

// -------- DOFILE CLASS --------
class dofile {
private:
    fstream file;
    string filename;

    // -------- EXCEPTION CLASS --------
    class FileError {
    public:
        string msg;
        FileError(string m) {
            msg = m;
        }
    };

public:
    // Constructor opens file
    dofile(string fname) {
        filename = fname;
        file.open(filename, ios::in | ios::out | ios::trunc);

        if (!file)
            throw FileError("File could not be opened");
    }

    // Write to file
    void writeData(string data) {
        if (!file)
            throw FileError("Write error");
        file << data << endl;
    }

    // Read from file
    void readData() {
        if (!file)
            throw FileError("Read error");

        string line;
        reset();
        while (getline(file, line)) {
            cout << line << endl;
        }
    }

    // Reset file pointer to beginning
    void reset() {
        file.clear();
        file.seekg(0, ios::beg);
    }

    // Destructor
    ~dofile() {
        file.close();
    }
};

// -------- MAIN FUNCTION --------
int main() {
    try {
        dofile df("test.txt");

        df.writeData("Hello File");
        df.writeData("This is exception handling");
        df.writeData("Using a class");

        cout << "\nReading from file:\n";
        df.readData();
    }
    catch (...) {
        cout << "File error occurred!" << endl;
    }

    return 0;
}
