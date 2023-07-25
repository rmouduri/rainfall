#include <unistd.h>
#include <cstring>

class N {
public:
  int nb;
  char annotation[108];
  
  N(int val) : nb(val) {
    nb = val;
  }
  
  int operator+(N &right) {
    return this->nb + right.nb;
  }
  
  int operator-(N &right) {
    return this->nb - right.nb;
  }
  void setAnnotation(char *str) {
    memcpy(this->annotation, str, strlen(str));
  }
};

int main(int ac, char **av)
{
  if (ac <= 1)
    _exit(1);
  
  N *a = new N(5);
  N *b = new N(6);
  
  a->setAnnotation(av[1]);

  (***a)(); // ne compile pas mais c'est pour comprendre qu'il y a 3 dereferencements

  //  int (***ret)() = reinterpret_cast<int(***)()>(a); // compile mais pas le bon comportement
  //(***ret)();
  
  return 0;
}
