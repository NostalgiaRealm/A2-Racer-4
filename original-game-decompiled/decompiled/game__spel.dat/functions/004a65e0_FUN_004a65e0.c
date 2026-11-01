
/* ==== FUN_004a65e0 @ 004a65e0 ==== 
 * signature: undefined __fastcall FUN_004a65e0(int * param_1)
 * body: 004a65e0-004a66f7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a65e0(int *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  *param_1 = BVar1;
  if (BVar1 == 0) {
    param_1[1] = 0x447a0000;
  }
  else {
    param_1[1] = (int)(float)(longlong)local_8;
  }
  if (DAT_00712874 != 0) {
    if (DAT_00712874 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_00712868);
    }
    if (DAT_00712874 != 0) {
      FUN_0054b339(DAT_00712878);
      DAT_00712874 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00712868 = operator_new(0x10);
  DAT_0071286c = 4;
  _DAT_00712870 = 0;
  DAT_00712878 = operator_new(4);
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  DAT_00712874 = 1;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    *(undefined1 *)((int)DAT_00712878 + iVar3) = 1;
    iVar3 = iVar2;
  } while (iVar2 < 4);
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 4;
    *(undefined4 *)(iVar3 + (int)DAT_00712868) = 0x3dcccccd;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  FUN_004a6700(param_1);
  return;
}


