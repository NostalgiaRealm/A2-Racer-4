
/* ==== TForm.set_ActiveControl @ 0043d8ac ==== 
 * signature: undefined __register TForm.set_ActiveControl(int * param_1, int * param_2, undefined4 param_3)
 * body: 0043d8ac-0043d953
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_ActiveControl(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_2 == (int *)param_1[0x82]) goto LAB_0043d93e;
  uVar4 = 0;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_2 == (int *)0x0) goto LAB_0043d917;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_1 == param_2) {
LAB_0043d8f6:
    pcStack_18 = pcVar1;
    FUN_00405298((undefined4 *)PTR_PTR_00446d14,(int *)&local_8);
    piVar3 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar3);
    param_3 = extraout_ECX_01;
    uVar4 = extraout_EDX_01;
    pcVar1 = pcStack_18;
  }
  else {
    piVar3 = FUN_00439eb4(param_2);
    pcVar1 = pcStack_18;
    if (param_1 != piVar3) goto LAB_0043d8f6;
    param_3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      cVar2 = FUN_00402ef0(param_2,extraout_EDX,extraout_ECX);
      param_3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      pcVar1 = pcStack_18;
      if (cVar2 == '\0') goto LAB_0043d8f6;
    }
  }
LAB_0043d917:
  pcStack_18 = pcVar1;
  param_1[0x82] = (int)param_2;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(char *)((int)param_1 + 0x216) != '\0') {
      FUN_0043dc64(param_1);
      param_3 = extraout_ECX_02;
      uVar4 = extraout_EDX_02;
    }
    FUN_00402ef0(param_1,uVar4,param_3);
  }
LAB_0043d93e:
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0043d95b;
  pcStack_1c = (code *)0x43d953;
  FUN_004039b8((int *)&local_8);
  return;
}


