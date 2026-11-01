
/* ==== TCustomEdit.DefaultHandler @ 00426bc4 ==== 
 * signature: undefined TCustomEdit.DefaultHandler(void)
 * body: 00426bc4-00426bf8
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomEdit_DefaultHandler(int param_1,UINT *param_2)

{
  BOOL BVar1;
  
  if ((*param_2 == 7) && (*(int *)PTR_DAT_004aba10 == 1)) {
    BVar1 = IsWindow((HWND)param_2[1]);
    if (BVar1 == 0) {
      param_2[1] = 0;
    }
  }
  TWinControl_DefaultHandler(param_1,param_2);
  return;
}


