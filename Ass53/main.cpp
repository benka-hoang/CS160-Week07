#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

bool Grade(ifstream &teacher, ifstream &student) {
	int n, m; teacher >> n, student >> m;
	char *tc = new char[n], *st = new char[m];
	for (int i = 0; i < n; ++i) {
		teacher.ignore();
		tc[i] = teacher.get();
	}
	for (int i = 0; i < m; ++i) {
		student.ignore();
		st[i] = student.get();
	}
	bool missed = false;
	if (m < n) missed = true;
	else {
		for (int i = 0; i < n; ++i) if (tc[i] != st[i]) {
			missed = true;
			break;
		}
	}
	if (missed == false) {
		cout << "All answer is correct\n";
		cout << "Percentage : 100%\n";
		return true;
	}
	int count = 0;
	cout << "List of missed question : (Correct Answer / Student's Answer)\n";
	for (int i = 0; i < n; ++i) {
		if (i < m && tc[i] != st[i]) {
			cout << "       Question " << i << " : " << tc[i] << " / " << st[i] << "\n";
			++count;
		}
		if (i >= m) {
			cout << "       Question " << i << " : " << "No answer from student\n";
			++count;
		}
	}
	cout << "Total number of question missed : " << count << "\n";
	
	cout << "The percentage of questions answered correctly : ";
	float per = (float)(n - count) / (float)(n);
	cout << fixed << setprecision(2) << per * 100 << "%\n";
	const float eps = 0.0001;
	return per > ((float)(0.7) - eps);
}

int main() {
	/*
		This program will help you to build a function that can auto-grade the point of your student
		Feature of function:
			- Show a list of missed question (Correct Answer and Student's Answer)
			- Show total number of question missed
			- Show the percentage of question answer correctly
			- Return false : Student fail
					 true  : Student pass
	*/
	ifstream teacher("CorrectAnswers.txt"), student("StudentAnswers.txt");
	if (Grade(teacher, student) == true)
		cout << "Student pass the exam\n";
	else
		cout << "Student fail the exam\n";
	teacher.close(), student.close();
	return 0;
}