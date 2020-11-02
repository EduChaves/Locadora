#pragma once

namespace Locadora1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	static int opcaoCliente;
	static int idCliente;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ExibeClientes();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataClientes;
	protected:

	private: System::Windows::Forms::Button^  btnConfirmar;
	private: System::Windows::Forms::Button^  btnCancelar;

	private: System::Windows::Forms::Button^  btnExcluir;

	private: System::Windows::Forms::Button^  btnEditar;

	private: System::Windows::Forms::Button^  btnNovo;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtContato;

	private: System::Windows::Forms::TextBox^  txtCpf;

	private: System::Windows::Forms::TextBox^  txtNomeCliente;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataClientes = (gcnew System::Windows::Forms::DataGridView());
			this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnExcluir = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnNovo = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtContato = (gcnew System::Windows::Forms::TextBox());
			this->txtCpf = (gcnew System::Windows::Forms::TextBox());
			this->txtNomeCliente = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataClientes))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataClientes);
			this->panel1->Controls->Add(this->btnConfirmar);
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->btnExcluir);
			this->panel1->Controls->Add(this->btnEditar);
			this->panel1->Controls->Add(this->btnNovo);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(624, 485);
			this->panel1->TabIndex = 0;
			// 
			// dataClientes
			// 
			this->dataClientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataClientes->Location = System::Drawing::Point(5, 174);
			this->dataClientes->Name = L"dataClientes";
			this->dataClientes->Size = System::Drawing::Size(616, 307);
			this->dataClientes->TabIndex = 49;
			this->dataClientes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form3::dataGridView1_CellContentClick);
			// 
			// btnConfirmar
			// 
			this->btnConfirmar->Enabled = false;
			this->btnConfirmar->Location = System::Drawing::Point(181, 145);
			this->btnConfirmar->Name = L"btnConfirmar";
			this->btnConfirmar->Size = System::Drawing::Size(66, 23);
			this->btnConfirmar->TabIndex = 48;
			this->btnConfirmar->Text = L"Confirmar";
			this->btnConfirmar->UseVisualStyleBackColor = true;
			this->btnConfirmar->Click += gcnew System::EventHandler(this, &Form3::btnConfirmar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Location = System::Drawing::Point(250, 145);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(64, 23);
			this->btnCancelar->TabIndex = 47;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &Form3::btnCancelar_Click);
			// 
			// btnExcluir
			// 
			this->btnExcluir->Location = System::Drawing::Point(123, 145);
			this->btnExcluir->Name = L"btnExcluir";
			this->btnExcluir->Size = System::Drawing::Size(55, 23);
			this->btnExcluir->TabIndex = 46;
			this->btnExcluir->Text = L"Excluir";
			this->btnExcluir->UseVisualStyleBackColor = true;
			this->btnExcluir->Click += gcnew System::EventHandler(this, &Form3::btnExcluir_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->Location = System::Drawing::Point(65, 145);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(55, 23);
			this->btnEditar->TabIndex = 45;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &Form3::btnEditar_Click);
			// 
			// btnNovo
			// 
			this->btnNovo->Location = System::Drawing::Point(6, 145);
			this->btnNovo->Name = L"btnNovo";
			this->btnNovo->Size = System::Drawing::Size(55, 23);
			this->btnNovo->TabIndex = 44;
			this->btnNovo->Text = L"Novo";
			this->btnNovo->UseVisualStyleBackColor = true;
			this->btnNovo->Click += gcnew System::EventHandler(this, &Form3::btnNovo_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtContato);
			this->groupBox1->Controls->Add(this->txtCpf);
			this->groupBox1->Controls->Add(this->txtNomeCliente);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(616, 135);
			this->groupBox1->TabIndex = 43;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cadastro de Clientes";
			// 
			// txtContato
			// 
			this->txtContato->Enabled = false;
			this->txtContato->Location = System::Drawing::Point(119, 91);
			this->txtContato->Name = L"txtContato";
			this->txtContato->Size = System::Drawing::Size(161, 22);
			this->txtContato->TabIndex = 7;
			// 
			// txtCpf
			// 
			this->txtCpf->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->txtCpf->Enabled = false;
			this->txtCpf->Location = System::Drawing::Point(119, 63);
			this->txtCpf->Name = L"txtCpf";
			this->txtCpf->Size = System::Drawing::Size(233, 22);
			this->txtCpf->TabIndex = 6;
			// 
			// txtNomeCliente
			// 
			this->txtNomeCliente->Enabled = false;
			this->txtNomeCliente->Location = System::Drawing::Point(119, 35);
			this->txtNomeCliente->Name = L"txtNomeCliente";
			this->txtNomeCliente->Size = System::Drawing::Size(337, 22);
			this->txtNomeCliente->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Contato";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"CPF";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nome";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 485);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form3";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataClientes))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnNovo_Click(System::Object^  sender, System::EventArgs^  e) {
		opcaoCliente = 1;

		this->txtNomeCliente->Enabled = true;
		this->txtCpf->Enabled = true;
		this->txtContato->Enabled = true;

		this->btnNovo->Enabled = false;
		this->btnEditar->Enabled = false;
		this->btnExcluir->Enabled = false;

		this->btnConfirmar->Enabled = true;
		this->btnCancelar->Enabled = true;
	}
private: System::Void btnConfirmar_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ query;

	MySqlConnection^ conexao = gcnew MySqlConnection("Server=127.0.0.1;Database=locadora;Uid=root;Pwd=;");
	MySqlDataReader^ dataReader;
	MySqlCommand^ comando;

	if (opcaoCliente == 1)
	{
		query = "INSERT INTO cliente (nomeCliente, cpfCliente, contatoCliente)" +
			"VALUES ('" + this->txtNomeCliente->Text + "','" + this->txtCpf->Text + "','" + this->txtContato->Text + "')";

		comando = gcnew MySqlCommand(query, conexao);

		try
		{
			conexao->Open();
			dataReader = comando->ExecuteReader();
			MessageBox::Show("Cadastro Realizado com Sucesso!!");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conexao->Close();
			conexao = nullptr;
			comando = nullptr;
		}
	}
	else if (opcaoCliente == 2) 
	{
		if (this->txtNomeCliente->Text == "" && this->txtCpf->Text == "" && this->txtContato->Text == "")
		{
			MessageBox::Show("Selecione um registro na tabela para prosseguir");
		}
		else {
			query = "UPDATE cliente SET nomeCliente='" + this->txtNomeCliente->Text +
				"',cpfCliente='" + this->txtCpf->Text +
				"',contatoCliente='" + this->txtContato->Text + "'WHERE idCliente=" + idCliente;

			comando = gcnew MySqlCommand(query, conexao);

			try
			{
				conexao->Open();
				dataReader = comando->ExecuteReader();
				MessageBox::Show("Registro Alterado com Sucesso!!");
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			finally
			{
				conexao->Close();
				conexao = nullptr;
				comando = nullptr;
			}
		}		
	}
	else if (opcaoCliente == 3)
	{
		if (this->txtNomeCliente->Text == "" && this->txtCpf->Text == "" && this->txtContato->Text == "")
		{
			MessageBox::Show("Selecione um registro na tabela para prosseguir");
		}
		else 
		{
			query = "DELETE FROM cliente WHERE idCliente=" + idCliente;
			comando = gcnew MySqlCommand(query, conexao);

			try
			{
				conexao->Open();
				dataReader = comando->ExecuteReader();
				MessageBox::Show("Cliente Removido com Sucesso!");
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			finally
			{
				conexao->Close();
				conexao = nullptr;
				comando = nullptr;
			}
		}
	}
	ExibeClientes();
}
private: System::Void btnEditar_Click(System::Object^  sender, System::EventArgs^  e) {
	opcaoCliente = 2;

	this->txtNomeCliente->Enabled = true;
	this->txtCpf->Enabled = true;
	this->txtContato->Enabled = true;

	this->btnNovo->Enabled = false;
	this->btnEditar->Enabled = false;
	this->btnExcluir->Enabled = false;

	this->btnConfirmar->Enabled = true;
	this->btnCancelar->Enabled = true;
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

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ nomeCliente, ^cpfCliente, ^contatoCliente;

	idCliente = (Int32)dataClientes->CurrentRow->Cells[0]->Value;
	nomeCliente = (String^)dataClientes->CurrentRow->Cells[1]->Value;
	cpfCliente = (String^)dataClientes->CurrentRow->Cells[2]->Value;
	contatoCliente = (String^)dataClientes->CurrentRow->Cells[3]->Value;

	this->txtNomeCliente->Text = nomeCliente;
	this->txtCpf->Text = cpfCliente;
	this->txtContato->Text = contatoCliente;
}
private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	opcaoCliente = 0;
	
	this->txtNomeCliente->Text = "";
	this->txtCpf->Text = "";
	this->txtContato->Text = "";

	this->txtNomeCliente->Enabled = false;
	this->txtCpf->Enabled = false;
	this->txtContato->Enabled = false;

	this->btnNovo->Enabled = true;
	this->btnEditar->Enabled = true;
	this->btnExcluir->Enabled = true;
	
	this->btnConfirmar->Enabled = false;
	this->btnCancelar->Enabled = false;
}
private: System::Void btnExcluir_Click(System::Object^  sender, System::EventArgs^  e) {
	opcaoCliente = 3;

	if (this->txtNomeCliente->Text == "" && this->txtCpf->Text == "" && this->txtContato->Text == "")
	{
		MessageBox::Show("Selecione um Registro da Tabela para prosseguir");
		this->btnConfirmar->Enabled = false;
	}else
		this->btnConfirmar->Enabled = true;
	this->btnNovo->Enabled = false;
	this->btnEditar->Enabled = false;
	this->btnExcluir->Enabled = false;

	this->btnCancelar->Enabled = true;
}
};
}
