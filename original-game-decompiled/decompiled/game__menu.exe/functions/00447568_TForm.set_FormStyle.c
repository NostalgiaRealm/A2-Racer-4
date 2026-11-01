
/* ==== TForm.set_FormStyle @ 00447568 ==== 
 * signature: undefined __register TForm.set_FormStyle(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00447568-004475e5
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_FormStyle(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  char cVar3;
  
  cVar3 = (char)param_2;
  if (cVar3 != *(char *)((int)param_1 + 0x217)) {
    if ((cVar3 == '\x01') && ((char)param_1[0x86] == '\0')) {
      TForm_set_Position((int)param_1,'\x01');
      param_3 = extraout_ECX;
      param_2 = extraout_EDX;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00431dbc(param_1);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
    cVar1 = *(char *)((int)param_1 + 0x217);
    *(char *)((int)param_1 + 0x217) = cVar3;
    if (((cVar3 == '\x02') || (cVar1 == '\x02')) && ((char)param_1[0x4e] == '\0')) {
      iVar2 = FUN_00447938((int)param_1);
      TGroupBox_set_Color((int)param_1,iVar2);
      param_3 = extraout_ECX_01;
      param_2 = extraout_EDX_01;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00431f54(param_1);
      param_3 = extraout_ECX_02;
      param_2 = extraout_EDX_02;
    }
    if (cVar3 == '\x01') {
      TForm_set_Visible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    }
  }
  return;
}


