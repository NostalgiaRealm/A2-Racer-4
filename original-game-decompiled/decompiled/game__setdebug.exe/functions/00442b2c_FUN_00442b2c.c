
/* ==== FUN_00442b2c @ 00442b2c ==== 
 * signature: undefined __register FUN_00442b2c(int param_1, int * param_2, int param_3)
 * body: 00442b2c-00442c37
 */

void FUN_00442b2c(int param_1,int *param_2,int param_3)

{
  POINT pt;
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 extraout_EDX;
  UINT local_30;
  byte local_2c;
  tagPOINT local_28;
  POINT local_20;
  int local_18 [2];
  
  FUN_004069d4(*(undefined4 *)(param_3 + 8),local_18);
  FUN_0042436c(param_2,local_18,&local_20.x);
  piVar1 = FUN_00423258(&local_20,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  iVar2 = thunk_FUN_00440cb1((int)piVar1);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x89) == '\0')) {
    FUN_00442ca8(param_1);
  }
  else {
    if (iVar2 == *(int *)(param_1 + 0x50)) {
      FUN_004069d4(*(undefined4 *)(param_3 + 8),local_18);
      FUN_0042436c(param_2,local_18,&local_20.x);
      pt.y = local_20.y;
      pt.x = local_20.x;
      BVar3 = PtInRect((RECT *)(param_1 + 0x54),pt);
      if (BVar3 != 0) {
        return;
      }
    }
    local_2c = *(byte *)(param_1 + 0x48);
    if (local_2c == 0) {
      local_30 = *(UINT *)(param_1 + 0x68);
    }
    else {
      local_30 = *(UINT *)(param_1 + 0x70);
    }
    FUN_00425780(iVar2,0xb041,(uint)local_2c,&local_30);
    if ((local_2c == 0) || (local_30 != 0)) {
      FUN_00442ca8(param_1);
      *(byte *)(param_1 + 0x48) = local_2c;
      *(int *)(param_1 + 0x50) = iVar2;
      FUN_00442ad4(param_1,local_30,0);
    }
    else {
      *(byte *)(param_1 + 0x48) = local_2c;
      *(int *)(param_1 + 0x50) = iVar2;
      GetCursorPos(&local_28);
      FUN_00442e88(param_1,&local_28.x);
    }
  }
  return;
}


