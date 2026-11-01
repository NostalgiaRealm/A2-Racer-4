
/* ==== FUN_004e5b60 @ 004e5b60 ==== 
 * signature: undefined4 * __thiscall FUN_004e5b60(undefined4 * param_1, int param_2)
 * body: 004e5b60-004e5c10
 */

undefined4 * __thiscall FUN_004e5b60(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 *local_c;
  code *pcStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  pcStack_8 = FUN_00571bb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = (undefined1)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00577df4;
  uStack_3 = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != *(int *)(param_2 + 0xc)) {
    do {
      local_1c = &PTR_FUN_00578178;
      local_18 = *(undefined4 *)(iVar1 + 4);
      local_14 = *(undefined4 *)(iVar1 + 8);
      local_10 = *(undefined1 *)(iVar1 + 0xc);
      local_4 = 1;
      FUN_004e5cf0(param_1 + 1,(undefined4 *)param_1[3],1,&local_1c);
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)(param_2 + 0xc));
  }
  ExceptionList = local_c;
  return local_c;
}


