
/* ==== FUN_0041c128 @ 0041c128 ==== 
 * signature: undefined __register FUN_0041c128(int * param_1, HANDLE param_2)
 * body: 0041c128-0041c1c2;0041c1da-0041c1e9
 */

void FUN_0041c128(int *param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 local_5c [21];
  HPALETTE local_8;
  
  iVar1 = param_1[8];
  if (param_2 != *(HANDLE *)(iVar1 + 8)) {
    FUN_0041b8a0((int)param_1);
    FUN_00402a2c(local_5c,0x54,0);
    if (param_2 != (HANDLE)0x0) {
      GetObjectA(param_2,0x54,local_5c);
    }
    if (*(int *)(iVar1 + 4) == 1) {
      local_8 = *(HPALETTE *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else if (*(HPALETTE *)(iVar1 + 0x10) == DAT_00447648) {
      local_8 = DAT_00447648;
    }
    else {
      local_8 = FUN_0041af1c(*(HPALETTE *)(iVar1 + 0x10));
    }
    *in_FS_OFFSET = &stack0xffffff8c;
    uVar2 = 0;
    FUN_0041ba80((int)param_1,param_2,local_8,(int *)0x0,0,local_5c);
    *in_FS_OFFSET = uVar2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


