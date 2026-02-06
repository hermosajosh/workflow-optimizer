#ifndef Login_hpp

#define Login_hpp

#include<iostream>
#include<string>

class Login {

  private:

    std::string user;
    std::string pass;

  public:
    
    Login();

    void generate_intro();

    std::string query_username();

    std::string query_password();

    void handoff(std::string&, std::string&);

};

#endif
