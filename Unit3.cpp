//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::btnFindClick(TObject *Sender)
{
    Form3->Close() ;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::findEditChange(TObject *Sender)
{
   //Form1->dbQuery->Locate("Product_ID",findEdit->Text);
}
//---------------------------------------------------------------------------
