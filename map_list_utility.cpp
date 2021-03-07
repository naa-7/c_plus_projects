#include <iostream>
#include <map>
using namespace std;

// declaring a map with key and value data types and (OPTIONAL: order) and map name
// map<key,value, order<data type>> name;
// declared outside functions to make it easier when making function calls
map<char,string, less<char>> names;

void add_key_value_to_map(char key, string value);
void iterating_through_loop();
void reverse_iterating_through_loop();
void insert_in_map(char key, string value);
void delete_from_map(char key);
void find_key_in_map(char key);
void map_size();
void check_empty_map();
void clear_map();
void my_find_key_value_map(char key);

int main(int argc, char const *argv[])
{
       char key;
       string value;

    cout << "\n###########################  MAP LIST UTILITY  ###########################\n\n";
    start:cout << " OPTIONS:\n";
    cout << " -------------------------------------------------------------------------------\n";
    cout << "|  ---------------------------------------------------------------------------  |\n";
    cout << "| |                                                                           | |\n";
    cout << "| |   [1] ADD KEY & VALUE      [2] MAP SIZE             [3] DELETE MAP        | |\n";
    cout << "| |   [4] DELETE KEY & VALUE   [5] FIND KEY & VALUE     [6] CHECK IF EMPTY    | |\n";
    cout << "| |   [7] PRINT MAP VALUES     [8] PRINT REVERSED MAP   [9] QUIT              | |\n";
    cout << "| |                                                                           | |\n";
    cout << "|  ---------------------------------------------------------------------------  |\n";
    cout << " -------------------------------------------------------------------------------\n";
    cout << " ANSWER: ";

       int answer;
       while(cin >> answer) break;
       if (answer != 9) {
            cout << "####################\n";
        }
       switch (answer)
            {
                case 1:
                    cout << "Enter key and value: ";
                    cin >> key >> value;
                    insert_in_map(key,value);
                    cout << "####################\n";
                    goto start;

                case 2:
                    map_size();
                    goto start;

                case 3:
                    clear_map();
                    goto start;

                case 4:
                    cout << "Enter key: ";
                    cin >> key;
                    delete_from_map(key);
                    goto start;

                case 5:
                    cout << "Enter key: ";
                    cin >> key;
                    my_find_key_value_map(key);
                    //find_key_in_map(key);
                    goto start;

                case 6:
                   check_empty_map();
                   goto start;
                
                case 7:
                    iterating_through_loop();
                    goto start;

                case 8:
                    reverse_iterating_through_loop();
                    goto start;
                
                case 9:
                    cout << "\n############################## PROGRAM ENDED ##############################\n\n";
                    break;


                default:
                    break;
            }
   
    /*
    // access a value with its key and print it out:
    cout << mapname[key] << endl;*/
    // add_key_value_to_map('D',"Dorah");
    // insert_in_map('E',"Eman");
   
    return 0;
}

void add_key_value_to_map(char key, string value) {
    // inserts to the end of map
    names[key] = value;
}

void iterating_through_loop() {

    cout << "####################" << endl;
    if (names.empty() == 1) {
        cout << "Map is empty" << endl;
    }
    else {

        // for loop to go through the whole map and print it out
        for (map<char,string>::iterator it = names.begin(); it != names.end(); ++it)
            {
                // it-> prints the map key and it-> prints map value 
                cout << "Key: " << it->first << "  Value: " <<  it->second << endl;
        }
    }
    cout << "####################" << endl;
}

void reverse_iterating_through_loop() {
    cout << "####################" << endl;
    if (names.empty() == 1) {
        cout << "Map is empty" << endl;
    }
    else {
        // for loop to go through the whole map and print it out in descending order of map key
        for (map<char,string>::reverse_iterator it = names.rbegin(); it != names.rend(); ++it)
            {
                // it-> prints the map key and it-> prints map value 
                cout << "Key: " << it->first << "  Value: " <<  it->second << endl;
        }
    }
    cout << "####################" << endl;
}

void insert_in_map(char key, string value) {

    // inserts to the end of map
    // insert(pair<data type,data type>(key,value))
    names.insert(pair<char,string>(key,value));
}

void delete_from_map(char key) {
    
    if (names.empty() == 1) {
        cout << "Map is empty" << endl;
    }
    else {
        // removes map key and its value
        names.erase(key);
    }
    cout << "####################\n";
}

void find_key_in_map(char key) {
    // looking up a key with corresponding value in map 
    map<char,string>::iterator it = names.find(key);
    cout << "####################" << endl;
    if (names.empty() == 1) {
        cout << "Map is empty" << endl;
        cout << "####################" << endl;
    }  
    else {
    // printing out key and corresponding value 
    cout << "Key: " << it->first << " Value: " <<  it->second << endl;
    cout << "####################" << endl;
    }
}

void map_size() {
    cout << "####################" << endl;

    // prints map size
    cout << "Map size: " << names.size() << endl;
    cout << "####################" << endl;

}

void check_empty_map() {
    cout << "####################" << endl;

    // check if map is empty
    if (names.empty() == 0)
        cout << "Map empty: False" << endl;
    else 
        cout << "Map empty: True" << endl;

    cout << "####################" << endl;

}

void clear_map() {
    cout << "####################" << endl;
    
    // clears map
    names.clear();
    // prints map size
    if (names.empty() == 0)
        cout << "Map deleted: False" << endl;
    else 
        cout << "Map deleted: True" << endl;
    cout << "####################" << endl;

}

void my_find_key_value_map(char key) {
    
    int i = 0;
    if (names.empty() == 1) {
        cout << "Key not found\nMap is empty" << endl;
        cout << "####################" << endl;
        }
    else {

        // for loop to go through the whole map and print it out

        for (map<char,string>::iterator it = names.begin(); it != names.end(); ++it)
        {
            
                if (key == it->first) {
                    // it-> prints the map key and it-> prints map value 
                    cout << "Key: " << it->first << "  Value: " <<  it->second << endl;
                    ++i;
                    break;
                }
            }
        if (i != 1) {
                    cout << "Key not found" << endl;
                }
        cout << "####################" << endl;

        }
}
