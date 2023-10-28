#include <iostream>
#include <vector>
#include <string>

using namespace std;

	int main()
	{
		


		vector<int>ww1{1,2,3,4,5,6,7,8,9,10};
		vector<int>ww{9,4,7,-6,2,7,1,2,3,4};
		vector<int>ww2{0,1,2,3,4};

		

			cout << "ww[1] = " << ww[1] << endl;
			cout << "ww1[1] =" <<ww1[1] << endl; 
			cout << "ww2[1] =" <<ww2[1] << endl;

		int rozmiar = ww.size();
		int rozmiar1= ww1.size();
		int rozmiar2= ww2.size();
			
		cout << "ROZMIARY WEKTOROW:\n" << rozmiar << endl;
		cout << rozmiar1 << endl;
		cout <<	rozmiar2 << endl;
		cout << "\n\n";

		for( int i = 0; i < ww.size(); ++i )
		{
			cout << ww[i] << "\t,";
		}

		for( int i = 0; i < ww1.size(); ++i )
		{
			cout <<ww1[i] << "\t,";
		}

		for( int i = 0; i < ww2.size(); ++i )
		{
			cout << ww2[i] << "\t,";
		}

		cout << endl;


		int b = ww[4] + 500;
		ww[2] = ww[3] * 10;

			cout << "b = " << b << "\tww[2] = " << ww[2] << endl;

		cout << "\nObecna zawartosc wektora ww:" << endl;

		for( int nr = 0; nr < ww.size(); ++nr )
		{
			cout << "ww["<<nr<<"]=" << ww[nr];
			if( ww[nr] == 2 )
			{
				cout << "\tdwa!";
			}
			cout << endl;
		}
		
		for( int nr = 0; nr << ww1.size(); ++nr)
		{
			cout << "ww1["<<nr<<"]=" << ww1[nr];
			if( ww1[nr] == 3 )
			{	
				cout << "\ttrzy!!!";
			}
			cout << endl;
		}

	}
