#pragma once
const int n = 3; // розмір квадратної матриці
int mat[n][n];
 
namespace Lz7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(69, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(669, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 93);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(297, 93);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(240, 150);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 261);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Заповнити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(568, 93);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(240, 150);
			this->dataGridView3->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(373, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 44);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Змінити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(653, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 44);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Сортувати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 332);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Random^ rand = gcnew Random();
    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    // Додати стовпці
    for (int i = 0; i < n; i++) {
        dataGridView1->Columns->Add(i.ToString(), "C" + i.ToString());
    }

    // Додати рядки
    dataGridView1->Rows->Add(n);

    // Заповнення випадковими числами
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = rand->Next(0, 100);
            dataGridView1->Rows[i]->Cells[j]->Value = mat[i][j];
        }
    }
			 }
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int minVal = mat[0][0];
    int minI = 0, minJ = 0;

    // Пошук мінімального елемента
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < minVal) {
                minVal = mat[i][j];
                minI = i;
                minJ = j;
            }
        }
    }

    // Обмін з останнім елементом mat[n-1][n-1]
    int temp = mat[minI][minJ];
    mat[minI][minJ] = mat[n - 1][n - 1];
    mat[n - 1][n - 1] = temp;

    // Вивід у dataGridView2 (код очищення та створення колонок такий же, як у тебе)
    dataGridView2->Columns->Clear();
    for (int i = 0; i < n; i++) dataGridView2->Columns->Add(i.ToString(), "C" + i.ToString());
    dataGridView2->Rows->Add(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dataGridView2->Rows[i]->Cells[j]->Value = mat[i][j];
        }
    }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                // Якщо рядок парний (0, 2..) — сортуємо за зростанням
                if (i % 2 == 0) {
                    if (mat[i][j] < mat[i][k]) {
                        int temp = mat[i][j];
                        mat[i][j] = mat[i][k];
                        mat[i][k] = temp;
                    }
                }
                // Якщо рядок непарний (1, 3..) — сортуємо за спаданням
                else {
                    if (mat[i][j] > mat[i][k]) {
                        int temp = mat[i][j];
                        mat[i][j] = mat[i][k];
                        mat[i][k] = temp;
                    }
                }
            }
        }
    }

    // Вивід у dataGridView3
    dataGridView3->Columns->Clear();
    for (int i = 0; i < n; i++) dataGridView3->Columns->Add(i.ToString(), "C" + i.ToString());
    dataGridView3->Rows->Add(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dataGridView3->Rows[i]->Cells[j]->Value = mat[i][j];
        }
    }
 }

};
}
