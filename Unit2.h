//---------------------------------------------------------------------------
#ifndef Unit2H
#define Unit2H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.Series.hpp>
#include <VCLTee.TeeFunci.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <cmath>
#include <windows.h>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPaintBox *PaintBox1;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label2;
    TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TCheckBox *CheckBox4;
	TCheckBox *CheckBox5;
	TColorBox *ColorBox1;
	TColorBox *ColorBox2;
	TColorBox *ColorBox3;
	TColorBox *ColorBox4;
	TColorBox *ColorBox5;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
    TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *PaintBox2;
	TMenuItem *PaintBox3;
	TChart *Chart1;
	TFastLineSeries *Series1;
	TCustomTeeFunction *TeeFunction1;
	TFastLineSeries *Series2;
	TCustomTeeFunction *TeeFunction2;
	TFastLineSeries *Series3;
	TCustomTeeFunction *TeeFunction3;
	TFastLineSeries *Series4;
	TCustomTeeFunction *TeeFunction4;
	TImage *Image1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TEdit *Edit10;
	TTimer *Timer1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox4Click(TObject *Sender);
	void __fastcall CheckBox3Click(TObject *Sender);
	void __fastcall ColorBox1Change(TObject *Sender);
	void __fastcall ColorBox2Change(TObject *Sender);
	void __fastcall ColorBox3Change(TObject *Sender);
	void __fastcall ColorBox4Change(TObject *Sender);
	void __fastcall PaintBox3Click(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Edit2Change(TObject *Sender);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall Edit4Change(TObject *Sender);
	void __fastcall Edit5Change(TObject *Sender);
	void __fastcall Edit6Change(TObject *Sender);
	void __fastcall Edit7Change(TObject *Sender);
	void __fastcall Edit8Change(TObject *Sender);
	void __fastcall ColorBox5Change(TObject *Sender);
	void __fastcall CheckBox5Click(TObject *Sender);
	void __fastcall Edit9Change(TObject *Sender);
	void __fastcall Edit10Change(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall PaintBox2Click(TObject *Sender);
private:
	int scale = 1;
	int check0, imageNum=0;
	double check1;

	void showAxesForPaintBox(int scale);
    void buildGraphforPaintBox(int scale, double a, double b,
	 bool graph0, bool graph1, bool graph2, bool graph3, bool graph4,
	 TColor color0, TColor color1, TColor color2, TColor color3, TColor color4);
	void buildRectangle();
	void buildGraphforChart(bool graph0, bool graph1, bool graph2, bool graph3,
	  TColor color0, TColor color1, TColor color2, TColor color3, int startx0,
	  int finalx0,int startx1, int finalx1,int startx2, int finalx2,
	  int startx3, int finalx3);
	void showPaintBox1();
	void showChart1();
	void showRectangle();
	void showAnimation();

public:

	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
