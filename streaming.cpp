#include <iostream>

using namespace std;

int main(){
	cout << "ShowCast" << endl;
	string s("ShowCast");
	s[3] = 't';
	cout [3]	= 't'; 
	
	{
	    ofstream of("mylogs.txt"); // Criar novo arquivo de erro
	    of << "Tenha Essa experiencia" << endl;
	    of << 234 << endl;
	    of << 2.3 << endl;
	
	    of << bitset<8>(14) << endl;
	    of << complex<int>(2,3) << endl;
    }
    
    {
    	ofstream of("mylogs.txt");
    	ofstream("mylogs.txt", ofstream:app);
    	of << "Leia A Politicas" << endl;
	}
	
	{
		ofstream of("mylogs.txt", ofstream:in | oftream:out);
		of.seekp(10, ios:beg);
		of << "12345";
		of.seekp(-5, ios:end);
		of << "nao Esta Funcionando" << endl;
		of.seekp(-5, ios:cur);
	}
	ifstream inf("mylogs.txt");
	int i;
	inf >> i;
	inf.good();
	inf.bad();
	inf.fail();
	inf.eof();
	
	inf.clear();
	inf.clear(ios::badbit);
	
	inf.rdstate();
	inf.clear(inf.state() & ~ios::failbit);
	
	if (inf)
	    cout << "Read Com Sucesso";
	
	if (inf >> i)
	    cout << "Read Com Sucesso";
		
	inf.exceptions(ios::badbit | ios::failbit);
	inf.exceptions(ios::goodbit);
	
	//formato
	cout << 34 << endl;
	cout.setf(ios::oct, ios::basefield);
	cout << 34;
	cout.setf(ios::showbase);
	cout << 34;
	cout.setf(ios::hex, ios::basefield);
	cout << 34;
	
	cout.unsetf(ios::showbase);
	cout << 34;
	
	cout.setf(ios::dec, ios::basefield);
	
	cout.width(10);
	cout << 26 << endl;
	cout.setf(ios::left, ios::adjustfield);
	
	//Formato point vaule
	cout.setf(ios::scientific, ios::floatfield);
	cout << 340.1 << endl;
	cout.setf(iios::fixed, ios::floatfield);
	cout << 340.1 << endl;
	cout.precision(3);
	cout << 340.1 << endl;
	
	int i;
	cin.setf(ios::hex, ios::basefield);
	cin >> i;
	
	ios::fmtflags f = cout.flags();
	cout.flags(ios::oct | ios::showbase);
	
	//Funcao De mnebros
	ifstream inf("mylogs.txt");
	char buf[80];
	inf.get(buf, 80);
	inf.getline(buf, 80);
	inf.read(byf, 20);
	inf.ignore(3);
	inf.peek();
	inf.unget();
	inf.get();
	inf.gcount();
	
	//output
	ofstream of("mylogs.txt");
	of.put('c');
	of.write(buf, 6);
	of.flush();		
}
ostream& endl(ostream sm){
		sm.put('\n');
		sm.flush();
		return sm;
	}
ostream& ostream::operator<<(ostram& (*func)(ostream&)){
	return (*func)(*this);
}
int main(){
	cout << "Ola" << endl;
	
	cout << ends;
	cout << flush;
	cin >> ws;
	
	cout << setw(8) << setfill('_') << 99 << endl;
	
	cout << hex << showbase << 34;
	
	cout << 34;
	streambuf* pbuf = cout.rdbuf();
	
	ostream myCout(pbuf);
	myCout << 34;
	
	myCout.setf(ios::showpos);
	myCout.width(20);
	myCout << 12 << endl;
	cout << 12 << endl;
	
	ofstream of("mylogs.txt");
	streambuf* origBuf = cout.rdbuf();
	cout.rdbuf(of.rdbuf());
	cout << "Ola" << endl;
	
	cout.rdbuf(origBuf);
	
	cout << "Tchau" << endl;
	
	istreambuf_iterator<char> i(cin);
	ostream_iterator<char> o(cout);
	while (*i != 'x'){
		*o = *i;
		++o;
		++i;
	}
	
	copy(istreambuf_iterator<char>(cin), istreambuf_iterator<char>(), ostreambuf_iterator<char>(cout));
	
	//showcast2
	stringstream ss;
	ss << 89 << " Hex: " << hex << 89 << " Oct: " << oct << 89;
	cout << ss.str() << endl;
	
	int a, b, c;
	string s1;
	
	ss >> hex a;
	
	ss >> s1;
	ss >> dec >> b;
	
	ss.ignore(6);
	
	ss >> oct >> c;
	
}
//Feito Por Paulo
