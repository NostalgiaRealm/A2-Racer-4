
/* ==== TForm.set_Visible @ 0043c1b0 ==== 
 * signature: undefined __register TForm.set_Visible(int * param_1, uint param_2, undefined4 param_3)
 * body: 0043c1b0-0043c1f1
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_Visible(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
    if ((cVar1 != '\0') && (cVar1 != *(char *)((int)param_1 + 0x47))) {
      FUN_0043d064(param_1);
      param_3 = extraout_ECX;
    }
    TLabel_set_Visible(param_1,param_2,param_3);
  }
  else {
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xfd;
      return;
    }
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 2;
  }
  return;
}


