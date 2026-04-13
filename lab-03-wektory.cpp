#include <iostream>
#include <random>
#include <chrono>
#include <vector>   // biblioteka definiująca wektor

int main ()
{
	// Zadania na czwórkę.

	/* 1. Proszę zadeklarować wektor liczb całkowitych o nazwie «calkowite». */


	/* 2. Proszę zdefiniować zmienną n i ją zainicjować. Proszę wypełnić wektor «calkowite» n liczbami losowymi. */

	const int MAX { 10 };
	std::default_random_engine silnik;
	silnik.seed(std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution rozklad { 0, MAX - 1};


	/* 3. Proszę wypisać liczby w wektorze. Proszę skorzystać z zakresowej pętli for. */


	/* 4. Proszę stworzyć wektory: «parzyste» i «nieparzyste». */


	/* 5. Proszę skopiować do wektora «parzyste» parzyste liczby z wektora «całkowite», a nieparzyste do wektora «nieparzyste». Proszę skorzystać z pętli for z indeksem. */


	/* 6. Proszę wypisać wektory «parzyste» i «nieparzyste». */


	/* 7. Proszę zanegować liczby (zmienic ich znak na przeciwny) w wektorze «nieparzyste». Proszę skorzystać z zakresowej pętli for, ...  */


	/* ... i proszę wypisać «nieparzyste».  */


	/* 8. Proszę znaleźć maksimum w wektorze «parzyste». */


	/* 9. Proszę znaleźć największą bezwzględną różnicę między dwiema sąsiednimi liczbami w «parzystych». Np. Jeżeli wektor zawiera liczby [ 4 34 78 12 6 90 ], największa bezwględna różnica wynosi 84 (tzn. 90 - 6). */


	/* 10. Proszę znaleźć największą bezwzględną różnicę między dwiema liczbami w «parzystych». Np. Jeżeli wektor zawiera liczby [ 4 34 78 12 6 90 ], największa bezwględna różnica wynosi 86 (tzn. 90 - 4). */


	/* 11. Proszę wyczyścić wektory «nieparzyste» i «parzyste». */

	/* 12. Proszę dodać do «nieparzystych» kolejne rosnące liczby nieparzyste (od 1), a do «parzystych» kolejne rosnące liczby parzyste. Oba wektory powinny liczyć po n liczb. */


	/* ... proszę wypisać oba wektory ...  */

	/* 13. Proszę scalić wartości wektorów «parzyste» i «nieparzyste» w jeden wektor «scalone» zawierający liczby w porządku rosnącym. */


	/* ... i wypisać «scalone». */


	// Zadania na piątkę.

	/* 14. Proszę stworzyć dwa wektory (A i B) liczb całkowitych i wypełnić je n liczbami losowymi.  */
   
	std::vector<int> A, B;

	/* .... proszę przemożyć każdą wartość w B przez 2 ...  */


	/* ... sortujemy oba wektory ...  */

	std::sort (A.begin(), A.end());
	std::sort (B.begin(), B.end());

	/* ... proszę wypisać oba wektory ... */

	/* ... proszę scalić posortowane wektory A i B w jeden posortowany wektor «wszystkie». */


	/* ... i wypisujemy kontrolnie «wszystkie»  */
	
	
	/* 15. Proszę usunąć zawartość wektorów A i B, a następnie wypełnić je n wartościami losowymi. */
        
        /* ... proszę stworzyc wektor I będący przecięciem wektorów A i B. Do przeciecia naleza te elementy wektora A, ktore naleza tez do wektora B. */
        
        /* ... wypiszemy A, B i I. */
	

   return 0;
} 

