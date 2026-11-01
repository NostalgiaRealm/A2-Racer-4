
/* ==== TWinControl.vmt_06c @ 0042824c ==== 
 * signature: undefined __register TWinControl.vmt_06c(int * param_1, uint * param_2, undefined4 param_3)
 * body: 0042824c-00428429
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  HWND pHVar5;
  HWND pHVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint Msg;
  uint wParam;
  uint uVar7;
  int local_124 [2];
  int local_11c [2];
  BYTE local_114 [256];
  uint local_14;
  byte local_10;
  undefined2 local_e;
  uint local_c;
  
  uVar7 = *param_2;
  if ((int)uVar7 < 0x85) {
    if (uVar7 == 0x84) {
      TControl_vmt_06c(param_1,param_2,param_3);
      if (param_2[3] != 0xffffffff) {
        return;
      }
      cVar1 = '\0';
      FUN_004069d4(param_2[2],local_124);
      FUN_00424398(param_1,local_124,local_11c);
      iVar4 = FUN_00428124((int)param_1,local_11c,0,cVar1);
      if (iVar4 == 0) {
        return;
      }
      param_2[3] = 1;
      return;
    }
    if (uVar7 == 7) {
      piVar3 = FUN_00439eb4(param_1);
      param_3 = extraout_ECX;
      if ((piVar3 != (int *)0x0) &&
         (cVar1 = (**(code **)(*piVar3 + 0xd4))(piVar3,param_1), param_3 = extraout_ECX_00,
         cVar1 == '\0')) {
        return;
      }
      goto LAB_0042841a;
    }
    if (uVar7 == 8) {
      if ((*(byte *)(param_1 + 0x11) & 0x20) != 0) {
        return;
      }
      goto LAB_0042841a;
    }
    if (uVar7 == 0x1f) {
      pHVar5 = (HWND)FUN_0042a8b4(param_1);
      pHVar6 = GetCapture();
      param_3 = extraout_ECX_03;
      if (((pHVar5 == pHVar6) && (DAT_004466e4 != 0)) && (param_1 == *(int **)(DAT_004466e4 + 0x24))
         ) {
        FUN_00425780(DAT_004466e4,0x1f,0,0);
        param_3 = extraout_ECX_04;
      }
      goto LAB_0042841a;
    }
  }
  else {
    if (uVar7 - 0x100 < 9) {
      bVar2 = FUN_00424ee8((int)param_1);
      param_3 = extraout_ECX_02;
      if (bVar2) {
        return;
      }
      goto LAB_0042841a;
    }
    if (uVar7 - 0x200 < 0xb) {
      bVar2 = FUN_004281b8(param_1,param_2);
      param_3 = extraout_ECX_01;
      if (bVar2) {
        if (param_2[3] != 0) {
          return;
        }
        uVar7 = param_2[2];
        wParam = param_2[1];
        Msg = *param_2;
        pHVar5 = (HWND)FUN_0042a8b4(param_1);
        DefWindowProcA(pHVar5,Msg,wParam,uVar7);
        return;
      }
      goto LAB_0042841a;
    }
  }
  if (((*(char *)(DAT_0044773c + 0x20) != '\0') && (*(int *)(DAT_0044773c + 0x1c) != 0)) &&
     (*param_2 == *(uint *)(DAT_0044773c + 0x1c))) {
    GetKeyboardState(local_114);
    local_14 = *param_2;
    local_10 = FUN_00439df8((int)local_114);
    local_e = (undefined2)param_2[1];
    local_c = param_2[2];
    FUN_00402ef0(param_1,&local_14,extraout_ECX_05);
    return;
  }
LAB_0042841a:
  TControl_vmt_06c(param_1,param_2,param_3);
  return;
}


