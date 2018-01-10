//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Wyniki->Clear();
tz=new TPanel* [10];
for(int i=0;i<10;i++)
{
        tz[i]=new TPanel(this);
        tz[i]->Parent=Panel1;

        tz[i]->Width=65;
        tz[i]->Height=15;

        tz[i]->Top=Shape1->Top+(int)(Shape1->Height/(float)(11)*i+10);
        tz[i]->Left=Shape1->Left-tz[0]->Width;


}
        for(int i=0;i<10;i++)
        {
                TEdit* pom=dynamic_cast<TEdit*>(FindComponent("Edit"+IntToStr(i+1)));
                pom->Text="Zawodnik "+IntToStr(i+1);
                tz[i]->Caption=pom->Text;
        }
        srand(time(NULL));


}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{

        for(int i=2;i<=TrackBar1->Position;i++)
        {
                TEdit* pom=dynamic_cast<TEdit*>(FindComponent("Edit"+IntToStr(i)));
                pom->Visible=true;
        }
        for(int i=TrackBar1->Position+1;i<=TrackBar1->Max;i++)
        {
                TEdit* pom=dynamic_cast<TEdit*>(FindComponent("Edit"+IntToStr(i)));
                pom->Visible=false;
        }
        for(int i=1;i<TrackBar1->Position;i++)
                tz[i]->Visible=true;
        for(int i=TrackBar1->Position;i<10;i++)
                tz[i]->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
        TEdit* pom=dynamic_cast<TEdit*>(Sender);
        tz[pom->Tag]->Caption=pom->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        czas+=0.01;
        int x;
        if(Wyniki->Lines->Count==TrackBar1->Position)
        {
                Timer1->Enabled=false;
                Button1->Caption="Nowy wyscig";
        }
        else
        {
                for(int i=0;i<TrackBar1->Position;i++)
                {
                     x=rand()%5+1;
                     if(!tz[i]->Tag)
                     {
                        tz[i]->Left+=x;
                     if(tz[i]->Left>Shape2->Left+Shape2->Width)
                     {
                        tz[i]->Tag=1;
                        Wyniki->Lines->Add(tz[i]->Caption+" "+FloatToStrF(czas,ffFixed,4,3));
                     }
                     }
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(Button1->Caption=="Start")
        {
                Timer1->Enabled=true;
                Button1->Caption="Stop";
                TrackBar1->Enabled=false;
                GroupBox2->Enabled=false;
        }
        else if(Button1->Caption=="Stop")
        {
                Timer1->Enabled=false;
                Button1->Caption="Start";
        }
        else
        {
            for(int i=0;i<10;i++)
            {
                tz[i]->Top=Shape1->Top+(int)(Shape1->Height/(float)(11)*i+10);
                tz[i]->Left=Shape1->Left-tz[0]->Width;
                tz[i]->Tag=0;
            }
            Wyniki->Clear();
            Button1->Caption="Start";
            TrackBar1->Enabled=true;
            GroupBox2->Enabled=true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WynClick(TObject *Sender)
{
        Form2->Memo1->Clear();
        Form2->Memo1->Lines->AddStrings(Wyniki->Lines);
        Form2->ShowModal();
}
//---------------------------------------------------------------------------
