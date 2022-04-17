#include "ProgramDiscount.h"


// TODO: утечка памяти +
// TODO: этому методу здесь не место. Тем более, базовый класс не должен ничего знать про дочерние +
void DiscountProgram::DemoDiscount()
{
	Product* notebook =
		new Product("Lenovo Yoga", Notebook, 79990);
	Product* computerMouse =
		new Product("A4Tech ZL5", ComputerMouse, 5990);
	Product* personalComputer =
		new Product("Lenovo ThinkCenter", PersonalComputer, 99990);
	Product* keyboard =
		new Product("Logitech G413", Keyboard, 6990);

	vector<Product*> products;
	products.push_back(notebook);
	products.push_back(computerMouse);
	products.push_back(personalComputer);
	products.push_back(keyboard);

	PercentDiscount percentDiscount =
		PercentDiscount(Notebook, 15);
	CertificateDiscount certificateDiscount =
		CertificateDiscount(Keyboard, 5000);

	cout << "Percent discount: " << endl;
	DiscountBase::ShowCheckWithDiscount(&percentDiscount, products);
	cout << endl << "Certificate discount: " << endl;
	DiscountBase::ShowCheckWithDiscount(&certificateDiscount, products);
	cout << endl;

	delete notebook;
	delete computerMouse;
	delete personalComputer;
	delete keyboard;
}
