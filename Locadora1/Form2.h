#pragma once


namespace Locadora1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	static int opcaoFilme = 0;
	static int idFilme;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ExibeFilmes();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataFilmes;
	protected:

	private: System::Windows::Forms::Button^  btnCancelar;


	private: System::Windows::Forms::Button^  btnExcluir;

	private: System::Windows::Forms::Button^  btnEditar;

	private: System::Windows::Forms::Button^  btnNovo;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  cbGenero;
	private: System::Windows::Forms::ComboBox^  cbDiretor;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtValor;

	private: System::Windows::Forms::TextBox^  txtAno;

	private: System::Windows::Forms::TextBox^  txtTitulo;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnConfirmar;




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
			this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			this->dataFilmes = (gcnew System::Windows::Forms::DataGridView());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnExcluir = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnNovo = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cbGenero = (gcnew System::Windows::Forms::ComboBox());
			this->cbDiretor = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtValor = (gcnew System::Windows::Forms::TextBox());
			this->txtAno = (gcnew System::Windows::Forms::TextBox());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataFilmes))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnConfirmar);
			this->panel1->Controls->Add(this->dataFilmes);
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->btnExcluir);
			this->panel1->Controls->Add(this->btnEditar);
			this->panel1->Controls->Add(this->btnNovo);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 524);
			this->panel1->TabIndex = 0;
			// 
			// btnConfirmar
			// 
			this->btnConfirmar->Enabled = false;
			this->btnConfirmar->Location = System::Drawing::Point(190, 200);
			this->btnConfirmar->Name = L"btnConfirmar";
			this->btnConfirmar->Size = System::Drawing::Size(59, 23);
			this->btnConfirmar->TabIndex = 50;
			this->btnConfirmar->Text = L"Confirmar";
			this->btnConfirmar->UseVisualStyleBackColor = true;
			this->btnConfirmar->Click += gcnew System::EventHandler(this, &Form2::btnConfirmar_Click);
			// 
			// dataFilmes
			// 
			this->dataFilmes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataFilmes->Location = System::Drawing::Point(12, 229);
			this->dataFilmes->Name = L"dataFilmes";
			this->dataFilmes->Size = System::Drawing::Size(616, 288);
			this->dataFilmes->TabIndex = 49;
			this->dataFilmes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form2::dataFilmes_CellContentClick);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Location = System::Drawing::Point(255, 200);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(64, 23);
			this->btnCancelar->TabIndex = 47;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &Form2::btnCancelar_Click);
			// 
			// btnExcluir
			// 
			this->btnExcluir->Location = System::Drawing::Point(129, 200);
			this->btnExcluir->Name = L"btnExcluir";
			this->btnExcluir->Size = System::Drawing::Size(55, 23);
			this->btnExcluir->TabIndex = 46;
			this->btnExcluir->Text = L"Excluir";
			this->btnExcluir->UseVisualStyleBackColor = true;
			this->btnExcluir->Click += gcnew System::EventHandler(this, &Form2::btnExcluir_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->Location = System::Drawing::Point(71, 200);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(55, 23);
			this->btnEditar->TabIndex = 45;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &Form2::btnEditar_Click);
			// 
			// btnNovo
			// 
			this->btnNovo->Location = System::Drawing::Point(13, 200);
			this->btnNovo->Name = L"btnNovo";
			this->btnNovo->Size = System::Drawing::Size(55, 23);
			this->btnNovo->TabIndex = 44;
			this->btnNovo->Text = L"Novo";
			this->btnNovo->UseVisualStyleBackColor = true;
			this->btnNovo->Click += gcnew System::EventHandler(this, &Form2::btnNovo_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cbGenero);
			this->groupBox1->Controls->Add(this->cbDiretor);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtValor);
			this->groupBox1->Controls->Add(this->txtAno);
			this->groupBox1->Controls->Add(this->txtTitulo);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(12, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(616, 186);
			this->groupBox1->TabIndex = 43;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cadastro de Filmes";
			// 
			// cbGenero
			// 
			this->cbGenero->Enabled = false;
			this->cbGenero->FormattingEnabled = true;
			this->cbGenero->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Ação", L"Aventura", L"Comédia", L"Romance", L"Suspence",
					L"Terror"
			});
			this->cbGenero->Location = System::Drawing::Point(131, 59);
			this->cbGenero->Name = L"cbGenero";
			this->cbGenero->Size = System::Drawing::Size(142, 24);
			this->cbGenero->TabIndex = 10;
			// 
			// cbDiretor
			// 
			this->cbDiretor->Enabled = false;
			this->cbDiretor->FormattingEnabled = true;
			this->cbDiretor->Location = System::Drawing::Point(131, 116);
			this->cbDiretor->Name = L"cbDiretor";
			this->cbDiretor->Size = System::Drawing::Size(121, 24);
			this->cbDiretor->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Diretor";
			// 
			// txtValor
			// 
			this->txtValor->Enabled = false;
			this->txtValor->Location = System::Drawing::Point(131, 146);
			this->txtValor->Name = L"txtValor";
			this->txtValor->Size = System::Drawing::Size(100, 22);
			this->txtValor->TabIndex = 7;
			// 
			// txtAno
			// 
			this->txtAno->Enabled = false;
			this->txtAno->Location = System::Drawing::Point(131, 88);
			this->txtAno->Name = L"txtAno";
			this->txtAno->Size = System::Drawing::Size(100, 22);
			this->txtAno->TabIndex = 6;
			// 
			// txtTitulo
			// 
			this->txtTitulo->Enabled = false;
			this->txtTitulo->Location = System::Drawing::Point(131, 31);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(259, 22);
			this->txtTitulo->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(88, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Valor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(94, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ano";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Genero";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Titulo";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 524);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form2";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataFilmes))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void btnNovo_Click(System::Object^  sender, System::EventArgs^  e) {
	opcaoFilme = 1;

	this->txtTitulo->Enabled = true;
	this->cbGenero->Enabled = true;
	this->txtAno->Enabled = true;
	this->cbDiretor->Enabled = true;
	this->txtValor->Enabled = true;
	
	this->btnConfirmar->Enabled = true;
	this->btnCancelar->Enabled = true;
	
	this->btnEditar->Enabled = false;
	this->btnExcluir->Enabled = false;
	this->btnNovo->Enabled = false;	
}
private: System::Void btnConfirmar_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ query;
	
	MySqlConnection^ conexao = gcnew MySqlConnection("Server=127.0.0.1;Database=locadora;Uid=root;Pwd=;");
	MySqlDataReader^ dataReader;
	MySqlCommand^ comando;
	
	if (opcaoFilme == 1)
	{
		query = "INSERT INTO filme (tituloFilme, generoFilme, anoFilme, valorFilme, diretorFilme)" +
			"VALUES ('" + this->txtTitulo->Text + "','" + this->cbGenero->Text + "','" + this->txtAno->Text + "','" + this->txtValor->Text + "','" + this->cbDiretor->Text + "')";

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
	else if (opcaoFilme == 2)
	{
		query = "UPDATE filme SET tituloFilme='" + this->txtTitulo->Text +
			"',generoFilme='" + this->cbGenero->Text +
			"',anoFilme='" + this->txtAno->Text +
			"',diretorFilme='" + this->cbDiretor->Text +
			"',valorFilme='" + this->txtValor->Text + "'WHERE idFilme=" + idFilme;

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
	else if (opcaoFilme == 3)
	{
		query = "DELETE FROM filme WHERE idFilme=" + idFilme;
		comando = gcnew MySqlCommand(query, conexao);

		try
		{
			conexao->Open();
			dataReader = comando->ExecuteReader();
			MessageBox::Show("Filme Removido com Sucesso!");
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
	ExibeFilmes();
}
private: System::Void btnEditar_Click(System::Object^  sender, System::EventArgs^  e) {
	opcaoFilme = 2;

	this->txtTitulo->Enabled = true;
	this->cbGenero->Enabled = true;
	this->txtAno->Enabled = true;
	this->cbDiretor->Enabled = true;
	this->txtValor->Enabled = true;

	this->btnConfirmar->Enabled = true;
	this->btnCancelar->Enabled = true;

	this->btnEditar->Enabled = false;
	this->btnExcluir->Enabled = false;
	this->btnNovo->Enabled = false;
	
}
private: void ExibeFilmes() {
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
private: System::Void dataFilmes_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ tituloFilme, ^generoFilme, ^anoFilme, ^diretorFilme, ^valorFilme;

	idFilme = (Int32)dataFilmes->CurrentRow->Cells[0]->Value;
	tituloFilme = (String^)dataFilmes->CurrentRow->Cells[1]->Value;
	generoFilme = (String^)dataFilmes->CurrentRow->Cells[2]->Value;
	anoFilme = (String^)dataFilmes->CurrentRow->Cells[3]->Value;
	diretorFilme = (String^)dataFilmes->CurrentRow->Cells[4]->Value;
	valorFilme = (String^)dataFilmes->CurrentRow->Cells[5]->Value;

	this->txtTitulo->Text = tituloFilme;
	this->cbGenero->Text = generoFilme;
	this->txtAno->Text = anoFilme;
	this->cbDiretor->Text = diretorFilme;
	this->txtValor->Text = valorFilme;

}
private: System::Void btnExcluir_Click(System::Object^  sender, System::EventArgs^  e) {
	opcaoFilme = 3;

	if (this->txtTitulo->Text == "" && this->cbGenero->Text == "" && this->txtAno->Text == "" &&
		this->cbDiretor->Text == "" && this->txtValor->Text == "")
	{
		MessageBox::Show("Selecione um Registro.");
		this->btnConfirmar->Enabled = false;
	}
	else
		this->btnConfirmar->Enabled = true;
}
private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	opcaoFilme = 0;

	this->txtTitulo->Text = "";
	this->cbGenero->Text = "";
	this->txtAno->Text = "";
	this->cbDiretor->Text = "";
	this->txtValor->Text = "";

	this->txtTitulo->Enabled = false;
	this->cbGenero->Enabled = false;
	this->txtAno->Enabled = false;
	this->cbDiretor->Enabled = false;
	this->txtValor->Enabled = false;

	this->btnNovo->Enabled = true;
	this->btnEditar->Enabled = true;
	this->btnExcluir->Enabled = true;

	this->btnConfirmar->Enabled = false;
	this->btnCancelar->Enabled = false;	
}
};
}
