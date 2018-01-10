//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------

TPanel ** tz;
double czas=0;

class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TButton *Button1;
        TShape *Shape1;
        TShape *Shape2;
        TGroupBox *GroupBox1;
        TTrackBar *TrackBar1;
        TGroupBox *GroupBox2;
        TEdit *Edit1;
        TEdit *Edit2;
        TGroupBox *GroupBox3;
        TMemo *Wyniki;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TTimer *Timer1;
        TButton *Wyn;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall WynClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
