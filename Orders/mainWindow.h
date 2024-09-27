#pragma once

#include "inputWindow.h"

namespace Orders {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	public ref class mainWindow : public System::Windows::Forms::Form
	{
	public:
		mainWindow(void)
		{
			InitializeComponent();
			newInputWindow = gcnew inputWindow();
			newInputWindow->DeliveryDataReady += gcnew inputWindow::DeliveryDataHandler(this, &mainWindow::ReceiveDeliveryData);



			// Добавляем столбцы в DataGridView
			dataGridView1->Columns->Add("orderNumber", "Номер заказа");
			dataGridView1->Columns->Add("dateTime", "Дата и время");
			dataGridView1->Columns->Add("deliveryAddress", "Адрес доставки");
			dataGridView1->Columns->Add("clientName", "Имя клиента");
			dataGridView1->Columns->Add("clientContact", "Контакт клиента");
			dataGridView1->Columns->Add("orderContent", "Содержание заказа");
			dataGridView1->Columns->Add("courierName", "Имя курьера");
			dataGridView1->Columns->Add("courierContact", "Контакт курьера");
			dataGridView1->Columns->Add("courierTransport", "Транспорт курьера");
			dataGridView1->Columns->Add("orderStatus", "Статус заказа");
			dataGridView1->Columns->Add("reward", "Вознаграждение");
			dataGridView1->Columns->Add("notes", "Примечание к заказу");

			dataGridView1->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &mainWindow::dataGridView1_CellFormatting);

			удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::удалитьToolStripMenuItem_Click);

			удалитьВсёToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::удалитьВсёToolStripMenuItem_Click);

			оToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::оToolStripMenuItem_Click);
			оРазработчикеToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::оРазработчикеToolStripMenuItem_Click);

			сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::сохранитьToolStripMenuItem_Click);

			возобновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::возобновитьToolStripMenuItem_Click);

			отчётToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::отчётToolStripMenuItem_Click);

			справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::справкаToolStripMenuItem_Click);
		}

	protected:
		inputWindow^ newInputWindow;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьВсёToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сведеньяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оРазработчикеToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ возобновитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отчётToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьНовуюДоставкуToolStripMenuItem;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->создатьНовуюДоставкуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->возобновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->удалитьВсёToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->сведеньяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->оToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->оРазработчикеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->отчётToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->файлToolStripMenuItem,
					   this->сведеньяToolStripMenuItem
			   });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(1505, 28);
			   this->menuStrip1->TabIndex = 0;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // файлToolStripMenuItem
			   // 
			   this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->создатьНовуюДоставкуToolStripMenuItem,
					   this->сохранитьToolStripMenuItem, this->возобновитьToolStripMenuItem, this->удалитьToolStripMenuItem, this->удалитьВсёToolStripMenuItem
			   });
			   this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			   this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			   this->файлToolStripMenuItem->Text = L"Файл";
			   this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::файлToolStripMenuItem_Click);
			   // 
			   // создатьНовуюДоставкуToolStripMenuItem
			   // 
			   this->создатьНовуюДоставкуToolStripMenuItem->Name = L"создатьНовуюДоставкуToolStripMenuItem";
			   this->создатьНовуюДоставкуToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->создатьНовуюДоставкуToolStripMenuItem->Text = L"Создать новую доставку ";
			   this->создатьНовуюДоставкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::создатьНовуюДоставкуToolStripMenuItem_Click);
			   // 
			   // сохранитьToolStripMenuItem
			   // 
			   this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			   this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			   // 
			   // возобновитьToolStripMenuItem
			   // 
			   this->возобновитьToolStripMenuItem->Name = L"возобновитьToolStripMenuItem";
			   this->возобновитьToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->возобновитьToolStripMenuItem->Text = L"Возобновить ";
			   // 
			   // удалитьToolStripMenuItem
			   // 
			   this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			   this->удалитьToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->удалитьToolStripMenuItem->Text = L"Удалить";
			   // 
			   // удалитьВсёToolStripMenuItem
			   // 
			   this->удалитьВсёToolStripMenuItem->Name = L"удалитьВсёToolStripMenuItem";
			   this->удалитьВсёToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->удалитьВсёToolStripMenuItem->Text = L"Удалить всё ";
			   // 
			   // сведеньяToolStripMenuItem
			   // 
			   this->сведеньяToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->оToolStripMenuItem,
					   this->оРазработчикеToolStripMenuItem, this->отчётToolStripMenuItem, this->справкаToolStripMenuItem
			   });
			   this->сведеньяToolStripMenuItem->Name = L"сведеньяToolStripMenuItem";
			   this->сведеньяToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			   this->сведеньяToolStripMenuItem->Text = L"Сведенья";
			   // 
			   // оToolStripMenuItem
			   // 
			   this->оToolStripMenuItem->Name = L"оToolStripMenuItem";
			   this->оToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->оToolStripMenuItem->Text = L"О программе";
			   // 
			   // оРазработчикеToolStripMenuItem
			   // 
			   this->оРазработчикеToolStripMenuItem->Name = L"оРазработчикеToolStripMenuItem";
			   this->оРазработчикеToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->оРазработчикеToolStripMenuItem->Text = L"О разработчике ";
			   // 
			   // отчётToolStripMenuItem
			   // 
			   this->отчётToolStripMenuItem->Name = L"отчётToolStripMenuItem";
			   this->отчётToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->отчётToolStripMenuItem->Text = L"Отчёт ";
			   // 
			   // справкаToolStripMenuItem
			   // 
			   this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			   this->справкаToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->справкаToolStripMenuItem->Text = L"Справка";
			   this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::справкаToolStripMenuItem_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(12, 31);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 24;
			   this->dataGridView1->Size = System::Drawing::Size(1481, 591);
			   this->dataGridView1->TabIndex = 1;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainWindow::dataGridView1_CellContentClick);
			   // 
			   // mainWindow
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1505, 644);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"mainWindow";
			   this->Text = L"mainWindow";
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private:
		System::Void создатьНовуюДоставкуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Создаем новый экземпляр формы и передаем данные
			inputWindow^ newForm = gcnew inputWindow();

			// Подписываемся на событие готовности данных доставки
			newForm->DeliveryDataReady += gcnew inputWindow::DeliveryDataHandler(this, &mainWindow::ReceiveDeliveryData);

			// Отображаем форму
			newForm->Show();
		}

		System::Void ReceiveDeliveryData(String^ orderNumber, String^ dateTime, String^ deliveryAddress, String^ clientName, String^ clientContact, String^ orderContent, String^ courierName, String^ courierContact, String^ courierTransport, String^ orderStatus, String^ reward, String^ notes) {
			// Добавляем полученные данные в DataGridView
			dataGridView1->Rows->Add(orderNumber, dateTime, deliveryAddress, clientName, clientContact, orderContent, courierName, courierContact, courierTransport, orderStatus, reward, notes);
		}

		System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		// Событие CellFormatting для изменения цвета ячеек в столбце "Статус заказа"
		System::Void dataGridView1_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e)
		{
			if (dataGridView1->Columns[e->ColumnIndex]->Name == "orderStatus") // Проверяем столбец "Статус заказа"
			{
				if (e->Value != nullptr) // Проверяем, что значение ячейки не пустое
				{
					String^ status = e->Value->ToString();
					if (status == "В доставке") // Если статус "В доставке", устанавливаем красный цвет
					{
						e->CellStyle->ForeColor = System::Drawing::Color::Red;
					}
					else if (status == "Доставлен") // Если статус "Доставлено", устанавливаем зеленый цвет
					{
						e->CellStyle->ForeColor = System::Drawing::Color::Green;
					}
				}
			}
		}

		System::Void удалитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Проверьте, выбрана ли какая-либо строка
			if (dataGridView1->SelectedRows->Count > 0)
			{
				// Получите выбранную строку и удалите ее из DataGridView.
				dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
			}
		}

		System::Void удалитьВсёToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Очистить все строки в DataGridView.
			dataGridView1->Rows->Clear();
		}
		System::Void оToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Отображаем информацию о программе в MessageBox
			String^ aboutMessage = "Название программы: Программное средство для автоматизированного учёта обработки заказов\n";
			aboutMessage += "Версия: 1.0\n";
			aboutMessage += "Дата выпуска: 06 июня 2024\n";
			aboutMessage += "Описание: Это программа для управления доставками.\n";

			MessageBox::Show(aboutMessage, "О программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void оРазработчикеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Отображаем информацию о разработчике в MessageBox
			String^ developerInfo = "Имя: Латушко Алексей Александрович\n";
			developerInfo += "Email: alexalexey914@gmail.com\n";
			developerInfo += "Группа: Т-318\n";

			MessageBox::Show(developerInfo, "О разработчике", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			StreamWriter^ sw = gcnew StreamWriter("DeliveryData.docx");

			// Открываем файл для записи
			// Записываем заголовки столбцов
			for (int i = 0; i < dataGridView1->Columns->Count; i++)
			{
				sw->Write(dataGridView1->Columns[i]->HeaderText + "\t");
			}
			sw->WriteLine();

			// Записываем данные из dataGridView
			for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) // Уменьшаем количество итераций на 1
			{
				for (int j = 0; j < dataGridView1->Columns->Count; j++)
				{
					if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) // Проверяем, что значение ячейки не равно nullptr
					{
						sw->Write(dataGridView1->Rows[i]->Cells[j]->Value->ToString() + "\t");
					}
					else
					{
						sw->Write("\t"); // Если значение ячейки равно nullptr, записываем пустую строку
					}
				}
				sw->WriteLine();
			}

			// Закрываем файл
			sw->Close();

			MessageBox::Show("Данные сохранены в файл DeliveryData.docx", "Сохранение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void возобновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Открываем файл для чтения
			StreamReader^ sr = gcnew StreamReader("DeliveryData.docx");

			// Пропускаем первую строку (заголовки столбцов)
			sr->ReadLine();

			// Очищаем dataGridView
			dataGridView1->Rows->Clear();

			// Читаем данные из файла
			while (!sr->EndOfStream)
			{
				String^ line = sr->ReadLine();
				array<String^>^ data = line->Split('\t');

				// Добавляем данные в dataGridView
				dataGridView1->Rows->Add(data);
			}

			// Закрываем файл
			sr->Close();

			MessageBox::Show("Данные загружены из файла DeliveryData.docx", "Загрузка", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		// Функция для создания отчета
		System::Void отчётToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			int deliveredCount = 0;
			int notDeliveredCount = 0;

			// Перебираем строки в DataGridView
			for (int i = 0; i < dataGridView1->Rows->Count; i++) {
				// Проверяем, что ячейка не пуста и что значение не равно null
				if (dataGridView1->Rows[i]->Cells["orderStatus"]->Value != nullptr) {
					String^ status = dataGridView1->Rows[i]->Cells["orderStatus"]->Value->ToString();
					if (status == "Доставлен") {
						deliveredCount++;
					}
					else if (status == "В доставке") {
						notDeliveredCount++;
					}
				}
			}

			// Отображаем сообщение с количеством доставленных и не доставленных заказов
			String^ reportMessage = "Доставлено: " + deliveredCount + "\n";
			reportMessage += "Не доставлено: " + notDeliveredCount + "\n";
			MessageBox::Show(reportMessage, "Отчёт", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show(
				"Для того чтобы создать новую доставку, выберите 'Файл' -> 'Создать новую доставку'.\n" +
				"Для сохранения данных, выберите 'Файл' -> 'Сохранить'.\n" +
				"Для возобновления ранее сохранённых данных, выберите 'Файл' -> 'Возобновить'.\n" +
				"Для удаления доставки, выберите нужную доставку в таблице и нажмите 'Файл' -> 'Удалить'.\n" +
				"Для удаления всех доставок, выберите 'Файл' -> 'Удалить всё'.\n" +
				"Для получения информации о программе, выберите 'Сведения' -> 'О программе'.\n" +
				"Для получения информации о разработчике, выберите 'Сведения' -> 'О разработчике'.\n" +
				"Для генерации отчёта, выберите 'Сведения' -> 'Отчёт'.",
				"Справка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
