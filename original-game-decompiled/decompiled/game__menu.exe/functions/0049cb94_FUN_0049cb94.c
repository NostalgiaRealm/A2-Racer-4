
/* ==== FUN_0049cb94 @ 0049cb94 ==== 
 * signature: undefined FUN_0049cb94(void)
 * body: 0049cb94-0049cbe8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cb94(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  _DAT_004ad52c = 5;
  DAT_004ad530 = 0;
  TGroupBox_set_Visible(*(int **)(param_1 + 0x340),0,param_3);
  TGroupBox_set_Visible
            (*(int **)(param_1 + 0x33c),CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  FUN_0049ca50(param_1);
  TTimer_set_Enabled(*(int *)(param_1 + 0x344),'\0');
  TTimer_set_Enabled(*(int *)(param_1 + 0x344),'\x01');
  return;
}


