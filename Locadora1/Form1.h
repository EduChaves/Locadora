#include "Form2.h"
#include "Form3.h"
#include <iostream>
#include <string>
#include <sstream>

#pragma once

namespace Locadora1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

		
	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::DataGridView^  dataFilmes;

	private: System::Windows::Forms::ComboBox^  cbSelecionar;

	private: System::Windows::Forms::Button^  btnPesquisar;
	private: System::Windows::Forms::TextBox^  txtPesquisar;
	private: System::Windows::Forms::DataGridView^  dataClientes;



	private: System::Windows::Forms::Button^  btnLocacao;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbPagamentoDevolucao;

	private: System::Windows::Forms::RadioButton^  rbPagamentoLocacao;

	private: System::Windows::Forms::TextBox^  txtValor;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtCliente;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtFilme;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnCancelar;
	private: System::Windows::Forms::Button^  btnConfirmar;
	private: System::Windows::Forms::DateTimePicker^  dtEntrega;
	private: System::Windows::Forms::DateTimePicker^  dtLocacao;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataLocacao;
	private: System::Windows::Forms::Panel^  panel3;



	private: static int closeChild = 0;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ExibeFilmes();
			ExibeClientes();
			ExibeLocacao();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 

	private: System::Windows::Forms::Button^  buttonClientes;
	private: System::Windows::Forms::Button^  buttonFilmes;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonClientes = (gcnew System::Windows::Forms::Button());
			this->buttonFilmes = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataLocacao = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			this->dataFilmes = (gcnew System::Windows::Forms::DataGridView());
			this->cbSelecionar = (gcnew System::Windows::Forms::ComboBox());
			this->btnPesquisar = (gcnew System::Windows::Forms::Button());
			this->txtPesquisar = (gcnew System::Windows::Forms::TextBox());
			this->dataClientes = (gcnew System::Windows::Forms::DataGridView());
			this->btnLocacao = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dtEntrega = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtLocacao = (gcnew System::Windows::Forms::DateTimePicker());
			this->rbPagamentoDevolucao = (gcnew System::Windows::Forms::RadioButton());
			this->rbPagamentoLocacao = (gcnew System::Windows::Forms::RadioButton());
			this->txtValor = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCliente = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFilme = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataLocacao))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataFilmes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataClientes))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->buttonClientes);
			this->panel1->Controls->Add(this->buttonFilmes);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(138, 524);
			this->panel1->TabIndex = 0;
			// 
			// buttonClientes
			// 
			this->buttonClientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonClientes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonClientes->Location = System::Drawing::Point(3, 236);
			this->buttonClientes->Name = L"buttonClientes";
			this->buttonClientes->Size = System::Drawing::Size(130, 42);
			this->buttonClientes->TabIndex = 2;
			this->buttonClientes->Text = L"Clientes";
			this->buttonClientes->UseVisualStyleBackColor = false;
			this->buttonClientes->Click += gcnew System::EventHandler(this, &Form1::buttonClientes_Click);
			// 
			// buttonFilmes
			// 
			this->buttonFilmes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonFilmes->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFilmes->ForeColor = System::Drawing::Color::White;
			this->buttonFilmes->Location = System::Drawing::Point(3, 189);
			this->buttonFilmes->Name = L"buttonFilmes";
			this->buttonFilmes->Size = System::Drawing::Size(130, 41);
			this->buttonFilmes->TabIndex = 1;
			this->buttonFilmes->Text = L"Filmes";
			this->buttonFilmes->UseVisualStyleBackColor = false;
			this->buttonFilmes->Click += gcnew System::EventHandler(this, &Form1::buttonFilmes_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataLocacao);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->btnCancelar);
			this->panel2->Controls->Add(this->btnConfirmar);
			this->panel2->Controls->Add(this->dataFilmes);
			this->panel2->Controls->Add(this->cbSelecionar);
			this->panel2->Controls->Add(this->btnPesquisar);
			this->panel2->Controls->Add(this->txtPesquisar);
			this->panel2->Controls->Add(this->dataClientes);
			this->panel2->Controls->Add(this->btnLocacao);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(138, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(640, 524);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// dataLocacao
			// 
			this->dataLocacao->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataLocacao->Location = System::Drawing::Point(334, 217);
			this->dataLocacao->Name = L"dataLocacao";
			this->dataLocacao->Size = System::Drawing::Size(303, 264);
			this->dataLocacao->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(517, 489);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 32);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Atualizar Registros";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Location = System::Drawing::Point(121, 190);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(60, 23);
			this->btnCancelar->TabIndex = 9;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &Form1::btnCancelar_Click);
			// 
			// btnConfirmar
			// 
			this->btnConfirmar->Enabled = false;
			this->btnConfirmar->Location = System::Drawing::Point(56, 190);
			this->btnConfirmar->Name = L"btnConfirmar";
			this->btnConfirmar->Size = System::Drawing::Size(63, 23);
			this->btnConfirmar->TabIndex = 8;
			this->btnConfirmar->Text = L"Confirmar";
			this->btnConfirmar->UseVisualStyleBackColor = true;
			this->btnConfirmar->Click += gcnew System::EventHandler(this, &Form1::btnConfirmar_Click);
			// 
			// dataFilmes
			// 
			this->dataFilmes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataFilmes->Location = System::Drawing::Point(6, 217);
			this->dataFilmes->Name = L"dataFilmes";
			this->dataFilmes->Size = System::Drawing::Size(322, 264);
			this->dataFilmes->TabIndex = 7;
			this->dataFilmes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataFilmes_CellContentClick);
			// 
			// cbSelecionar
			// 
			this->cbSelecionar->FormattingEnabled = true;
			this->cbSelecionar->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Filmes", L"Diretor" });
			this->cbSelecionar->Location = System::Drawing::Point(209, 191);
			this->cbSelecionar->Name = L"cbSelecionar";
			this->cbSelecionar->Size = System::Drawing::Size(121, 21);
			this->cbSelecionar->TabIndex = 6;
			this->cbSelecionar->Text = L"Filmes";
			// 
			// btnPesquisar
			// 
			this->btnPesquisar->Location = System::Drawing::Point(572, 189);
			this->btnPesquisar->Name = L"btnPesquisar";
			this->btnPesquisar->Size = System::Drawing::Size(65, 23);
			this->btnPesquisar->TabIndex = 5;
			this->btnPesquisar->Text = L"Pesquisar";
			this->btnPesquisar->UseVisualStyleBackColor = true;
			this->btnPesquisar->Click += gcnew System::EventHandler(this, &Form1::btnPesquisar_Click);
			// 
			// txtPesquisar
			// 
			this->txtPesquisar->Location = System::Drawing::Point(336, 191);
			this->txtPesquisar->Name = L"txtPesquisar";
			this->txtPesquisar->Size = System::Drawing::Size(234, 20);
			this->txtPesquisar->TabIndex = 4;
			// 
			// dataClientes
			// 
			this->dataClientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataClientes->Location = System::Drawing::Point(336, 12);
			this->dataClientes->Name = L"dataClientes";
			this->dataClientes->Size = System::Drawing::Size(301, 172);
			this->dataClientes->TabIndex = 2;
			this->dataClientes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataClientes_CellContentClick);
			// 
			// btnLocacao
			// 
			this->btnLocacao->Location = System::Drawing::Point(6, 190);
			this->btnLocacao->Name = L"btnLocacao";
			this->btnLocacao->Size = System::Drawing::Size(49, 23);
			this->btnLocacao->TabIndex = 1;
			this->btnLocacao->Text = L"Alugar";
			this->btnLocacao->UseVisualStyleBackColor = true;
			this->btnLocacao->Click += gcnew System::EventHandler(this, &Form1::btnLocacao_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dtEntrega);
			this->groupBox1->Controls->Add(this->dtLocacao);
			this->groupBox1->Controls->Add(this->rbPagamentoDevolucao);
			this->groupBox1->Controls->Add(this->rbPagamentoLocacao);
			this->groupBox1->Controls->Add(this->txtValor);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtCliente);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtFilme);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(327, 181);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Locação";
			// 
			// dtEntrega
			// 
			this->dtEntrega->Enabled = false;
			this->dtEntrega->Location = System::Drawing::Point(96, 99);
			this->dtEntrega->Name = L"dtEntrega";
			this->dtEntrega->Size = System::Drawing::Size(200, 22);
			this->dtEntrega->TabIndex = 13;
			// 
			// dtLocacao
			// 
			this->dtLocacao->Enabled = false;
			this->dtLocacao->Location = System::Drawing::Point(96, 71);
			this->dtLocacao->Name = L"dtLocacao";
			this->dtLocacao->Size = System::Drawing::Size(200, 22);
			this->dtLocacao->TabIndex = 12;
			// 
			// rbPagamentoDevolucao
			// 
			this->rbPagamentoDevolucao->AutoSize = true;
			this->rbPagamentoDevolucao->Enabled = false;
			this->rbPagamentoDevolucao->Location = System::Drawing::Point(166, 155);
			this->rbPagamentoDevolucao->Name = L"rbPagamentoDevolucao";
			this->rbPagamentoDevolucao->Size = System::Drawing::Size(155, 20);
			this->rbPagamentoDevolucao->TabIndex = 11;
			this->rbPagamentoDevolucao->TabStop = true;
			this->rbPagamentoDevolucao->Text = L"Pagamento Devolução";
			this->rbPagamentoDevolucao->UseVisualStyleBackColor = true;
			// 
			// rbPagamentoLocacao
			// 
			this->rbPagamentoLocacao->AutoSize = true;
			this->rbPagamentoLocacao->Enabled = false;
			this->rbPagamentoLocacao->Location = System::Drawing::Point(9, 155);
			this->rbPagamentoLocacao->Name = L"rbPagamentoLocacao";
			this->rbPagamentoLocacao->Size = System::Drawing::Size(145, 20);
			this->rbPagamentoLocacao->TabIndex = 10;
			this->rbPagamentoLocacao->TabStop = true;
			this->rbPagamentoLocacao->Text = L"Pagamento Locação";
			this->rbPagamentoLocacao->UseVisualStyleBackColor = true;
			// 
			// txtValor
			// 
			this->txtValor->Enabled = false;
			this->txtValor->Location = System::Drawing::Point(96, 126);
			this->txtValor->Name = L"txtValor";
			this->txtValor->Size = System::Drawing::Size(100, 22);
			this->txtValor->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(53, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Valor";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Data Entrega";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Data Locação";
			// 
			// txtCliente
			// 
			this->txtCliente->Enabled = false;
			this->txtCliente->Location = System::Drawing::Point(96, 43);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(221, 22);
			this->txtCliente->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cliente";
			// 
			// txtFilme
			// 
			this->txtFilme->Enabled = false;
			this->txtFilme->Location = System::Drawing::Point(96, 15);
			this->txtFilme->Name = L"txtFilme";
			this->txtFilme->Size = System::Drawing::Size(221, 22);
			this->txtFilme->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Filme";
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel3->Location = System::Drawing::Point(4, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(129, 64);
			this->panel3->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 524);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->IsMdiContainer = true;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataLocacao))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataFilmes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataClientes))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonFilmes_Click(System::Object^  sender, System::EventArgs^  e) {
				 Locadora1::Form2 ^filhoFilmes = gcnew Locadora1::Form2;
				 filhoFilmes->Show();				 
			 }
	private: System::Void buttonClientes_Click(System::Object^  sender, System::EventArgs^  e) {
				Locadora1::Form3 ^filhoClientes = gcnew Locadora1::Form3; 
				filhoClientes->Show();
			 }	
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void btnLocacao_Click(System::Object^  sender, System::EventArgs^  e) {
	this->txtFilme->Enabled = true;
	this->txtCliente->Enabled = true;
	this->dtLocacao->Enabled = true;
	this->dtEntrega->Enabled = true;
	this->txtValor->Enabled = true;

	this->rbPagamentoDevolucao->Enabled = true;
	this->rbPagamentoLocacao->Enabled = true;

	this->btnLocacao->Enabled = false;
	this->btnConfirmar->Enabled = true;
	this->btnCancelar->Enabled = true;

}
private: System::Void dataClientes_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ cliente;

	cliente = (String^)this->dataClientes->CurrentRow->Cells[1]->Value;
	this->txtCliente->Text = cliente;
}
private: void ExibeClientes() {
	String^ query;
	MySqlConnection^ conexao = gcnew MySqlConnection("Server=127.0.0.1;Database=locadora;Uid=root;Pwd=;");

	query = "SELECT * FROM cliente";

	try
	{
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(query, conexao);
		DataTable^ table = gcnew DataTable();

		data->Fill(table);

		this->dataClientes->DataSource = table;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		conexao->Close();
		conexao = nullptr;
	}
}
private: System::Void dataFilmes_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ filme, ^valor;

	filme = (String^)this->dataFilmes->CurrentRow->Cells[1]->Value;
	valor = (String^)this->dataFilmes->CurrentRow->Cells[5]->Value;

	this->txtFilme->Text = filme;
	this->txtValor->Text = valor;
}
void ExibeFilmes() {
	String^ query;
	MySqlConnection^ conexao = gcnew MySqlConnection("Server=127.0.0.1;Database=locadora;Uid=root;Pwd=;");

	query = "SELECT * FROM filme";

	try
	{
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(query, conexao);
		DataTable^ table = gcnew DataTable();

		data->Fill(table);

		this->dataFilmes->DataSource = table;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		conexao->Close();
		conexao = nullptr;
	}
}

private: System::Void btnConfirmar_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ query, ^pagamento;

	MySqlConnection^ conexao = gcnew MySqlConnection("Server=127.0.0.1;Database=locadora;Uid=root;Pwd=;");
	MySqlDataReader^ dataReader;
	MySqlCommand^ comando;

	if (this->rbPagamentoLocacao->Checked) {
		pagamento = "Pagamento Locação";
	}
	else if (this->rbPagamentoDevolucao->Checked) {
		pagamento = "Pagamento Devolução";
	}
	else
		MessageBox::Show("Selecione uma forma de pagamento");

	try
	{
		query = "INSERT INTO locacao (nomeFilme, nomeCliente, dataLocacao, dataEntrega, valorFilme, pagamento)" +
			"VALUES ('" + this->txtFilme->Text + "','" + this->txtCliente->Text + "','" + this->dtLocacao->Text + "','" + this->dtEntrega->Text + "','" + this->txtValor->Text + "','" + pagamento + "')";

		comando = gcnew MySqlCommand(query, conexao);
		
		conexao->Open();
		dataReader = comando->ExecuteReader();
		MessageBox::Show("Filme Alugado com Sucesso!!");
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	finally
	{
		conexao->Close();
		conexao = nullptr;
		comando = nullptr;
	}
	ExibeLocacao();
}
private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	this->txtFilme->Enabled = false;
	this->txtCliente->Enabled = false;
	this->dtLocacao->Enabled = false;
	this->dtEntrega->Enabled = false;
	this->txtValor->Enabled = false;

	this->txtFilme->Text = "";
	this->txtCliente->Text = "";
	this->txtValor->Text = "";

	this->rbPagamentoDevolucao->Enabled = false;
	this->rbPagamentoLocacao->Enabled = false;

	this->btnLocacao->Enabled = true;
	this->btnConfirmar->Enabled = false;
	this->btnCancelar->Enabled = false;
}
private: System::Void btnPesquisar_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ query;
	MySqlConnection^ conexao = gcnew MySqlConnection("Server=127.0.0.1;Database=locadora;Uid=root;Pwd=;");

	if (this->cbSelecionar->Text == "Filmes")
	{
		query = "SELECT * FROM filme WHERE tituloFilme='" + this->txtPesquisar->Text + "'";

		try
		{
			MySqlDataAdapter^ data = gcnew MySqlDataAdapter(query, conexao);
			DataTable^ table = gcnew DataTable();

			data->Fill(table);

			this->dataFilmes->DataSource = table;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conexao->Close();
			conexao = nullptr;
		}
	}
	else if (this->cbSelecionar->Text == "Diretor")
	{
		query = "SELECT * FROM filme WHERE diretorFilme='" + this->txtPesquisar->Text + "'";

		try
		{
			MySqlDataAdapter^ data = gcnew MySqlDataAdapter(query, conexao);
			DataTable^ table = gcnew DataTable();

			data->Fill(table);

			this->dataFilmes->DataSource = table;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conexao->Close();
			conexao = nullptr;
		}
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	ExibeClientes();
	ExibeFilmes();
}
	private: void ExibeLocacao() {
		String^ query;
		MySqlConnection^ conexao = gcnew MySqlConnection("Server=127.0.0.1;Database=locadora;Uid=root;Pwd=;");

		query = "SELECT * FROM locacao";

		try
		{
			MySqlDataAdapter^ data = gcnew MySqlDataAdapter(query, conexao);
			DataTable^ table = gcnew DataTable();

			data->Fill(table);

			this->dataLocacao->DataSource = table;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conexao->Close();
			conexao = nullptr;
		}
	}
};
}