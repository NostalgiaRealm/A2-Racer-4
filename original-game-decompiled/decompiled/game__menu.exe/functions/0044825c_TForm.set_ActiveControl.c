
/* ==== TForm.set_ActiveControl @ 0044825c ==== 
 * signature: undefined __register TForm.set_ActiveControl(int * param_1, int * param_2, undefined4 param_3)
 * body: 0044825c-00448303
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
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_2 == (int *)param_1[0x82]) goto LAB_004482ee;
  uVar4 = 0;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_2 == (int *)0x0) goto LAB_004482c7;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_1 == param_2) {
LAB_004482a6:
    pcStack_18 = pcVar1;
    FUN_00405808((undefined4 *)PTR_PTR_004ab978,(int *)&local_8);
    piVar3 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar3);
    param_3 = extraout_ECX_01;
    uVar4 = extraout_EDX_01;
    pcVar1 = pcStack_18;
  }
  else {
    piVar3 = FUN_00444864(param_2);
    pcVar1 = pcStack_18;
    if (param_1 != piVar3) goto LAB_004482a6;
    param_3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      cVar2 = FUN_00403178(param_2,extraout_EDX,extraout_ECX);
      param_3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      pcVar1 = pcStack_18;
      if (cVar2 == '\0') goto LAB_004482a6;
    }
  }
LAB_004482c7:
  pcStack_18 = pcVar1;
  param_1[0x82] = (int)param_2;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(char *)((int)param_1 + 0x216) != '\0') {
      FUN_00448614(param_1);
      param_3 = extraout_ECX_02;
      uVar4 = extraout_EDX_02;
    }
    FUN_00403178(param_1,uVar4,param_3);
  }
LAB_004482ee:
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0044830b;
  pcStack_1c = (code *)0x448303;
  FUN_00403c5c((int *)&local_8);
  return;
}


