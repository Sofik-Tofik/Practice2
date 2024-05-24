#include <iostream>
#include <string>

using namespace std;

class File {
protected:
    string name;
    int size; 

public:
    File(const string& n, int s) : name(n), size(s) {}

    virtual void display() {
        cout << "File Name: " << name << "\n";
        cout << "File Size: " << size << " bytes\n";
    }
};

class TextFile : public File {
public:
    TextFile(const string& n, int s) : File(n, s) {}

    void readData() {
        cout << "Reading data from text file: " << name << "\n";
    }

    void writeData() {
        cout << "Writing data to text file: " << name << "\n";
    }
};

class ImageFile : public File {
public:
    ImageFile(const string& n, int s) : File(n, s) {}

    void displayImage() {
        cout << "Displaying image: " << name << "\n";
    }
};

class VideoFile : public File {
public:
    VideoFile(const string& n, int s) : File(n, s) {}

    void playVideo() {
        cout << "Playing video: " << name << "\n";
    }
};

int main() {
    TextFile txtFile("document.txt", 1024);
    ImageFile imgFile("photo.jpg", 2048);
    VideoFile vidFile("movie.mp4", 4096);

    cout << "Text File Information:\n";
    txtFile.display();
    txtFile.readData();
    txtFile.writeData();

    cout << "\nImage File Information:\n";
    imgFile.display();
    imgFile.displayImage();

    cout << "\nVideo File Information:\n";
    vidFile.display();
    vidFile.playVideo();

    return 0;
}