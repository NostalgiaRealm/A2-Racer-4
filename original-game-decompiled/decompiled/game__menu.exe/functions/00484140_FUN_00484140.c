
/* ==== FUN_00484140 @ 00484140 ==== 
 * signature: undefined __register FUN_00484140(int * param_1, uint param_2, char param_3)
 * body: 00484140-00484186
 */

void FUN_00484140(int *param_1,uint param_2,char param_3)

{
  bool bVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    iVar4 = -0x10;
    pHVar2 = (HWND)FUN_004349e0(param_1);
    uVar3 = GetWindowLongA(pHVar2,iVar4);
    if (param_3 == '\0') {
      uVar3 = uVar3 & ~param_2;
    }
    else {
      uVar3 = uVar3 | param_2;
    }
    iVar4 = -0x10;
    pHVar2 = (HWND)FUN_004349e0(param_1);
    SetWindowLongA(pHVar2,iVar4,uVar3);
  }
  return;
}


