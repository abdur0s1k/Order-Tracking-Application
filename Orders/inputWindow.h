#pragma once

namespace Orders {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class inputWindow : public System::Windows::Forms::Form
	{
	public:
		delegate void DeliveryDataHandler(String^ orderNumber, String^ dateTime, String^ deliveryAddress, String^ clientName, String^ clientContact, String^ orderContent, String^ courierName, String^ courierContact, String^ courierTransport, String^ orderStatus, String^ reward, String^ notes);
		event DeliveryDataHandler^ DeliveryDataReady;
		event DeliveryDataHandler^ EditedDeliveryDataReady;

		inputWindow(void)
		{
			InitializeComponent();
			InitializeData();
			button1->Click += gcnew EventHandler(this, &inputWindow::button1_Click);
			comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &inputWindow::comboBox1_SelectedIndexChanged);
			button2->Click += gcnew EventHandler(this, &inputWindow::button2_Click);
			button3->Click += gcnew EventHandler(this, &inputWindow::button3_Click);
		}

		inputWindow(String^ orderNumber, String^ dateTime, String^ deliveryAddress, String^ clientName, String^ clientContact,
			String^ orderContent, String^ courierName, String^ courierContact, String^ courierTransport,
			String^ orderStatus, String^ reward, String^ notes)
		{
			InitializeComponent();

			// Инициализация формы предоставленными данными
			textBox1->Text = orderNumber;
			textBox2->Text = dateTime;
			textBox3->Text = deliveryAddress;
			textBox4->Text = clientName;
			textBox5->Text = clientContact;
			textBox6->Text = orderContent;
			comboBox1->Text = courierName;
			comboBox2->Text = courierContact;
			comboBox3->Text = courierTransport;
			comboBox4->Text = orderStatus;
			textBox7->Text = reward;
			textBox8->Text = notes;
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private:
		// Функция для обновления содержимого комбобокса с курьерами
		void UpdateCourierComboBoxes() {
			// Очищаем список курьеров в комбобоксе
			comboBox1->Items->Clear();

			// Добавляем каждого курьера из словаря в комбобокс
			for each (KeyValuePair<String^, String^> ^ pair in courierData) {
				comboBox1->Items->Add(pair->Key);
			}
		}
		// Данные о курьерах
		Dictionary<String^, String^>^ courierData;


		void InitializeData() {
			courierData = gcnew Dictionary<String^, String^>();
			courierData->Add("Иванов Иван Иванович", "+79123456789");
			courierData->Add("Петров Петр Петрович", "+79234567890");
			courierData->Add("Сидоров Сидор Сидорович", "+79345678901");

			for each (KeyValuePair<String^, String^> ^ pair in courierData) {
				comboBox1->Items->Add(pair->Key);
			}

			// Добавляем типы транспорта
			comboBox3->Items->Add("Грузовик");
			comboBox3->Items->Add("Фургон");
			comboBox3->Items->Add("Легковой автомобиль");

			// Добавляем статусы заказа
			comboBox4->Items->Add("В доставке");
			comboBox4->Items->Add("Доставлен");
		}

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(404, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Готово";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(226, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Номер заказа";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Дата и время заказа";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Адрес доставки";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"ФИО клиента";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Контактные данные клиента";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 236);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Содержимое заказа";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(472, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Вознаграждение";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(226, 233);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(173, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(226, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(173, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(721, 40);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(173, 22);
			this->textBox7->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(472, 89);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"ФИО курьера";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(472, 138);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(194, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Контактные данные курьера";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(472, 184);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(169, 16);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Тип транспорта курьера";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(721, 86);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 24);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &inputWindow::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(721, 135);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(173, 24);
			this->comboBox2->TabIndex = 19;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(721, 181);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(173, 24);
			this->comboBox3->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(472, 331);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Статус заказа";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(721, 326);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(173, 24);
			this->comboBox4->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(226, 326);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(173, 22);
			this->textBox8->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 329);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(150, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Примечание к заказу";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(226, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 22);
			this->textBox2->TabIndex = 25;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(226, 187);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(173, 22);
			this->textBox4->TabIndex = 26;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(226, 282);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(173, 22);
			this->textBox5->TabIndex = 27;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(721, 404);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(173, 22);
			this->textBox9->TabIndex = 28;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(721, 432);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(173, 22);
			this->textBox10->TabIndex = 29;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(743, 507);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 33);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(743, 468);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 33);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(715, 379);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(187, 16);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Добавить, удалить курьера";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(677, 407);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 16);
			this->label14->TabIndex = 33;
			this->label14->Text = L"ФИО";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(648, 435);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 16);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Телефон";
			// 
			// inputWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 544);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"inputWindow";
			this->Text = L"inputWindow";
			this->Load += gcnew System::EventHandler(this, &inputWindow::inputWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inputWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			   // Очищаем comboBox2
			   comboBox2->Items->Clear();

			   // Получаем выбранное имя
			   String^ selectedName = comboBox1->SelectedItem->ToString();

			   // Получаем соответствующий номер
			   String^ number = courierData[selectedName];

			   // Добавляем все номера в comboBox2
			   for each (KeyValuePair<String^, String^> ^ pair in courierData) {
				   comboBox2->Items->Add(pair->Value);
			   }

			   // Устанавливаем выбранный индекс в индекс выбранного номера
			   comboBox2->SelectedIndex = comboBox2->FindString(number);
		   }

		   System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   // Получаем все введенные значения
			   String^ orderNumber = textBox1->Text;
			   String^ dateTime = textBox6->Text;
			   String^ deliveryAddress = textBox4->Text;
			   String^ clientName = textBox2->Text;
			   String^ clientContact = textBox5->Text;
			   String^ orderContent = textBox3->Text;
			   String^ courierName = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : "";
			   String^ courierContact = comboBox2->SelectedItem != nullptr ? comboBox2->SelectedItem->ToString() : "";
			   String^ courierTransport = comboBox3->SelectedItem != nullptr ? comboBox3->SelectedItem->ToString() : "";
			   String^ orderStatus = comboBox4->SelectedItem != nullptr ? comboBox4->SelectedItem->ToString() : "";
			   String^ reward = textBox7->Text;
			   String^ notes = textBox8->Text;

			   // Запускаем событие с полученными данными
			   DeliveryDataReady(orderNumber, dateTime, deliveryAddress, clientName, clientContact, orderContent, courierName, courierContact, courierTransport, orderStatus, reward, notes);

			   this->Close();
		   }
		   System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			   // Получаем ФИО и номер телефона нового курьера из текстовых полей
			   String^ newCourierName = textBox9->Text;
			   String^ newCourierContact = textBox10->Text;

			   // Проверяем, что ФИО и номер телефона не пустые
			   if (!String::IsNullOrWhiteSpace(newCourierName) && !String::IsNullOrWhiteSpace(newCourierContact)) {
				   // Проверяем, что такого курьера еще нет в списке
				   if (!courierData->ContainsKey(newCourierName)) {
					   // Добавляем нового курьера в словарь
					   courierData->Add(newCourierName, newCourierContact);

					   // Обновляем содержимое комбобокса с курьерами
					   UpdateCourierComboBoxes();
				   }
				   else {
					   MessageBox::Show("Курьер с таким именем уже существует.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   }
			   }
			   else {
				   MessageBox::Show("Пожалуйста, введите ФИО и номер телефона курьера.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
		   System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			   // Получаем выбранное ФИО курьера
			   String^ selectedCourierName = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : "";

			   // Проверяем, что выбран курьер для удаления
			   if (!String::IsNullOrWhiteSpace(selectedCourierName)) {
				   // Удаляем выбранного курьера из словаря
				   courierData->Remove(selectedCourierName);

				   // Обновляем содержимое комбобокса с курьерами
				   UpdateCourierComboBoxes();
			   }
			   else {
				   MessageBox::Show("Пожалуйста, выберите курьера для удаления.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	};
}
