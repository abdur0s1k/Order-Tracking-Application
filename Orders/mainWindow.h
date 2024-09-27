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



			// ��������� ������� � DataGridView
			dataGridView1->Columns->Add("orderNumber", "����� ������");
			dataGridView1->Columns->Add("dateTime", "���� � �����");
			dataGridView1->Columns->Add("deliveryAddress", "����� ��������");
			dataGridView1->Columns->Add("clientName", "��� �������");
			dataGridView1->Columns->Add("clientContact", "������� �������");
			dataGridView1->Columns->Add("orderContent", "���������� ������");
			dataGridView1->Columns->Add("courierName", "��� �������");
			dataGridView1->Columns->Add("courierContact", "������� �������");
			dataGridView1->Columns->Add("courierTransport", "��������� �������");
			dataGridView1->Columns->Add("orderStatus", "������ ������");
			dataGridView1->Columns->Add("reward", "��������������");
			dataGridView1->Columns->Add("notes", "���������� � ������");

			dataGridView1->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &mainWindow::dataGridView1_CellFormatting);

			�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::�������ToolStripMenuItem_Click);

			���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::���������ToolStripMenuItem_Click);

			�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::�ToolStripMenuItem_Click);
			�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::�������������ToolStripMenuItem_Click);

			���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::���������ToolStripMenuItem_Click);

			�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::�����������ToolStripMenuItem_Click);

			�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::�����ToolStripMenuItem_Click);

			�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::�������ToolStripMenuItem_Click);
		}

	protected:
		inputWindow^ newInputWindow;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->����ToolStripMenuItem,
					   this->��������ToolStripMenuItem
			   });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(1505, 28);
			   this->menuStrip1->TabIndex = 0;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // ����ToolStripMenuItem
			   // 
			   this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->��������������������ToolStripMenuItem,
					   this->���������ToolStripMenuItem, this->�����������ToolStripMenuItem, this->�������ToolStripMenuItem, this->���������ToolStripMenuItem
			   });
			   this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			   this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			   this->����ToolStripMenuItem->Text = L"����";
			   this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::����ToolStripMenuItem_Click);
			   // 
			   // ��������������������ToolStripMenuItem
			   // 
			   this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			   this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->��������������������ToolStripMenuItem->Text = L"������� ����� �������� ";
			   this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::��������������������ToolStripMenuItem_Click);
			   // 
			   // ���������ToolStripMenuItem
			   // 
			   this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			   this->���������ToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->���������ToolStripMenuItem->Text = L"���������";
			   // 
			   // �����������ToolStripMenuItem
			   // 
			   this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			   this->�����������ToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->�����������ToolStripMenuItem->Text = L"����������� ";
			   // 
			   // �������ToolStripMenuItem
			   // 
			   this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			   this->�������ToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->�������ToolStripMenuItem->Text = L"�������";
			   // 
			   // ���������ToolStripMenuItem
			   // 
			   this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			   this->���������ToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			   this->���������ToolStripMenuItem->Text = L"������� �� ";
			   // 
			   // ��������ToolStripMenuItem
			   // 
			   this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->�ToolStripMenuItem,
					   this->�������������ToolStripMenuItem, this->�����ToolStripMenuItem, this->�������ToolStripMenuItem
			   });
			   this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			   this->��������ToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			   this->��������ToolStripMenuItem->Text = L"��������";
			   // 
			   // �ToolStripMenuItem
			   // 
			   this->�ToolStripMenuItem->Name = L"�ToolStripMenuItem";
			   this->�ToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->�ToolStripMenuItem->Text = L"� ���������";
			   // 
			   // �������������ToolStripMenuItem
			   // 
			   this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			   this->�������������ToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->�������������ToolStripMenuItem->Text = L"� ������������ ";
			   // 
			   // �����ToolStripMenuItem
			   // 
			   this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			   this->�����ToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->�����ToolStripMenuItem->Text = L"����� ";
			   // 
			   // �������ToolStripMenuItem
			   // 
			   this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			   this->�������ToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			   this->�������ToolStripMenuItem->Text = L"�������";
			   this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::�������ToolStripMenuItem_Click);
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
		System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// ������� ����� ��������� ����� � �������� ������
			inputWindow^ newForm = gcnew inputWindow();

			// ������������� �� ������� ���������� ������ ��������
			newForm->DeliveryDataReady += gcnew inputWindow::DeliveryDataHandler(this, &mainWindow::ReceiveDeliveryData);

			// ���������� �����
			newForm->Show();
		}

		System::Void ReceiveDeliveryData(String^ orderNumber, String^ dateTime, String^ deliveryAddress, String^ clientName, String^ clientContact, String^ orderContent, String^ courierName, String^ courierContact, String^ courierTransport, String^ orderStatus, String^ reward, String^ notes) {
			// ��������� ���������� ������ � DataGridView
			dataGridView1->Rows->Add(orderNumber, dateTime, deliveryAddress, clientName, clientContact, orderContent, courierName, courierContact, courierTransport, orderStatus, reward, notes);
		}

		System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		// ������� CellFormatting ��� ��������� ����� ����� � ������� "������ ������"
		System::Void dataGridView1_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e)
		{
			if (dataGridView1->Columns[e->ColumnIndex]->Name == "orderStatus") // ��������� ������� "������ ������"
			{
				if (e->Value != nullptr) // ���������, ��� �������� ������ �� ������
				{
					String^ status = e->Value->ToString();
					if (status == "� ��������") // ���� ������ "� ��������", ������������� ������� ����
					{
						e->CellStyle->ForeColor = System::Drawing::Color::Red;
					}
					else if (status == "���������") // ���� ������ "����������", ������������� ������� ����
					{
						e->CellStyle->ForeColor = System::Drawing::Color::Green;
					}
				}
			}
		}

		System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// ���������, ������� �� �����-���� ������
			if (dataGridView1->SelectedRows->Count > 0)
			{
				// �������� ��������� ������ � ������� �� �� DataGridView.
				dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
			}
		}

		System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// �������� ��� ������ � DataGridView.
			dataGridView1->Rows->Clear();
		}
		System::Void �ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// ���������� ���������� � ��������� � MessageBox
			String^ aboutMessage = "�������� ���������: ����������� �������� ��� ������������������� ����� ��������� �������\n";
			aboutMessage += "������: 1.0\n";
			aboutMessage += "���� �������: 06 ���� 2024\n";
			aboutMessage += "��������: ��� ��������� ��� ���������� ����������.\n";

			MessageBox::Show(aboutMessage, "� ���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// ���������� ���������� � ������������ � MessageBox
			String^ developerInfo = "���: ������� ������� �������������\n";
			developerInfo += "Email: alexalexey914@gmail.com\n";
			developerInfo += "������: �-318\n";

			MessageBox::Show(developerInfo, "� ������������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			StreamWriter^ sw = gcnew StreamWriter("DeliveryData.docx");

			// ��������� ���� ��� ������
			// ���������� ��������� ��������
			for (int i = 0; i < dataGridView1->Columns->Count; i++)
			{
				sw->Write(dataGridView1->Columns[i]->HeaderText + "\t");
			}
			sw->WriteLine();

			// ���������� ������ �� dataGridView
			for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) // ��������� ���������� �������� �� 1
			{
				for (int j = 0; j < dataGridView1->Columns->Count; j++)
				{
					if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) // ���������, ��� �������� ������ �� ����� nullptr
					{
						sw->Write(dataGridView1->Rows[i]->Cells[j]->Value->ToString() + "\t");
					}
					else
					{
						sw->Write("\t"); // ���� �������� ������ ����� nullptr, ���������� ������ ������
					}
				}
				sw->WriteLine();
			}

			// ��������� ����
			sw->Close();

			MessageBox::Show("������ ��������� � ���� DeliveryData.docx", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// ��������� ���� ��� ������
			StreamReader^ sr = gcnew StreamReader("DeliveryData.docx");

			// ���������� ������ ������ (��������� ��������)
			sr->ReadLine();

			// ������� dataGridView
			dataGridView1->Rows->Clear();

			// ������ ������ �� �����
			while (!sr->EndOfStream)
			{
				String^ line = sr->ReadLine();
				array<String^>^ data = line->Split('\t');

				// ��������� ������ � dataGridView
				dataGridView1->Rows->Add(data);
			}

			// ��������� ����
			sr->Close();

			MessageBox::Show("������ ��������� �� ����� DeliveryData.docx", "��������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		// ������� ��� �������� ������
		System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			int deliveredCount = 0;
			int notDeliveredCount = 0;

			// ���������� ������ � DataGridView
			for (int i = 0; i < dataGridView1->Rows->Count; i++) {
				// ���������, ��� ������ �� ����� � ��� �������� �� ����� null
				if (dataGridView1->Rows[i]->Cells["orderStatus"]->Value != nullptr) {
					String^ status = dataGridView1->Rows[i]->Cells["orderStatus"]->Value->ToString();
					if (status == "���������") {
						deliveredCount++;
					}
					else if (status == "� ��������") {
						notDeliveredCount++;
					}
				}
			}

			// ���������� ��������� � ����������� ������������ � �� ������������ �������
			String^ reportMessage = "����������: " + deliveredCount + "\n";
			reportMessage += "�� ����������: " + notDeliveredCount + "\n";
			MessageBox::Show(reportMessage, "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show(
				"��� ���� ����� ������� ����� ��������, �������� '����' -> '������� ����� ��������'.\n" +
				"��� ���������� ������, �������� '����' -> '���������'.\n" +
				"��� ������������� ����� ���������� ������, �������� '����' -> '�����������'.\n" +
				"��� �������� ��������, �������� ������ �������� � ������� � ������� '����' -> '�������'.\n" +
				"��� �������� ���� ��������, �������� '����' -> '������� ��'.\n" +
				"��� ��������� ���������� � ���������, �������� '��������' -> '� ���������'.\n" +
				"��� ��������� ���������� � ������������, �������� '��������' -> '� ������������'.\n" +
				"��� ��������� ������, �������� '��������' -> '�����'.",
				"�������",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
