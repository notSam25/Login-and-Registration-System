#include <iostream>
#include <string.h>
#include <memory>
#include <fstream>

void Login()  {
  char username[64], password[64];
  memset(username, 0, sizeof(username));
  memset(password, 0, sizeof(password));

  std::cout << "\nPlease enter your username: ";
  std::cin >> username;
  std::cout << "\nPlease enter your password: ";
  std::cin >> password;

  std::cout << "Attempting login...\n";

}

void Register() {
  char username[64], password[64];
  memset(username, 0, sizeof(username));
  memset(password, 0, sizeof(password));

  std::cout << "\nPlease enter your username: ";
  std::cin >> username;
  std::cout << "\nPlease enter your password: ";
  std::cin >> password;

  std::cout << "Attempting registration...\n";
  
}

int main()  {

  std::cout << "Select an option!\n1) Login\n2) Register" << std::endl;
SelectOption:
  std::cout << "Option: ";
  char responce[256];
  memset(responce, 0, sizeof(responce));
  std::cin >> responce;

  if (strcmp(responce, "1") == 0)
    Login();
  else if (strcmp(responce, "2") == 0)
    Register();
  else if((unsigned)strlen(responce) > 1)  {
    std::cout << "invalid option selected. Please try again.\n";
    goto SelectOption;
  }
  else {
    std::cout << "invalid option selected. Please try again.\n";
    goto SelectOption;
  }

  return 0;
}