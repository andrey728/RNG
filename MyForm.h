#pragma once
#include <iostream>
#include <math.h>
#include <vector>
#include <math.h> 
#include <algorithm>
#include <array>
#include <string>
#include <map>
#include <ctime>

//#define _USE_MATH_DEFINES

namespace RNG {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	std::vector <double> random;
	std::vector <double> X;
	std::vector <double> Pi;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Дж. фон Нейман";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"А.Энгель";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 221);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 276);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 119);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 250);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 36);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Вывод информации";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(260, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(244, 318);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"X";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"P(i)";
			this->Column2->Name = L"Column2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Источник";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Количество";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(510, 51);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(563, 544);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(1079, 51);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(508, 544);
			this->chart2->TabIndex = 10;
			this->chart2->Text = L"chart2";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(24, 124);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 27);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Стандарт";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1599, 620);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void RNG_Quadrat(std::vector<double>& random, String^ defolt, int m) {

	if (random.size() == m) return;
	String^ r0 = defolt->Substring(2);
	double len = r0->Length;
	double R0 = Convert::ToDouble(r0);
	double R = pow(R0, 2);
	int Start = len / 2;
	String^ r = Convert::ToString(R);
	String^ r1 = r->Substring(Start, len);
	r1 = r1->Insert(0, "0,");
	random.push_back(Convert::ToDouble(r1));
	RNG_Quadrat(random, r1, m);
}


void RNG_Egel(std::vector<double>& random, String^ defolt, int m) {

	if (random.size() == m) return;
	String^ r0 = defolt->Substring(2);
	double len = r0->Length;
	double R0 = Convert::ToDouble(r0);
	double R = floor(R0 + pow(3.14, 8));
	String^ r = Convert::ToString(R);
	r = r->Insert(0, "0,");
	random.push_back(Convert::ToDouble(r));

	RNG_Quadrat(random, r, m);
}

void standart(std::vector<double>& random, int m) {
	srand(time(0)); // автоматическая рандомизация
	for (int i = 0; i < m; i++) {
		random.push_back(rand() % RAND_MAX);
	}
}

private: double Mathozh(std::vector<double>& vecX, std::vector<double>& vecRNG)
{
	int vecsize = vecX.size();
	float mathozh = 0;
	for (int j = 0; j < vecsize; j++)
	{
		mathozh += vecX[j] * vecRNG[j];
	}
	return mathozh;
}

private: double Dispers(std::vector<double>& vecX, std::vector<double>& vecRNG, float mat)
{
	int vecsize = vecX.size();
	float disp = 0;
	for (int j = 0; j < vecsize; j++)
	{
		disp += pow(vecX[j] - mat, 2) * vecRNG[j];
	}
	return disp;
}


void recoling(std::vector<double>& random, int m) {
	double save;
	int in;
	for (int i = 0; i < random.size(); i++) {
		save = random[i];
		if (!(std::find(X.begin(), X.end(), save) != X.end())) {
			X.push_back(save);
		}
	}
	for (int i = 0; i < X.size(); i++) {
		in = 0;
		for (int j = 0; j < random.size(); j++) {
			if (random[j] == X[i]) {
				in++;
			}
		}
		Pi.push_back(in);
	}
	for (int i = 0; i < Pi.size(); i++) {
		Pi[i] = Pi[i] / m;
	}
	int left = 0, right = Pi.size() - 1;
	quickSort(X, Pi, left, right);
}

void quickSort(std::vector <double>& X, std::vector <double>& Pi,  int left, int right) {
	int Left = left, Right = right;
	double tmp;
	double quantity;
	double abc;
	double pivot = Pi[(left + right) / 2];
	if (right - left <= 1) return;
	while (Left <= Right) {
		while (Pi[Left] < pivot) Left++;
		while (Pi[Right] > pivot) Right--;
		if (Left <= Right) {
			tmp = Pi[Left];
			abc = X[Left];
			
			Pi[Left] = Pi[Right];
			Pi[Right] = tmp;
			X[Left] = X[Right];
			X[Right] = abc;
			Left++;
			Right--;
		}
	};
	if (left < Right)
		quickSort(X, Pi, left, Right);
	if (Left < right)
		quickSort(X, Pi, Left, right);
}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	random.clear();
	Pi.clear();
	String^ defolt = textBox1->Text;
	int m = Convert::ToInt32(textBox3->Text);
	RNG_Quadrat(random, defolt, m);
	recoling(random, m);
	for (int i = 0; i < X.size(); i++) {
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(Pi[i]);
		dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(X[i]);
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	random.clear();
	Pi.clear();
	String^ defolt = textBox1->Text;
	int m = Convert::ToInt32(textBox3->Text);
	RNG_Egel(random, defolt, m);
	recoling(random, m);
	for (int i = 0; i < X.size(); i++) {
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(Pi[i]);
		dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(X[i]);
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	random.clear();
	Pi.clear();

	int m = Convert::ToInt32(textBox3->Text);
	standart(random, m);
	recoling(random, m);
	for (int i = 0; i < X.size(); i++) {
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(Pi[i]);
		dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(X[i]);
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//std::sort(Pi.begin(), Pi.end());
	std::map<double, int> govnoAndreя;
	std::map<double, int>::iterator it;
	double mathozh, Disp, sqr, summPi;
	int left = 0, right = X.size() - 1;

	//for (int i = 0; i < X.size(); i++) {
	//	if (govnoAndreя.count(X[i]) == 0) govnoAndreя[X[i]] = 1;
	//	else {
	//		it = govnoAndreя.find(X[i]);
	//		govnoAndreя[X[i]] = it->second + 1;
	//	}
	//}
	//for (it = govnoAndreя.begin(); it != govnoAndreя.end(); it++) {
	//	chart1->Series["Series2"]->Points->AddXY(it->first, it->second);
	//}
	//for (int i = 0; i < X.size(); i++) {
	//chart2->Series["Series1"]->Points->Add(X[i]);
	//}
	for (int i = 0; i < X.size(); i++) {	
		chart1->Series["Series2"]->Points->AddXY(X[i], Pi[i]);
	}

	quickSort(Pi, X, left, right);
	for (int i = 0; i < X.size(); i++) {
		summPi += Pi[i];
		
		chart2->Series["Series1"]->Points->Add(summPi);
	}
	

	mathozh = Mathozh(X, Pi);
	Disp = Dispers(X, Pi, mathozh);
	sqr = sqrt(Disp);
	textBox2->Text = "Математическое ожидание: " + mathozh + "\r\n" + "Дисперсия: " + Disp + "\r\n" + "Среднее квадратическое отклонение: " + sqr + "\r\n";

}




};
}
