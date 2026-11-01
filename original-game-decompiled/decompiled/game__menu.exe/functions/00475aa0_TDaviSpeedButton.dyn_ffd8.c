
/* ==== TDaviSpeedButton.dyn_ffd8 @ 00475aa0 ==== 
 * signature: undefined TDaviSpeedButton.dyn_ffd8(void)
 * body: 00475aa0-00475b88
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_ffd8
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar4;
  
  TControl_dyn_ffd8((int)param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((int)param_1 + 0x132) != '\0') {
    *(undefined1 *)((int)param_1 + 0x132) = 0;
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((((param_5 < 0) ||
         (iVar2 = TForm_get_ClientWidth(param_1), uVar3 = extraout_ECX_00, uVar4 = extraout_EDX_00,
         iVar2 <= param_5)) || (param_4 < 0)) ||
       (iVar2 = TForm_get_ClientHeight(param_1), uVar3 = extraout_ECX_01, uVar4 = extraout_EDX_01,
       iVar2 < param_4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (param_1[0x4e] == 0) {
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      *(undefined1 *)((int)param_1 + 0x145) = 0;
      if ((bVar1) && (1 < (byte)(*(char *)((int)param_1 + 0x161) - 2U))) {
        (**(code **)(*param_1 + 0x74))();
        uVar3 = extraout_ECX_02;
        uVar4 = extraout_EDX_02;
      }
    }
    else if (bVar1) {
      TDaviSpeedButton_set_Down
                (param_1,CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)((int)param_1 + 0x131)) ^
                         1);
      uVar3 = extraout_ECX_03;
      uVar4 = extraout_EDX_03;
      if (*(char *)((int)param_1 + 0x131) != '\0') {
        (**(code **)(*param_1 + 0x78))();
        uVar3 = extraout_ECX_04;
        uVar4 = extraout_EDX_04;
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x131) != '\0') {
        *(undefined1 *)((int)param_1 + 0x161) = 3;
      }
      (**(code **)(*param_1 + 0x78))();
      uVar3 = extraout_ECX_05;
      uVar4 = extraout_EDX_05;
    }
    if (bVar1) {
      FUN_00403178(param_1,uVar4,uVar3);
    }
    FUN_004758e8(param_1);
    return;
  }
  return;
}


