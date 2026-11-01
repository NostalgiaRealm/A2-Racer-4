
/* ==== FUN_00417878 @ 00417878 ==== 
 * signature: undefined __register FUN_00417878(int param_1, int * param_2, undefined4 * param_3)
 * body: 00417878-004178d3
 */

void FUN_00417878(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  
  pcStack_18 = (code *)0x41788e;
  FUN_00417654(param_1);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = (undefined4 *)param_2[4];
  if (param_3 != puVar1) {
    param_3[1] = param_3[1] + 1;
    param_2[4] = (int)param_3;
    pcStack_18 = (code *)&stack0xfffffffc;
    FUN_00403178(param_2,extraout_EDX,extraout_ECX);
    FUN_00417750(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_004178db;
  pcStack_1c = (code *)0x4178d3;
  FUN_00417660(param_1);
  return;
}


