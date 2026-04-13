#include <iostream>   // operacje wejscia/wyjscia, pisanie na ekranie, czytanie z klawiatury

int main ()
{    
   int W, K;
   int zadanie { 0 };
   
   std::cout << "Podaj rozmiary prostokata: ";
   std::cin >> W >> K;
   
   ///////////////////////////////////////////////////////////////
   // Zadania na czwórkę.
   ///////////////////////////////////////////////////////////////
   std::cout << std::endl << "ZADANIE " << zadanie++ << std::endl;

   // Prosze napisac fragment kodu, ktory zapisuje iksami prostokat
   // o rozmiarach W na K. 

   for (int w = 0; w < W; w++)
   {
      for (int k = 0; k < K; k++)
      {
         std::cout << 'X';
      }
      std::cout << std::endl;
   }

   ///////////////////////////////////////////////////////////////
   std::cout << std::endl << "ZADANIE " << zadanie++ << std::endl;
  
   // Prosze napisac fragment kodu, ktory wypelnia prostokat poziomymi
   // pasami o wysokosci 1 znaku. Pasy sa zbudowane za zmiane z 'X' i '.'.



   ///////////////////////////////////////////////////////////////
   std::cout << std::endl << "ZADANIE " << zadanie++ << std::endl;

   // Prosze napisac fragment kodu, ktory wypelnia prostokat pionowymi
   // pasami o szerokosci 1 znaku. Pasy sa zbudowane za zmiane z 'X' i '.'.



   ///////////////////////////////////////////////////////////////
   std::cout << std::endl << "ZADANIE " << zadanie++ << std::endl;

   // Prosze napisac fragment kodu, ktory wypelnia prostokat
   // w szachownice iksow i kropek.



   ///////////////////////////////////////////////////////////////
   std::cout << std::endl << "ZADANIE " << zadanie++ << std::endl;

   // Prosze napisac fragment kodu, ktory rysuje ramke prostokata z iksow.



   ///////////////////////////////////////////////////////////////
   std::cout << std::endl << "ZADANIE " << zadanie++ << std::endl;

   // Prosze napisac fragment kodu, ktory rysuje szachownice zbudowana 
   // z czterech cwierci (jednakowej wysokosci i szerokosci z dokladnoscia
   // do jednego znaku).
   // Przyklad:
   //    XXX..
   //    XXX..
   //    ...XX
   //    ...XX



   ///////////////////////////////////////////////////////////////
   // Zadanie na piatke.
   ///////////////////////////////////////////////////////////////
   std::cout << std::endl << "ZADANIE " << zadanie++ << std::endl;

   // Prosze napisac fragment kodu, ktory rysuje katy zbudowane z 'X' i ' '.
   // Przyklad:
   //    XXXXXXXX
   //    X    
   //    X XXXXXX
   //    X X 
   //    X X XXXX 
   //    X X X
   //    X X X XX 
   //    X X X X



   return 0;
}
