
/* ==== FUN_0047548c @ 0047548c ==== 
 * signature: undefined __register FUN_0047548c(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0047548c-0047558d
 */

void FUN_0047548c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  RECT *pRVar8;
  int nIndex;
  RECT local_14;
  
  DAT_004ab45c = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
  (**(code **)(*DAT_004ab45c + 0x40))(DAT_004ab45c,8);
  (**(code **)(*DAT_004ab45c + 0x34))(DAT_004ab45c,8);
  for (piVar3 = *(int **)(*(int *)(param_4 + -4) + 0x24); piVar3 != (int *)0x0;
      piVar3 = (int *)piVar3[9]) {
    nIndex = -0x14;
    hWnd = (HWND)FUN_004349e0(piVar3);
    uVar1 = GetWindowLongA(hWnd,nIndex);
    if ((uVar1 & 0x20) != 0x20) break;
  }
  if (piVar3 == (int *)0x0) {
    uVar2 = 0x8000000f;
  }
  else {
    uVar2 = TBrush_get_Color(piVar3[0x4c]);
  }
  piVar3 = (int *)FUN_0041df1c(DAT_004ab45c);
  TBrush_set_Style((int *)piVar3[5],'\0');
  TBrush_set_Color((int *)piVar3[5],uVar2);
  uVar2 = (**(code **)(*DAT_004ab45c + 0x20))();
  pRVar8 = &local_14;
  uVar4 = (**(code **)(*DAT_004ab45c + 0x2c))();
  FUN_0040f7e8(0,0,uVar4,&pRVar8->left,uVar2);
  FUN_0041907c(piVar3,&local_14);
  uVar1 = 0;
  do {
    uVar7 = 0;
    do {
      uVar5 = uVar1 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      uVar6 = uVar7 & 0x80000001;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
      }
      if (uVar5 == uVar6) {
        FUN_00419490(piVar3,uVar7,uVar1,0x80000014);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 8);
    uVar1 = uVar1 + 1;
  } while (uVar1 != 8);
  return;
}


