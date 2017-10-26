#pragma once
#include "Player.h"
#include "CTablero.h"
#include "CEnemigo.h"
#include "CItem.h"
#include "CEnemigo2.h"
#include "CEnemigo3.h"
#include "CEnemigo4.h"

namespace ProyectoBomberman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace std;
	/// <summary>
	/// Summary for GameWindows
	/// </summary>
	public ref class GameWindows : public System::Windows::Forms::Form
	{
	private:

		//Variables del reloj
		int Minutos = 0;
		int	Segundos = 0;

		//Variables para el juego
		int nivel = 1;
		int vidas = 3;
		int bombas=10;
		int puntaje =0;

		//Creación de objetos 
		CPlayer *objPlayer;
		CTablero *objTablero;

		CBombas* objBombas;

		CItem *objItemEspecial1;
		CItem *objItemEspecial2;

		//Items tipo 1
		CItem *objFresa1;
		CItem *objFresa2;
		CItem *objFresa3;
		CItem *objFresa4;
		CItem *objFresa5;
		CItem *objFresa6;
		CItem *objFresa7;
		CItem *objFresa8;

		//Items tipo 2
		CItem *objManzana1;
		CItem *objManzana2;
		CItem *objManzana3;
		CItem *objManzana4;
		CItem *objManzana5;
		CItem *objManzana6;
		CItem *objManzana7;
		CItem *objManzana8;
		CItem *objManzana9;
		CItem *objManzana10;
		CItem *objManzana11;
		CItem *objManzana12;
		CItem *objManzana13;
		CItem *objManzana14;
		CItem *objManzana15;

		//Items tipo 3
		CItem *objNaranja1;
		CItem *objNaranja2;
		CItem *objNaranja3;

		//Enemigos tipo 1
		CEnemigo *objEnemigo;
		CEnemigo *objEnemigo1;
		CEnemigo *objEnemigo2;

		//Enemigos tipo 2
		CEnemigo2 *objEnemigo2_1;
		CEnemigo2 *objEnemigo2_2;
		CEnemigo2 *objEnemigo2_3;
		CEnemigo2 *objEnemigo2_4;
		CEnemigo2 *objEnemigo2_5;
		CEnemigo2 *objEnemigo2_6;

		//Enemigos tipo 3
		CEnemigo3 *objEnemigo3_1;
		CEnemigo3 *objEnemigo3_2;
		CEnemigo3 *objEnemigo3_3;

		//Enemigos tipo 4
		CEnemigo4 *objEnemigo4_1;
		CEnemigo4 *objEnemigo4_2;
		CEnemigo4 *objEnemigo4_3;
		
		//Creamos las variables de la parte gráfica
		Graphics^ g;

		Bitmap^ img;

		Bitmap^ enemigo;
		Bitmap^ enemigo2;
		Bitmap^ enemigo3;
		Bitmap^ enemigo4;

		Bitmap^ bomba;

		Bitmap^ ItemEspecial1;
		Bitmap^ ItemEspecial2;

		Bitmap^ ItemFresa;
		Bitmap^ ItemManzana;
		Bitmap^ ItemNaranja;
		
		Bitmap^ bloque1;
		Bitmap^ bloque2;
		Bitmap^ bloque3;
	
		BufferedGraphics^ buffer;

	private: System::Windows::Forms::PictureBox^  pictureEnemigo;
	private: System::Windows::Forms::PictureBox^  pictureEncabezado;
	private: System::Windows::Forms::TextBox^  tbxTiempo;
	private: System::Windows::Forms::TextBox^  tbxVidas;
	private: System::Windows::Forms::TextBox^  tbxNivel;
	private: System::Windows::Forms::TextBox^  tbxPuntaje;
	private: System::Windows::Forms::TextBox^  tbxBombas;
	private: System::Windows::Forms::PictureBox^  pictureVida;
	private: System::Windows::Forms::PictureBox^  pictureItemBomba;
	private: System::Windows::Forms::PictureBox^  pictureUPC;
	private: System::Windows::Forms::PictureBox^  pictureFresa;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureManzana;
	private: System::Windows::Forms::PictureBox^  pictureNaranja;
	private: System::Windows::Forms::PictureBox^  pictureEnemigo3;
	private: System::Windows::Forms::PictureBox^  pictureEnemigo4;
	private: System::Windows::Forms::PictureBox^  pictureEnemigo2;


		SoundPlayer^ MusicBackground = gcnew SoundPlayer("Music_Bomberman.wav");

	
	public:
		GameWindows(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameWindows()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBloque1;
	private: System::Windows::Forms::PictureBox^  pictureBloque2;
	private: System::Windows::Forms::PictureBox^  pictureBloque3;
	private: System::Windows::Forms::PictureBox^  picturePlayer;
	private: System::Windows::Forms::PictureBox^  pictureBomba;

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameWindows::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBloque1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBloque2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBloque3 = (gcnew System::Windows::Forms::PictureBox());
			this->picturePlayer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBomba = (gcnew System::Windows::Forms::PictureBox());
			this->pictureEnemigo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureEncabezado = (gcnew System::Windows::Forms::PictureBox());
			this->tbxTiempo = (gcnew System::Windows::Forms::TextBox());
			this->tbxVidas = (gcnew System::Windows::Forms::TextBox());
			this->tbxNivel = (gcnew System::Windows::Forms::TextBox());
			this->tbxPuntaje = (gcnew System::Windows::Forms::TextBox());
			this->tbxBombas = (gcnew System::Windows::Forms::TextBox());
			this->pictureVida = (gcnew System::Windows::Forms::PictureBox());
			this->pictureItemBomba = (gcnew System::Windows::Forms::PictureBox());
			this->pictureUPC = (gcnew System::Windows::Forms::PictureBox());
			this->pictureFresa = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureManzana = (gcnew System::Windows::Forms::PictureBox());
			this->pictureNaranja = (gcnew System::Windows::Forms::PictureBox());
			this->pictureEnemigo3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureEnemigo4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureEnemigo2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBloque1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBloque2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBloque3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBomba))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEncabezado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureVida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureItemBomba))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUPC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFresa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureManzana))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNaranja))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo2))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &GameWindows::timer1_Tick);
			// 
			// pictureBloque1
			// 
			this->pictureBloque1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBloque1.Image")));
			this->pictureBloque1->Location = System::Drawing::Point(12, 39);
			this->pictureBloque1->Name = L"pictureBloque1";
			this->pictureBloque1->Size = System::Drawing::Size(36, 38);
			this->pictureBloque1->TabIndex = 2;
			this->pictureBloque1->TabStop = false;
			this->pictureBloque1->Visible = false;
			// 
			// pictureBloque2
			// 
			this->pictureBloque2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBloque2.Image")));
			this->pictureBloque2->Location = System::Drawing::Point(12, 96);
			this->pictureBloque2->Name = L"pictureBloque2";
			this->pictureBloque2->Size = System::Drawing::Size(36, 40);
			this->pictureBloque2->TabIndex = 3;
			this->pictureBloque2->TabStop = false;
			this->pictureBloque2->Visible = false;
			// 
			// pictureBloque3
			// 
			this->pictureBloque3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBloque3.Image")));
			this->pictureBloque3->Location = System::Drawing::Point(12, 160);
			this->pictureBloque3->Name = L"pictureBloque3";
			this->pictureBloque3->Size = System::Drawing::Size(36, 38);
			this->pictureBloque3->TabIndex = 4;
			this->pictureBloque3->TabStop = false;
			this->pictureBloque3->Visible = false;
			// 
			// picturePlayer
			// 
			this->picturePlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturePlayer.Image")));
			this->picturePlayer->Location = System::Drawing::Point(212, 39);
			this->picturePlayer->Name = L"picturePlayer";
			this->picturePlayer->Size = System::Drawing::Size(200, 200);
			this->picturePlayer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picturePlayer->TabIndex = 9;
			this->picturePlayer->TabStop = false;
			this->picturePlayer->Visible = false;
			// 
			// pictureBomba
			// 
			this->pictureBomba->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBomba.Image")));
			this->pictureBomba->Location = System::Drawing::Point(418, 39);
			this->pictureBomba->Name = L"pictureBomba";
			this->pictureBomba->Size = System::Drawing::Size(200, 100);
			this->pictureBomba->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBomba->TabIndex = 13;
			this->pictureBomba->TabStop = false;
			this->pictureBomba->Visible = false;
			// 
			// pictureEnemigo
			// 
			this->pictureEnemigo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEnemigo.Image")));
			this->pictureEnemigo->Location = System::Drawing::Point(12, 248);
			this->pictureEnemigo->Name = L"pictureEnemigo";
			this->pictureEnemigo->Size = System::Drawing::Size(176, 59);
			this->pictureEnemigo->TabIndex = 14;
			this->pictureEnemigo->TabStop = false;
			this->pictureEnemigo->Visible = false;
			// 
			// pictureEncabezado
			// 
			this->pictureEncabezado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEncabezado.Image")));
			this->pictureEncabezado->Location = System::Drawing::Point(12, 350);
			this->pictureEncabezado->Name = L"pictureEncabezado";
			this->pictureEncabezado->Size = System::Drawing::Size(699, 50);
			this->pictureEncabezado->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureEncabezado->TabIndex = 15;
			this->pictureEncabezado->TabStop = false;
			this->pictureEncabezado->Visible = false;
			// 
			// tbxTiempo
			// 
			this->tbxTiempo->Enabled = false;
			this->tbxTiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxTiempo->Location = System::Drawing::Point(254, 10);
			this->tbxTiempo->Name = L"tbxTiempo";
			this->tbxTiempo->Size = System::Drawing::Size(84, 22);
			this->tbxTiempo->TabIndex = 16;
			this->tbxTiempo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tbxTiempo->Visible = false;
			// 
			// tbxVidas
			// 
			this->tbxVidas->Enabled = false;
			this->tbxVidas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxVidas->Location = System::Drawing::Point(372, 10);
			this->tbxVidas->Name = L"tbxVidas";
			this->tbxVidas->Size = System::Drawing::Size(30, 22);
			this->tbxVidas->TabIndex = 17;
			this->tbxVidas->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbxVidas->Visible = false;
			// 
			// tbxNivel
			// 
			this->tbxNivel->Enabled = false;
			this->tbxNivel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxNivel->Location = System::Drawing::Point(490, 10);
			this->tbxNivel->Name = L"tbxNivel";
			this->tbxNivel->Size = System::Drawing::Size(132, 22);
			this->tbxNivel->TabIndex = 18;
			this->tbxNivel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbxNivel->Visible = false;
			// 
			// tbxPuntaje
			// 
			this->tbxPuntaje->Enabled = false;
			this->tbxPuntaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxPuntaje->Location = System::Drawing::Point(35, 10);
			this->tbxPuntaje->Name = L"tbxPuntaje";
			this->tbxPuntaje->Size = System::Drawing::Size(184, 22);
			this->tbxPuntaje->TabIndex = 19;
			this->tbxPuntaje->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tbxPuntaje->Visible = false;
			// 
			// tbxBombas
			// 
			this->tbxBombas->Enabled = false;
			this->tbxBombas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxBombas->Location = System::Drawing::Point(434, 10);
			this->tbxBombas->Name = L"tbxBombas";
			this->tbxBombas->Size = System::Drawing::Size(23, 22);
			this->tbxBombas->TabIndex = 20;
			this->tbxBombas->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbxBombas->Visible = false;
			this->tbxBombas->TextChanged += gcnew System::EventHandler(this, &GameWindows::tbxBombas_TextChanged);
			// 
			// pictureVida
			// 
			this->pictureVida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureVida.Image")));
			this->pictureVida->Location = System::Drawing::Point(77, 39);
			this->pictureVida->Name = L"pictureVida";
			this->pictureVida->Size = System::Drawing::Size(36, 40);
			this->pictureVida->TabIndex = 21;
			this->pictureVida->TabStop = false;
			this->pictureVida->Visible = false;
			// 
			// pictureItemBomba
			// 
			this->pictureItemBomba->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureItemBomba.Image")));
			this->pictureItemBomba->Location = System::Drawing::Point(77, 96);
			this->pictureItemBomba->Name = L"pictureItemBomba";
			this->pictureItemBomba->Size = System::Drawing::Size(36, 40);
			this->pictureItemBomba->TabIndex = 22;
			this->pictureItemBomba->TabStop = false;
			this->pictureItemBomba->Visible = false;
			// 
			// pictureUPC
			// 
			this->pictureUPC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureUPC.Image")));
			this->pictureUPC->Location = System::Drawing::Point(77, 158);
			this->pictureUPC->Name = L"pictureUPC";
			this->pictureUPC->Size = System::Drawing::Size(36, 40);
			this->pictureUPC->TabIndex = 23;
			this->pictureUPC->TabStop = false;
			this->pictureUPC->Visible = false;
			// 
			// pictureFresa
			// 
			this->pictureFresa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureFresa.Image")));
			this->pictureFresa->Location = System::Drawing::Point(142, 39);
			this->pictureFresa->Name = L"pictureFresa";
			this->pictureFresa->Size = System::Drawing::Size(36, 40);
			this->pictureFresa->TabIndex = 24;
			this->pictureFresa->TabStop = false;
			this->pictureFresa->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(630, 671);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GameWindows::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(466, 455);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 57);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameWindows::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(466, 521);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 57);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Instrucciones";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GameWindows::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(466, 593);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 57);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GameWindows::button3_Click);
			// 
			// pictureManzana
			// 
			this->pictureManzana->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureManzana.Image")));
			this->pictureManzana->Location = System::Drawing::Point(142, 85);
			this->pictureManzana->Name = L"pictureManzana";
			this->pictureManzana->Size = System::Drawing::Size(36, 40);
			this->pictureManzana->TabIndex = 29;
			this->pictureManzana->TabStop = false;
			this->pictureManzana->Visible = false;
			// 
			// pictureNaranja
			// 
			this->pictureNaranja->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureNaranja.Image")));
			this->pictureNaranja->Location = System::Drawing::Point(142, 148);
			this->pictureNaranja->Name = L"pictureNaranja";
			this->pictureNaranja->Size = System::Drawing::Size(36, 40);
			this->pictureNaranja->TabIndex = 30;
			this->pictureNaranja->TabStop = false;
			this->pictureNaranja->Visible = false;
			// 
			// pictureEnemigo3
			// 
			this->pictureEnemigo3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEnemigo3.Image")));
			this->pictureEnemigo3->Location = System::Drawing::Point(266, 261);
			this->pictureEnemigo3->Name = L"pictureEnemigo3";
			this->pictureEnemigo3->Size = System::Drawing::Size(53, 21);
			this->pictureEnemigo3->TabIndex = 31;
			this->pictureEnemigo3->TabStop = false;
			this->pictureEnemigo3->Visible = false;
			// 
			// pictureEnemigo4
			// 
			this->pictureEnemigo4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEnemigo4.Image")));
			this->pictureEnemigo4->Location = System::Drawing::Point(243, 288);
			this->pictureEnemigo4->Name = L"pictureEnemigo4";
			this->pictureEnemigo4->Size = System::Drawing::Size(113, 39);
			this->pictureEnemigo4->TabIndex = 32;
			this->pictureEnemigo4->TabStop = false;
			this->pictureEnemigo4->Visible = false;
			// 
			// pictureEnemigo2
			// 
			this->pictureEnemigo2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEnemigo2.Image")));
			this->pictureEnemigo2->Location = System::Drawing::Point(372, 261);
			this->pictureEnemigo2->Name = L"pictureEnemigo2";
			this->pictureEnemigo2->Size = System::Drawing::Size(152, 36);
			this->pictureEnemigo2->TabIndex = 33;
			this->pictureEnemigo2->TabStop = false;
			this->pictureEnemigo2->Visible = false;
			// 
			// GameWindows
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 671);
			this->Controls->Add(this->pictureEnemigo2);
			this->Controls->Add(this->pictureEnemigo4);
			this->Controls->Add(this->pictureEnemigo3);
			this->Controls->Add(this->pictureNaranja);
			this->Controls->Add(this->pictureManzana);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureFresa);
			this->Controls->Add(this->pictureUPC);
			this->Controls->Add(this->pictureItemBomba);
			this->Controls->Add(this->pictureVida);
			this->Controls->Add(this->tbxBombas);
			this->Controls->Add(this->tbxPuntaje);
			this->Controls->Add(this->tbxNivel);
			this->Controls->Add(this->tbxVidas);
			this->Controls->Add(this->tbxTiempo);
			this->Controls->Add(this->pictureEncabezado);
			this->Controls->Add(this->pictureEnemigo);
			this->Controls->Add(this->pictureBomba);
			this->Controls->Add(this->picturePlayer);
			this->Controls->Add(this->pictureBloque3);
			this->Controls->Add(this->pictureBloque2);
			this->Controls->Add(this->pictureBloque1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->Name = L"GameWindows";
			this->Text = L"GameWindows";
			this->Load += gcnew System::EventHandler(this, &GameWindows::GameWindows_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameWindows::GameWindows_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBloque1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBloque2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBloque3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBomba))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEncabezado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureVida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureItemBomba))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUPC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFresa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureManzana))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNaranja))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEnemigo2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GameWindows_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 //Inicializamos Parte Gráfica
				 g = this->CreateGraphics();

				 img = gcnew Bitmap(picturePlayer->Image);
				 img->MakeTransparent(img->GetPixel(1, 1));

				 bomba = gcnew Bitmap(pictureBomba->Image);
				 bomba->MakeTransparent(bomba->GetPixel(1, 1));

				 enemigo = gcnew Bitmap(pictureEnemigo->Image);
				 enemigo->MakeTransparent(enemigo->GetPixel(1, 1));

				 enemigo2 = gcnew Bitmap(pictureEnemigo2->Image);
				 enemigo2->MakeTransparent(enemigo2->GetPixel(1, 1));

				 enemigo3 = gcnew Bitmap(pictureEnemigo3->Image);
				 enemigo3->MakeTransparent(enemigo3->GetPixel(1, 1));

				 enemigo4 = gcnew Bitmap(pictureEnemigo4->Image);
				 enemigo4->MakeTransparent(enemigo4->GetPixel(1, 1));

				 ItemEspecial1 = gcnew Bitmap(pictureVida->Image);
				 ItemEspecial2 = gcnew Bitmap(pictureItemBomba->Image);

				 ItemFresa = gcnew Bitmap(pictureFresa->Image);
				 ItemManzana = gcnew Bitmap(pictureManzana->Image);
				 ItemNaranja = gcnew Bitmap(pictureNaranja->Image);

				 bloque1 = gcnew Bitmap(pictureBloque1->Image);
				 bloque2 = gcnew Bitmap(pictureBloque2->Image);
				 bloque3 = gcnew Bitmap(pictureBloque3->Image);

				 //Inicializamos la música de fondo
				 MusicBackground->PlayLooping();

				 BufferedGraphicsContext^ context = BufferedGraphicsManager::Current;
				 buffer = context->Allocate(g, this->ClientRectangle);
				 delete context;

				 //Ancho y largo de toda las imagenes
				 int AnchoP = 42;
				 int LargoP = 42;

				 //Inicializamos Jugador y Mapa
				 objPlayer = new CPlayer(42, 84, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objTablero = new CTablero(0, 42, AnchoP, LargoP);

				 //Inicializamos Items Especiales Random
				 Random^ r = gcnew Random((int)DateTime::Now.Ticks);
				 int a = r->Next(2, 13);
				 int b = r->Next(2, 13);
				 objItemEspecial1 = new CItem(42 * a, 42 * a);
				 objItemEspecial2 = new CItem(42 * b, 42 * b);

				 //Inicializamos Items tipo 1
				 objFresa1 = new CItem(42 * 1, 42 * 14);
				 objFresa2 = new CItem(42 * 7, 42 * 11);
				 objFresa3 = new CItem(42 * 3, 42 * 3);
				 objFresa4 = new CItem(42 * 9, 42 * 8);
				 objFresa5 = new CItem(42 * 11, 42 * 3);

				 objFresa6 = new CItem(42 * 13, 42 * 14);
				 objFresa7 = new CItem(42 * 1, 42 * 10);
				 objFresa8 = new CItem(42 * 7, 42 * 4);
				 
				 //Inicializamos Items tipo 2
				 objManzana1 = new CItem(42 * 2, 42 * 2);
				 objManzana2 = new CItem(42 * 11, 42 * 2);
				 objManzana3 = new CItem(42 * 13, 42 * 6);
				 objManzana4 = new CItem(42 * 7, 42 * 6);
				 objManzana5 = new CItem(42 * 10, 42 * 14);
				 objManzana6 = new CItem(42 * 3, 42 * 11);

				 objManzana7 = new CItem(42 * 6, 42 * 9);
				 objManzana8 = new CItem(42 * 13, 42 * 7);
				 objManzana9 = new CItem(42 * 5, 42 * 14);
				 objManzana10 = new CItem(42 * 2, 42 * 2);

				 objManzana11 = new CItem(42 * 2, 42 * 2);
				 objManzana12 = new CItem(42 * 6, 42 * 9);
				 objManzana13 = new CItem(42 * 12, 42 * 5);
				 objManzana14 = new CItem(42 * 12, 42 * 12);
				 objManzana15 = new CItem(42 * 9, 42 * 13);

				 //Inicializamos Items tipo 3
				 objNaranja1 = new CItem(42 * 11, 42 * 10);
				 objNaranja2 = new CItem(42 * 2, 42 * 10);
				 objNaranja3 = new CItem(42 * 7, 42 * 4);

				 //Inicializamos Enemigos
				 objEnemigo = new CEnemigo(42 * 2, 42 * 3, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo1 = new CEnemigo(42 * 5, 42 * 11, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo2 = new CEnemigo(42 * 8, 42 * 6, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);

				 objEnemigo2_1 = new CEnemigo2(42 * 1, 42 * 3, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo2_2 = new CEnemigo2(42 * 5, 42 * 11, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo2_3 = new CEnemigo2(42 * 9, 42 * 8, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo2_4 = new CEnemigo2(42 * 13, 42 * 6, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo2_5 = new CEnemigo2(42 * 1, 42 * 8, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo2_6 = new CEnemigo2(42 * 13, 42 * 6, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);

				 objEnemigo3_1 = new CEnemigo3(42 * 2, 42 * 4, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo3_2 = new CEnemigo3(42 * 8, 42 * 13, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo3_3 = new CEnemigo3(42 * 5, 42 * 7, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);

				 objEnemigo4_1 = new CEnemigo4(42 * 2, 42 * 2, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo4_2 = new CEnemigo4(42 * 11, 42 * 14, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);
				 objEnemigo4_3 = new CEnemigo4(42 * 8, 42 * 7, AnchoP, LargoP, this->ClientRectangle.Width, this->ClientRectangle.Height);

	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			 //Aumentamos el tiempo en cada tick del timer
			 if (Segundos > 60) { Minutos++; Segundos = 0; }
			 Segundos++;

			 //Graficamos el Panel de Información
			 buffer->Graphics->DrawImage(pictureEncabezado->Image, -5, -5, 640, 50);
			 buffer->Graphics->DrawImage(pictureVida->Image, 340, 4, 30, 30);
			 buffer->Graphics->DrawImage(pictureItemBomba->Image, 404, 4, 30, 30);
			 buffer->Graphics->DrawImage(pictureUPC->Image, 460, 4, 30, 30);
			 objTablero->Dibujar(buffer->Graphics, bloque1, bloque2, bloque3);
			 objPlayer->Dibujar(buffer->Graphics, img, bomba);

			 //Mostramos es tiempo, vidas ,bombas y puntaje
			 tbxTiempo->Text = Minutos.ToString() + ":" + Segundos.ToString();
			 tbxPuntaje->Text = puntaje.ToString();
			 tbxVidas->Text = vidas.ToString();
			 tbxBombas->Text = bombas.ToString();

			 //Condiciones según los niveles
			 switch (nivel)
			 {
			 case 1: tbxNivel->Text = "Pabellon A";

				 //Dibujamos Items especiales
				 objItemEspecial1->Dibujar(buffer->Graphics, ItemEspecial1);
				 objItemEspecial2->Dibujar(buffer->Graphics, ItemEspecial2);
				 
				 //Dibujamos Items Fresas
				 objFresa1->Dibujar(buffer->Graphics, ItemFresa);
				 objFresa2->Dibujar(buffer->Graphics, ItemFresa);
				 objFresa3->Dibujar(buffer->Graphics, ItemFresa);
				 objFresa4->Dibujar(buffer->Graphics, ItemFresa);
				 objFresa5->Dibujar(buffer->Graphics, ItemFresa);
				 
				 //Dibujamos enemigos tipo 1
				 objEnemigo->DibujarE(buffer->Graphics, enemigo);
				 objEnemigo1->DibujarE(buffer->Graphics, enemigo);
				 objEnemigo2->DibujarE(buffer->Graphics, enemigo);

				 //Colision pon enemigos de nivel 1
				 if (objPlayer->Get_X() == objEnemigo->Get_X() && objPlayer->Get_Y() == objEnemigo->Get_Y()) { vidas--; objPlayer->Set_Posicion(42, 42 * 2); }
				 if (objPlayer->Get_X() == objEnemigo1->Get_X() && objPlayer->Get_Y() == objEnemigo1->Get_Y()) { vidas--; objPlayer->Set_Posicion(42, 42 * 2); }
				 if (objPlayer->Get_X() == objEnemigo2->Get_X() && objPlayer->Get_Y() == objEnemigo2->Get_Y()) { vidas--; objPlayer->Set_Posicion(42, 42 * 2); }

				 //Colisión Fresas nivel 1
				 if (objPlayer->Get_X() == objFresa1->Get_X() && objPlayer->Get_Y() == objFresa1->Get_Y()){ objFresa1 = new CItem(-42, 42 * 2); puntaje += 1005; }
				 if (objPlayer->Get_X() == objFresa2->Get_X() && objPlayer->Get_Y() == objFresa2->Get_Y()){ objFresa2 = new CItem(-42, 42 * 2); puntaje += 1005; }
				 if (objPlayer->Get_X() == objFresa3->Get_X() && objPlayer->Get_Y() == objFresa3->Get_Y()){ objFresa3 = new CItem(-42, 42 * 2); puntaje += 1005; }
				 if (objPlayer->Get_X() == objFresa4->Get_X() && objPlayer->Get_Y() == objFresa4->Get_Y()){ objFresa4 = new CItem(-42, 42 * 2); puntaje += 1005; }
				 if (objPlayer->Get_X() == objFresa5->Get_X() && objPlayer->Get_Y() == objFresa5->Get_Y()){ objFresa5 = new CItem(-42, 42 * 2); puntaje += 1005; }
			
				 break;
			 
			 case 2: tbxNivel->Text = "Pabellon B";
				 //Dibujamos Items especiales
				 objItemEspecial1->Dibujar(buffer->Graphics, ItemEspecial1);
				 objItemEspecial2->Dibujar(buffer->Graphics, ItemEspecial2);

				 //Dibujamos Items Manzanas
				 objManzana1->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana2->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana3->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana4->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana5->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana6->Dibujar(buffer->Graphics, ItemManzana);

				 //Dibujamos enemigos tipo 2
				 objEnemigo2_1->DibujarE(buffer->Graphics, enemigo2);
				 objEnemigo2_2->DibujarE(buffer->Graphics, enemigo2);
				 objEnemigo2_3->DibujarE(buffer->Graphics, enemigo2);
				 objEnemigo2_4->DibujarE(buffer->Graphics, enemigo2);

				 //Colision pon enemigos de nivel 2
				 if (objPlayer->Get_X() == objEnemigo2_1->Get_X() && objPlayer->Get_Y() == objEnemigo2_1->Get_Y()) { vidas--; objPlayer->Set_Posicion(7 * 42, 6 * 42); }
				 if (objPlayer->Get_X() == objEnemigo2_2->Get_X() && objPlayer->Get_Y() == objEnemigo2_2->Get_Y()) { vidas--; objPlayer->Set_Posicion(7 * 42, 6 * 42); }
				 if (objPlayer->Get_X() == objEnemigo2_3->Get_X() && objPlayer->Get_Y() == objEnemigo2_3->Get_Y()) { vidas--; objPlayer->Set_Posicion(7 * 42, 6 * 42); }
				 if (objPlayer->Get_X() == objEnemigo2_4->Get_X() && objPlayer->Get_Y() == objEnemigo2_4->Get_Y()) { vidas--; objPlayer->Set_Posicion(7 * 42, 6 * 42); }

				 //Colisión Manzanas nivel 2
				 if (objPlayer->Get_X() == objManzana1->Get_X() && objPlayer->Get_Y() == objManzana1->Get_Y()){ objManzana1 = new CItem(-42, 42 * 2); puntaje += 2530; }
				 if (objPlayer->Get_X() == objManzana2->Get_X() && objPlayer->Get_Y() == objManzana2->Get_Y()){ objManzana2 = new CItem(-42, 42 * 2); puntaje += 2530; }
				 if (objPlayer->Get_X() == objManzana3->Get_X() && objPlayer->Get_Y() == objManzana3->Get_Y()){ objManzana3 = new CItem(-42, 42 * 2); puntaje += 2530; }
				 if (objPlayer->Get_X() == objManzana4->Get_X() && objPlayer->Get_Y() == objManzana4->Get_Y()){ objManzana4 = new CItem(-42, 42 * 2); puntaje += 2530; }
				 if (objPlayer->Get_X() == objManzana5->Get_X() && objPlayer->Get_Y() == objManzana5->Get_Y()){ objManzana5 = new CItem(-42, 42 * 2); puntaje += 2530; }
				 if (objPlayer->Get_X() == objManzana6->Get_X() && objPlayer->Get_Y() == objManzana6->Get_Y()){ objManzana6 = new CItem(-42, 42 * 2); puntaje += 2530; }
			
				 break;
			 case 3: tbxNivel->Text = "Pabellon C"; 
				 //Dibujamos Items especiales
				 objItemEspecial1->Dibujar(buffer->Graphics, ItemEspecial1);
				 objItemEspecial2->Dibujar(buffer->Graphics, ItemEspecial2);

				 //Dibujamos Items Fresas y Manzanas
				 objFresa6->Dibujar(buffer->Graphics, ItemFresa);
				 objFresa7->Dibujar(buffer->Graphics, ItemFresa);
				 objFresa8->Dibujar(buffer->Graphics, ItemFresa);

				 objManzana7->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana8->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana9->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana10->Dibujar(buffer->Graphics, ItemManzana);

				 //Dibujamos enemigos tipo 3
				 objEnemigo3_1->DibujarE(buffer->Graphics, enemigo3);
				 objEnemigo3_2->DibujarE(buffer->Graphics, enemigo3);
				 objEnemigo3_3->DibujarE(buffer->Graphics, enemigo3);

				 //Colision pon enemigos de nivel 4
				 if (objPlayer->Get_X() == objEnemigo3_1->Get_X() && objPlayer->Get_Y() == objEnemigo3_1->Get_Y()) { vidas--; objPlayer->Set_Posicion(6 * 42, 8 * 42); }
				 if (objPlayer->Get_X() == objEnemigo3_2->Get_X() && objPlayer->Get_Y() == objEnemigo3_2->Get_Y()) { vidas--; objPlayer->Set_Posicion(6 * 42, 8 * 42); }
				 if (objPlayer->Get_X() == objEnemigo3_3->Get_X() && objPlayer->Get_Y() == objEnemigo3_3->Get_Y()) { vidas--; objPlayer->Set_Posicion(6 * 42, 8 * 42); }

				 //Colisión Manzanas nivel 3
				 if (objPlayer->Get_X() == objManzana7->Get_X() && objPlayer->Get_Y() == objManzana7->Get_Y()){ objManzana7 = new CItem(-42, 42 * 2); puntaje += 1550; }
				 if (objPlayer->Get_X() == objManzana8->Get_X() && objPlayer->Get_Y() == objManzana8->Get_Y()){ objManzana8 = new CItem(-42, 42 * 2); puntaje += 1550; }
				 if (objPlayer->Get_X() == objManzana9->Get_X() && objPlayer->Get_Y() == objManzana9->Get_Y()){ objManzana9 = new CItem(-42, 42 * 2); puntaje += 1550; }
				 if (objPlayer->Get_X() == objManzana10->Get_X() && objPlayer->Get_Y() == objManzana10->Get_Y()){ objManzana10 = new CItem(-42, 42 * 2); puntaje += 1550; }
				 
				 //Colisión Fresas nivel 3
				 if (objPlayer->Get_X() == objFresa6->Get_X() && objPlayer->Get_Y() == objFresa6->Get_Y()){ objFresa6 = new CItem(-42, 42 * 2); puntaje += 1522; }
				 if (objPlayer->Get_X() == objFresa7->Get_X() && objPlayer->Get_Y() == objFresa7->Get_Y()){ objFresa7 = new CItem(-42, 42 * 2); puntaje += 1522; }
				 if (objPlayer->Get_X() == objFresa8->Get_X() && objPlayer->Get_Y() == objFresa8->Get_Y()){ objFresa8 = new CItem(-42, 42 * 2); puntaje += 1522; }


				 break;
			 case 4: tbxNivel->Text = "Pabellon D"; 
				 //Dibujamos Items especiales
				 objItemEspecial1->Dibujar(buffer->Graphics, ItemEspecial1);
				 objItemEspecial2->Dibujar(buffer->Graphics, ItemEspecial2);

				 //Dibujamos Items Manzanas y Naranjas
				 objManzana11->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana12->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana13->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana14->Dibujar(buffer->Graphics, ItemManzana);
				 objManzana15->Dibujar(buffer->Graphics, ItemManzana);

				 objNaranja1->Dibujar(buffer->Graphics, ItemNaranja);
				 objNaranja2->Dibujar(buffer->Graphics, ItemNaranja);
				 objNaranja3->Dibujar(buffer->Graphics, ItemNaranja);

				 //Dibujamos enemigos tipo 4
				 objEnemigo4_1->DibujarE(buffer->Graphics, enemigo4);
				 objEnemigo4_2->DibujarE(buffer->Graphics, enemigo4);
				 objEnemigo4_3->DibujarE(buffer->Graphics, enemigo4);
				 objEnemigo2_5->DibujarE(buffer->Graphics, enemigo2);
				 objEnemigo2_6->DibujarE(buffer->Graphics, enemigo2);

				 //Colision pon enemigos de nivel 4
				 if (objPlayer->Get_X() == objEnemigo4_1->Get_X() && objPlayer->Get_Y() == objEnemigo4_1->Get_Y()) { vidas--; objPlayer->Set_Posicion(8 * 42, 8 * 42); }
				 if (objPlayer->Get_X() == objEnemigo4_2->Get_X() && objPlayer->Get_Y() == objEnemigo4_2->Get_Y()) { vidas--; objPlayer->Set_Posicion(8 * 42, 8 * 42); }
				 if (objPlayer->Get_X() == objEnemigo4_3->Get_X() && objPlayer->Get_Y() == objEnemigo4_3->Get_Y()) { vidas--; objPlayer->Set_Posicion(8 * 42, 8 * 42); }
				 if (objPlayer->Get_X() == objEnemigo2_5->Get_X() && objPlayer->Get_Y() == objEnemigo2_5->Get_Y()) { vidas--; objPlayer->Set_Posicion(8 * 42, 8 * 42); }
				 if (objPlayer->Get_X() == objEnemigo2_6->Get_X() && objPlayer->Get_Y() == objEnemigo2_6->Get_Y()) { vidas--; objPlayer->Set_Posicion(8 * 42, 8 * 42); }

				 //Colisión Manzanas nivel 4
				 if (objPlayer->Get_X() == objManzana11->Get_X() && objPlayer->Get_Y() == objManzana11->Get_Y()){ objManzana11 = new CItem(-42, 42 * 2); puntaje += 1230; }
				 if (objPlayer->Get_X() == objManzana12->Get_X() && objPlayer->Get_Y() == objManzana12->Get_Y()){ objManzana12 = new CItem(-42, 42 * 2); puntaje += 1230; }
				 if (objPlayer->Get_X() == objManzana13->Get_X() && objPlayer->Get_Y() == objManzana13->Get_Y()){ objManzana13 = new CItem(-42, 42 * 2); puntaje += 1230; }
				 if (objPlayer->Get_X() == objManzana14->Get_X() && objPlayer->Get_Y() == objManzana14->Get_Y()){ objManzana14 = new CItem(-42, 42 * 2); puntaje += 1230; }
				 if (objPlayer->Get_X() == objManzana15->Get_X() && objPlayer->Get_Y() == objManzana15->Get_Y()){ objManzana15 = new CItem(-42, 42 * 2); puntaje += 1230; }

				 //Colisión Naranjas nivel 4
				 if (objPlayer->Get_X() == objNaranja1->Get_X() && objPlayer->Get_Y() == objNaranja1->Get_Y()){ objNaranja1 = new CItem(-42, 42 * 2); puntaje += 1230; }
				 if (objPlayer->Get_X() == objNaranja2->Get_X() && objPlayer->Get_Y() == objNaranja2->Get_Y()){ objNaranja2 = new CItem(-42, 42 * 2); puntaje += 1230; }
				 if (objPlayer->Get_X() == objNaranja3->Get_X() && objPlayer->Get_Y() == objNaranja3->Get_Y()){ objNaranja3 = new CItem(-42, 42 * 2); puntaje += 1230; }
				
				 break;
			 }

			 //Item Vidas
			 if (objPlayer->Get_X() == objItemEspecial1->Get_X() && objPlayer->Get_Y() == objItemEspecial1->Get_Y()) {
				 objItemEspecial1 = new CItem(-42, 42); puntaje += 100;
				 vidas++; 
			 }
			 //Bombas
			 if (objPlayer->Get_X() == objItemEspecial2->Get_X() && objPlayer->Get_Y() == objItemEspecial2->Get_Y()) { 
				 objItemEspecial2 = new CItem(-42, 42 * 2); puntaje += 100;
				 bombas += 3; 
			 }

			 buffer->Render(g);
}

private: System::Void GameWindows_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		
			objPlayer->Set_Direccion(e->KeyData);

			if (e->KeyData == Keys::Enter)
			{
				 nivel++;
				 switch (nivel)
				 {
				 case 2: objTablero->Set_Nivel(2, 0, 42); objPlayer->Set_Posicion(7 * 42, 6 * 42); break;
				 case 3: objTablero->Set_Nivel(3, 0, 42); objPlayer->Set_Posicion(6 * 42, 8 * 42); break;
				 case 4: objTablero->Set_Nivel(4, 0, 42); objPlayer->Set_Posicion(8 * 42, 8 * 42); break;
				 default: break;
				 }
			 }
			 //Pausar el juego
			 if (e->KeyData == Keys::F2)
			 {
				 timer1->Enabled = false;
			 }
			 //Despausar el juego
			 if (e->KeyData == Keys::F3)
			 {
				 timer1->Enabled = true;
			 }
			 //Salir del juego
			 if (e->KeyData == Keys::Escape)
			 {
				//Visualizar puntaje antes de irse
				
				 MessageBox::Show(" Su Puntaje es de : " + puntaje.ToString() , "RANKING");

				 Close();
			 }
			 //Disminuye bombas
			 if (e->KeyData == Keys::Space)
			 {
				 bombas--;
			 }

			 //Mostramos el Puntaje
			 if (vidas == 0){
				 timer1->Enabled = false;
				 MessageBox::Show(" Su Puntaje es de : " + puntaje.ToString(), "RANKING");
				 Close();
			 }
}
private: System::Void tbxBombas_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 //Pantalla de inicio
			 g->Clear(BackColor);
			 delete button1;
			 delete button2;
			 delete button3;
			 delete pictureBox1;
			 timer1->Enabled = true;
			 tbxNivel->Visible = true;
				 tbxBombas->Visible = true;
				 tbxPuntaje->Visible = true;
				 tbxTiempo->Visible = true;
				 tbxVidas->Visible = true;

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Acaba con todos los enemigos . Muévete con las felchas. Presiona Espacio para colocar bombas. Usa ESC para pasar de nivel , Con f2 pausas el juego y con f3 lo reanudas.", "INSTRUCCIONES");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
};
}
