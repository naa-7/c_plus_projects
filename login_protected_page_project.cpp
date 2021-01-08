#include <iostream>
#include <string>
using namespace std;

class informationFile{

public:
  void info() {
  std::cout << "Hello there! What is your name?" << "\n-> ";

  while(std::cin >> name) {
    std::cout << "Your name is [" << name << "], Enter [1] for YES or [2] for NO: ";
    std::cin >> yesOrNo;

    if(yesOrNo == 1) {
      std::cout << "________________________" << '\n';
      std::cout << "How old are you?" << "\n-> ";
      break;
    } else if(yesOrNo == 2){
      std::cout << "\nRe-Enter your name: ";
    } else {
      break;
    }
  }

  while (std::cin >> age) {
    std::cout << "Your age is [" << age << "], Enter [1] for YES or [2] for NO: ";
    std::cin >> yesOrNo;

    if (yesOrNo == 1) {
      std::cout << "________________________" << '\n';
      std::cout << "Enter your gender: ";
      break;
    } else if (yesOrNo == 2) {
      std::cout << "\nRe-Enter your age: ";
    } else {
      break;
    }
  }

  while (std::cin >> gender) {
    std::cout << "Your gender is [" << gender << "], Enter [1] for YES or [2] for NO: ";
    std::cin >> yesOrNo;

    if (yesOrNo == 1) {
      std::cout << "_________________________" << '\n';
      std::cout << "What is your ethnicity?" << "\n";
      std::cout << "[1] White, [2] Black or African American, [3] Native American, [4] Asian, " << '\n';
      std::cout << "[5] North African, [6] Pacific Islander, [7] Middle Eastern, [8] Hispanic, [9] Other." << '\n';
      std::cout << "Enter a number: ";
      break;
    }
    else if (yesOrNo == 2) {
      std::cout << "\nRe-Enter your gender: ";
    } else {
      break;
    }
  }

  while (std::cin >> i) {
    if (i == 1) {
    ethnicity = "White";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else if (i == 2) {
    ethnicity = "Black or African American";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else if (i == 3) {
    ethnicity = "Native American";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else if (i == 4) {
    ethnicity = "Asian";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else if (i == 5) {
    ethnicity = "North African";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else if (i == 6) {
    ethnicity = "Pacific Islander";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else if (i == 7) {
    ethnicity = "Middle Eastern";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else if (i == 8) {
    ethnicity = "Hispanic";
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  } else {
    std::cout << "Enter your ethnicity: ";
    std::cin >> ethnicity;
    std::cout << "Your ethnicity is [" << ethnicity << "], Enter [1] for YES or [2] for NO: ";
  }
    std::cin >> yesOrNo;

    if (yesOrNo == 1) {
      std::cout << "_________________________" << '\n';
      std::cout << "What is your highest degree?" << "\n";
      std::cout << "[1] High School, [2] Some College, [3] Associate's Degree, " << '\n';
      std::cout << "[4] Bachelor's Degree, [5] Master's Degree, [6] Doctoral Degree, [7] Other." << '\n';
      std::cout << "Enter a number: ";
      break;
    }
    else if (yesOrNo == 2) {
      std::cout << "\nRe-Enter your ethnicity: ";
    } else {
      break;
    }
  }

  while (std::cin >> n) {
    if (n == 1) {
      degree = "High School";
      std::cout << "Your highest degree is [" << degree << "], Enter [1] for YES or [2] for NO: ";
    } else if (n == 2) {
      degree = "Some College";
      std::cout << "Your highest degree is [" << degree << "], Enter [1] for YES or [2] for NO: ";
    } else if (n == 3) {
      degree = "Associate's Degree";
      std::cout << "Your highest degree is [" << degree << "], Enter [1] for YES or [2] for NO: ";
    } else if (n == 4) {
      degree = "Bachelor's Degree";
      std::cout << "Your highest degree is [" << degree << "], Enter [1] for YES or [2] for NO: ";
    } else if (n == 5) {
      degree = "Master's Degree";
      std::cout << "Your highest degree is [" << degree << "], Enter [1] for YES or [2] for NO: ";
    } else if (n == 6) {
      degree = "Doctoral Degree";
      std::cout << "Your highest degree is [" << degree << "], Enter [1] for YES or [2] for NO: ";
    } else {
      std::cout << "Enter your highest degree: ";
      std::cin >> degree;
      std::cout << "Your highest degree is [" << degree << "], Enter [1] for YES or [2] for NO: ";
    }
    std::cin >> yesOrNo;

    if (yesOrNo == 1) {
      std::cout << "_________________________" << '\n';
      std::cout << "What is your occuption?" << "\n-> ";
      break;
    } else if (yesOrNo == 2){
      std::cout << "\nRe-Enter your highest degree: ";
    } else {
      break;
    }
  }

  while (std::cin >> occuption) {
    std::cout << "Your occuption is [" << occuption << "], Enter [1] for YES or [2] for NO: ";
    std::cin >> yesOrNo;

    if (yesOrNo == 1) {
      std::cout << "_________________________" << '\n';
      std::cout << "What is your marital status?" << "\n-> ";
      break;
    } else if (yesOrNo == 2){
      std::cout << "\nRe-Enter your occuption: ";
    } else {
      break;
    }
  }

  while (std::cin >> status) {
    std::cout << "Your marital status is [" << status << "], Enter [1] for YES or [2] for NO: ";
    std::cin >> yesOrNo;

    if (yesOrNo == 1) {
      std::cout << "#########################" << '\n';
      std::cout << "Personal Information: " << '\n';
      std::cout << "#########################" << '\n';
      std::cout << "[1] Name: " << name << '\n';
      std::cout << "[2] Age: " << age << '\n';
      std::cout << "[3] Gender: " << gender << '\n';
      std::cout << "[3] Ethnicity: " << ethnicity << '\n';
      std::cout << "[5] Degree: " << degree << '\n';
      std::cout << "[6] Occuption: " << occuption << '\n';
      std::cout << "[7] Status: " << status << '\n';
      break;
    } else if (yesOrNo == 2){
      std::cout << "\nRe-Enter your marital status: " << '\n';
    } else {
      break;
    }
  }
}

private:
  string name, age, gender;
  string ethnicity, degree;
  string occuption, status;
  int yesOrNo, i, n;

};

class loginManager:public informationFile {
public:
  string attemptedUserName;
  string attemptedUserPassword;

  loginManager(string username, string password) {
    userName = username;
    userPassword = password;
    accessGranted = 0;
  }

  void login() {
    std::cout << "_____Login page_____" << '\n';
    std::cout << "username: ";
    std::cin >> attemptedUserName;

    while (true) {
      if ( attemptedUserName == userName) {
      cout << "password: ";
      cin >> attemptedUserPassword;
      cout << '\n';
      if (attemptedUserPassword == userPassword) {
        cout << "_____Login successful_____\n" << '\n';
        info();
        break;
      } else {
        std::cout << "**Wrong password**" << '\n';
        std::cout << "Enter [ctrl+c] to exit. To continue, enter ";

      }
    } else {
      std::cout << "**Wrong username**\n" << '\n';
      std::cout << "Enter [ctrl+c] to exit. To continue, enter username: ";
      cin >> attemptedUserName;
    }
  }
}

private:
  string userName;
  string userPassword;
  bool accessGranted;
};


int main() {
  string username, password;
  std::cout << "To register, you need to make a username and a password" << '\n';
  std::cout << "Enter a username: ";
  std::cin >> username;
  std::cout << "Enter a password: ";
  std::cin >> password; 

  loginManager loginManager(username,password);
  loginManager.login();
  // informationFile informationFile;
  // informationFile.info();

  return 0;
}
