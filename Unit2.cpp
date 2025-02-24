//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h>
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	if (scale>1) {
		scale-=1;

		showAxesForPaintBox(scale);

		buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
			StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
			ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
			ColorBox4->Selected,ColorBox5->Selected);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	if (scale<5) {
		scale+=1;

		showAxesForPaintBox(scale);

		buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
			StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
			ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
			ColorBox4->Selected,ColorBox5->Selected);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CheckBox1Click(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CheckBox2Click(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
	CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
	ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
	StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
	StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
	StrToInt(Edit7->Text),StrToInt(Edit8->Text));

}
//---------------------------------------------------------------------------
void __fastcall TForm2::CheckBox3Click(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CheckBox4Click(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ColorBox1Change(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ColorBox2Change(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ColorBox3Change(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ColorBox4Change(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::PaintBox2Click(TObject *Sender)
{
    showPaintBox1();
	showAxesForPaintBox(scale);
	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::PaintBox3Click(TObject *Sender)
{
	showChart1();
	buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,CheckBox3->Checked,
	CheckBox4->Checked,ColorBox1->Selected,ColorBox2->Selected,
	ColorBox3->Selected,ColorBox4->Selected,StrToInt(Edit1->Text),
	StrToInt(Edit2->Text),StrToInt(Edit3->Text),StrToInt(Edit4->Text),
	StrToInt(Edit5->Text),StrToInt(Edit6->Text),StrToInt(Edit7->Text),
	StrToInt(Edit8->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1Change(TObject *Sender)
{
		if (TryStrToInt(Edit1->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit2Change(TObject *Sender)
{
		if (TryStrToInt(Edit2->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit3Change(TObject *Sender)
{
	if (TryStrToInt(Edit3->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit4Change(TObject *Sender)
{
	if (TryStrToInt(Edit4->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit5Change(TObject *Sender)
{
	if (TryStrToInt(Edit5->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit6Change(TObject *Sender)
{
	if (TryStrToInt(Edit6->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit7Change(TObject *Sender)
{
	if (TryStrToInt(Edit7->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit8Change(TObject *Sender)
{
	if (TryStrToInt(Edit8->Text,check0)) {
			buildGraphforChart(CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,ColorBox1->Selected,
			ColorBox2->Selected,ColorBox3->Selected,ColorBox4->Selected,
			StrToInt(Edit1->Text),StrToInt(Edit2->Text),StrToInt(Edit3->Text),
			StrToInt(Edit4->Text),StrToInt(Edit5->Text),StrToInt(Edit6->Text),
			StrToInt(Edit7->Text),StrToInt(Edit8->Text));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ColorBox5Change(TObject *Sender)
{
	showAxesForPaintBox(scale);
	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::CheckBox5Click(TObject *Sender)
{
	showAxesForPaintBox(scale);

	buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
		StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
		CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
		ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
		ColorBox4->Selected,ColorBox5->Selected);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit9Change(TObject *Sender)
{
	showAxesForPaintBox(scale);

	if (TryStrToFloat(Edit9->Text,check1) and StrToFloat(Edit9->Text)>0) {
		buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
			StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
			ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
			ColorBox4->Selected,ColorBox5->Selected);;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit10Change(TObject *Sender)
{
    showAxesForPaintBox(scale);

	if (TryStrToFloat(Edit10->Text,check1) and StrToFloat(Edit10->Text)>0) {
		buildGraphforPaintBox(scale,StrToFloat(Edit9->Text),
			StrToFloat(Edit10->Text),CheckBox1->Checked,CheckBox2->Checked,
			CheckBox3->Checked,CheckBox4->Checked,CheckBox5->Checked,
			ColorBox1->Selected,ColorBox2->Selected,ColorBox3->Selected,
			ColorBox4->Selected,ColorBox5->Selected);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::N2Click(TObject *Sender)
{
	showRectangle();
	buildRectangle();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N3Click(TObject *Sender)
{
	showAnimation();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
	imageNum++;
	switch (imageNum%4) {
	case (0):
		Image1->Picture->LoadFromFile("1.bmp");
		break;

	case (1):
		Image1->Picture->LoadFromFile("2.bmp");
		break;

	case (2):
		Image1->Picture->LoadFromFile("3.bmp");
		break;
	case (3):
		Image1->Picture->LoadFromFile("4.bmp");
		break;

	default:
		break;
	}
}
//---------------------------------------------------------------------------

void TForm2::showAnimation(){

		//�����: PaintBox1 Chart1
		CheckBox1->Visible=false;
		CheckBox2->Visible=false;
		CheckBox3->Visible=false;
		CheckBox4->Visible=false;
		ColorBox1->Visible=false;
		ColorBox2->Visible=false;
		ColorBox3->Visible=false;
		ColorBox4->Visible=false;

		//PaintBox1
		PaintBox1->Visible = false;
		Label1->Visible = false;
		Button1->Visible = false;
		Button2->Visible = false;
		CheckBox5->Visible=false;
		ColorBox5->Visible=false;
		Label7->Visible=false;
		Label8->Visible=false;
		Edit9->Visible = false;
		Edit10->Visible = false;

		////Chart1
		Chart1->Visible=false;
		Label2->Visible = false;
		Label3->Visible = false;
		Label4->Visible = false;
		Label5->Visible = false;
		Label6->Visible = false;
		Edit1->Visible = false;
		Edit2->Visible = false;
		Edit3->Visible = false;
		Edit4->Visible = false;
		Edit5->Visible = false;
		Edit6->Visible = false;
		Edit7->Visible = false;
		Edit8->Visible = false;

		//Image1
		Image1->Visible=true;
		Timer1->Enabled=true;
	}
//---------------------------------------------------------------------------

void TForm2::showRectangle(){

		//�����: PaintBox1 Chart1
		CheckBox1->Visible=false;
		CheckBox2->Visible=false;
		CheckBox3->Visible=false;
		CheckBox4->Visible=false;
		ColorBox1->Visible=false;
		ColorBox2->Visible=false;
		ColorBox3->Visible=false;
		ColorBox4->Visible=false;

		//PaintBox1
		PaintBox1->Visible = false;
		Label1->Visible = false;
		Button1->Visible = false;
		Button2->Visible = false;
		CheckBox5->Visible=false;
		ColorBox5->Visible=false;
		Label7->Visible=false;
		Label8->Visible=false;
		Edit9->Visible = false;
		Edit10->Visible = false;

		////Chart1
		Chart1->Visible=false;
		Label2->Visible = false;
		Label3->Visible = false;
		Label4->Visible = false;
		Label5->Visible = false;
		Label6->Visible = false;
		Edit1->Visible = false;
		Edit2->Visible = false;
		Edit3->Visible = false;
		Edit4->Visible = false;
		Edit5->Visible = false;
		Edit6->Visible = false;
		Edit7->Visible = false;
		Edit8->Visible = false;

		//Image1
		Image1->Visible=false;
		Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void TForm2::showChart1(){

		//�����: PaintBox1 Chart1
		CheckBox1->Visible=true;
		CheckBox2->Visible=true;
		CheckBox3->Visible=true;
		CheckBox4->Visible=true;
		ColorBox1->Visible=true;
		ColorBox2->Visible=true;
		ColorBox3->Visible=true;
		ColorBox4->Visible=true;

		//PaintBox1
		PaintBox1->Visible = false;
		Label1->Visible = false;
		Button1->Visible = false;
		Button2->Visible = false;
		CheckBox5->Visible=false;
		ColorBox5->Visible=false;
		Label7->Visible=false;
		Label8->Visible=false;
		Edit9->Visible = false;
		Edit10->Visible = false;

		////Chart1
		Chart1->Visible=true;
		Label2->Visible = true;
		Label3->Visible = true;
		Label4->Visible = true;
		Label5->Visible = true;
		Label6->Visible = true;
		Edit1->Visible = true;
		Edit2->Visible = true;
		Edit3->Visible = true;
		Edit4->Visible = true;
		Edit5->Visible = true;
		Edit6->Visible = true;
		Edit7->Visible = true;
		Edit8->Visible = true;

		//Image1
		Image1->Visible=false;
		Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void TForm2::showPaintBox1(){

		//�����: PaintBox1, Chart1
		CheckBox1->Visible=true;
		CheckBox2->Visible=true;
		CheckBox3->Visible=true;
		CheckBox4->Visible=true;
		ColorBox1->Visible=true;
		ColorBox2->Visible=true;
		ColorBox3->Visible=true;
		ColorBox4->Visible=true;

		//PaintBox1
		PaintBox1->Visible = true;
		Label1->Visible = true;
		Button1->Visible = true;
		Button2->Visible = true;
		CheckBox5->Visible=true;
		ColorBox5->Visible=true;
		Label7->Visible=true;
		Label8->Visible=true;
		Edit9->Visible = true;
		Edit10->Visible = true;


		//Chart1
		Chart1->Visible=false;
		Label2->Visible = false;
		Label3->Visible = false;
		Label4->Visible = false;
		Label5->Visible = false;
		Label6->Visible = false;
		Edit1->Visible = false;
		Edit2->Visible = false;
		Edit3->Visible = false;
		Edit4->Visible = false;
		Edit5->Visible = false;
		Edit6->Visible = false;
		Edit7->Visible = false;
		Edit8->Visible = false;

		//Image1
		Image1->Visible=false;
		Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void TForm2::buildGraphforChart(bool graph0, bool graph1, bool graph2,
		bool graph3,TColor color0, TColor color1, TColor color2, TColor color3,
		int startx0, int finalx0,int startx1, int finalx1,int startx2,
		int finalx2, int startx3, int finalx3) {

		if (graph0==true) {
			Series1->Visible=true;
			Series1->Color=color0;
			for (int x=startx0; x < finalx0; x++) {
			Series1->AddXY(x,x*x*x);
			}
		}
		else {
			Series1->Visible=false;
		}

		if (graph1==true) {
			Series2->Visible=true;
			Series2->Color=color1;
			for (int x=startx1; x < finalx1; x++) {
			Series2->AddXY(x,x*x*x);
			}
		}
		else {
			Series2->Visible=false;
		}

		if (graph2==true){
			Series3->Visible=true;
			Series3->Color=color2;
			for (int x=startx2; x < finalx2; x++) {
			Series3->AddXY(x,x*x*x);
			}
		}
		else {
			Series3->Visible=false;
		}

		if (graph3==true) {
			Series4->Visible=true;
			Series4->Color=color3;
			for (int x=startx3; x < finalx3; x++) {
			Series4->AddXY(x,x*x*x);
			}
		}
		else {
			Series4->Visible=false;
		}
}
//---------------------------------------------------------------------------

void TForm2::buildRectangle(){
	for (int a = 0; a < 10; a++) {
		Canvas->MoveTo(200*cos(M_PI/180+M_PI/4)+400,
					   200*sin(M_PI/180+M_PI/4)+300);
		for (int i = 0; i < 360; i++) {
		Canvas->FillRect(ClientRect);
		Canvas->LineTo(200*cos(i*M_PI/180+M_PI/4)+400,
					   200*sin(i*M_PI/180+M_PI/4)+300);
		Canvas->LineTo(200*cos(i*M_PI/180+M_PI/2+M_PI/4)+400,
					   200*sin(i*M_PI/180+M_PI/2+M_PI/4)+300);
		Canvas->LineTo(200*cos(i*M_PI/180+M_PI+M_PI/4)+400,
					   200*sin(i*M_PI/180+M_PI+M_PI/4)+300);
		Canvas->LineTo(200*cos(i*M_PI/180+3*M_PI/2+M_PI/4)+400,
					   200*sin(i*M_PI/180+3*M_PI/2+M_PI/4)+300);
		}
	}
}
//---------------------------------------------------------------------------

void TForm2::buildGraphforPaintBox(int scale, double a, double b,
	bool graph0, bool graph1, bool graph2, bool graph3, bool graph4,
	TColor color0, TColor color1, TColor color2, TColor color3, TColor color4){
	TCanvas *canvas = PaintBox1->Canvas;


	if (graph0==true) {
		canvas->Pen->Color=color0;
		canvas->MoveTo(0,PaintBox1->Height);
		for (int x = -PaintBox1->Width/2; x < PaintBox1->Width/2; x++) {
			canvas->LineTo(x/scale+PaintBox1->Width/2,
			 			   -x*x*x/(scale*50*50)+PaintBox1->Height/2);
		}
	}


	if (graph1==true) {
		canvas->Pen->Color=color1;
		canvas->MoveTo(0,PaintBox1->Height);
		for (int x = -PaintBox1->Width/2; x < PaintBox1->Width/2; x++) {
			canvas->LineTo(x/scale+PaintBox1->Width/2,
					       -x*x*x/(scale*50*50)-50*2/scale+PaintBox1->Height/2);
		}
	}
	if (graph2==true) {
		canvas->Pen->Color=color2;
		canvas->MoveTo(0,PaintBox1->Height);
		for (int x = -PaintBox1->Width/2; x < PaintBox1->Width/2; x++) {
			canvas->LineTo(x/scale+PaintBox1->Width/2,
						   -x*x*x*2/(scale*50*50)+PaintBox1->Height/2);
		}
	}


	if(graph3==true){
		canvas->Pen->Color=color3;
		canvas->MoveTo(0,PaintBox1->Height);
		for (int x = -PaintBox1->Width/2; x < PaintBox1->Width/2; x++) {
			canvas->LineTo(x/scale+PaintBox1->Width/2,
						-x*x*x*2/(scale*50*50)-50*2/scale+PaintBox1->Height/2);
		}
	}

	if (graph4 == true) {
		canvas->Pen->Color=color4;
		canvas->MoveTo(a*std::cos(0)*std::cos(0)+
							b*std::cos(0)+PaintBox1->Width/2,
					   a*std::cos(0)*std::sin(0)+b*std::sin(0)+
					   	    PaintBox1->Height/2);
		for (double t = 0; t < 2*M_PI; t+=0.01) {
			canvas->LineTo((50/scale)*(a*std::cos(t)*std::cos(t)+b*std::cos(t))+
							PaintBox1->Width/2,(50/scale)*(a*std::cos(t)*
								std::sin(t)+b*std::sin(t))+PaintBox1->Height/2);
		}
	}
}
//---------------------------------------------------------------------------

void TForm2::showAxesForPaintBox(int scale){

	//��������� ���������
	TCanvas *canvas = PaintBox1->Canvas;
	int centerX = PaintBox1->Width/2;
	int centerY = PaintBox1->Height/2;
	canvas->Pen->Color=clBlack;
	canvas->Brush->Color=clWhite;
	canvas->Pen->Width=1;
	canvas->FillRect(PaintBox1->ClientRect);
	canvas->Font->Name = "Arial";
	canvas->Font->Size = 8;

	//�������� ����
	canvas->Pen->Style=psDot;
	for (int x = 0; x < 11; x++) {
		 canvas->MoveTo(x*50,0);
		 canvas->LineTo(x*50,PaintBox1->Height);
		 canvas->TextOut(50*x-20,centerY+20,IntToStr(scale*(x-5)));
	}

	for (int y = 0; y < 11; y++) {
		if (y!=5) {
			canvas->MoveTo(0,y*50);
			canvas->LineTo(PaintBox1->Width,y*50);
			canvas->TextOut(centerX-20,50*y+20,IntToStr(scale*(-(y-5))));
		}
	}

	canvas->Pen->Width=2;
	canvas->Pen->Style=psSolid;
	canvas->MoveTo(centerX,0);
	canvas->LineTo(centerX, PaintBox1->Height);
	canvas->MoveTo(0,centerY);
	canvas->LineTo(PaintBox1->Width,centerY);

	//������� ����
	canvas->Brush->Color=clBlack;
	TPoint triangle1[3]={TPoint(centerX-5,5),TPoint(centerX,0),
						TPoint(centerX+5,5)};
	canvas->Polygon(triangle1,2);
	TPoint triangle2[3] =  {TPoint(PaintBox1->Width-5,centerY-5),
							TPoint(PaintBox1->Width,centerY),
							TPoint(PaintBox1->Width-5, centerY+5)};
	canvas->Polygon(triangle2,2);

	//������� PaintBox1
	canvas->MoveTo(1,1);
	canvas->LineTo(PaintBox1->Width-1,1);
	canvas->LineTo(PaintBox1->Width-1,PaintBox1->Height-1);
	canvas->LineTo(1,PaintBox1->Height-1);
	canvas->LineTo(1,1);
}
//---------------------------------------------------------------------------





