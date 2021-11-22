

#include <iostream>

using namespace std;

int
main ()
{

  double viza;
  double final;
  double butunleme;
  cout << "please enter you viza note" << endl;
  cin >> viza;
  cout << "please enter your final note" << endl;
  cin >> final;
  double note = (viza * 0.3) + (final * 0.7);
  if (note > 85)
    {
      cout << "tebrikler gectin ve A derece aldin ve notonuz :" << note <<
	endl;
    }
  else if (note > 70 && note < 80)
    {
      cout << "tebrikler gectin ve B derece aldin ve notonuz :" << note <<
	endl;
    }
  else if (70 > note && note > 50)
    {
      cout << " tebrikler gectin ve C derece aldin ve notonuz :" << note <<
	endl;
    }
  else
    {
      cout << "kaldin maalesef ve notunuz :" << note << endl;
    }


  return 0;
}
