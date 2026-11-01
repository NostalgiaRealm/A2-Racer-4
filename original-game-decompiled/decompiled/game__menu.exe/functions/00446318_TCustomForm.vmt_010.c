
/* ==== TCustomForm.vmt_010 @ 00446318 ==== 
 * signature: undefined __register TCustomForm.vmt_010(int * param_1, int * param_2, undefined4 param_3)
 * body: 00446318-00446421
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_010(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX;
  
  cVar5 = (char)param_3;
  TControl_vmt_010(param_1,(int)param_2,cVar5);
  if (cVar5 == '\0') {
    uVar2 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00439364);
    if ((char)uVar2 == '\0') {
      if (((((*(byte *)(param_1 + 8) & 1) == 0) && (param_1[0x8c] == 0)) &&
          (param_1 == (int *)param_2[1])) &&
         (uVar2 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0043c1f8), (char)uVar2 != '\0')
         ) {
        TForm_set_Menu(param_1,param_2);
      }
    }
    else {
      if (param_1[0xb2] == 0) {
        iVar3 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
        param_1[0xb2] = iVar3;
      }
      FUN_00410104((int *)param_1[0xb2],(int)param_2);
    }
  }
  else if (cVar5 == '\x01') {
    piVar1 = (int *)param_1[0xb2];
    uVar2 = extraout_ECX;
    if ((piVar1 == (int *)0x0) ||
       (uVar4 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00439364),
       uVar2 = extraout_ECX_01, (char)uVar4 == '\0')) {
      if (param_2 == (int *)param_1[0x8c]) {
        TForm_set_Menu(param_1,(int *)0x0);
        uVar2 = extraout_ECX_02;
      }
      if (param_2 == (int *)param_1[0x90]) {
        TForm_set_WindowMenu(param_1,0,uVar2);
        uVar2 = extraout_ECX_03;
      }
      if (param_2 == (int *)param_1[0x92]) {
        TForm_set_ObjectMenuItem((int)param_1,(int *)0x0,uVar2);
      }
    }
    else {
      FUN_00410448(piVar1,(int)param_2);
    }
  }
  if (param_1[0x8e] != 0) {
    (**(code **)(*(int *)param_1[0x8e] + 0x10))((int *)param_1[0x8e],param_2,param_3);
  }
  return;
}


