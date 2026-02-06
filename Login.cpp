#include"Login.hpp"

void Login::generate_intro(){
  std::cout << "\n\nGreetings, welcome to the Hyperion Workflow Manager. Please enter your username below to get started.\n\n" << std::endl;

}

std::string Login::query_username(){

  std::string username;

  std::cout << "Username: ";
  getline(std::cin, username);

  return username;

}

std::string Login::query_password(){

  std::string password;

  std::cout << "Password: ";
  getline(std::cin, password);

  return password;

}

void Login::handoff(std::string& username, std::string& password){
  std::cout << "\nUser, Pass is: " << username << password << std::endl;
}

Login::Login(){

  generate_intro();

  this -> user = query_username();

  std::cout << "\nEnter your password below.\n" << std::endl;
  
  this -> pass = query_password();

  handoff(this -> user, this -> pass);
}
