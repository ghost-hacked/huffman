#ifndef HUFFMAN
#define HUFFMAN

#include <string>
#include <vector>
#include <map>

class Huffman {
  public:
    Huffman(const std::string& file_name);
    // precondition: file_name is a valid path to a text file
    // postcondition: each character from the file specified by file_name has been transferred to file_data
    void compress();
    // postcondition: file_data has been overwritten with the compressed data
    void decompress();
    // postcondition: file_data has been overwritten with the decompressed data
    void output_file();
    // postcondition: a new file containing all data in file_data has been written and saved to the disk
    void print_file_data();
    // postcondition: all data in file_data has been printed to the console
    void print_char_frequency();
    // postcondition: the frequency of each character in file_data has been printed to the console
    void print_huffman_code();
    // postcondition: a representation of the Huffman Code table has been printed to the console
  private:
    // need to make a get char frequency function
    // should i hold it in a map and just sort it for printing?

    std::vector<char> file_data;
    std::vector< std::pair<char, unsigned long long> > char_frequency;
    //min_heap_node* root;
};

#endif
