
/* ==== FUN_0049a110 @ 0049a110 ==== 
 * signature: undefined __register FUN_0049a110(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0049a110-0049a164
 */

void FUN_0049a110(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  DAT_004ad514 = 5;
  DAT_004ad518 = 0;
  TGroupBox_set_Visible(*(int **)(param_1 + 0x328),0,param_3);
  TGroupBox_set_Visible
            (*(int **)(param_1 + 0x32c),CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  FUN_0049a328(param_1);
  TTimer_set_Enabled(*(int *)(param_1 + 0x30c),'\0');
  TTimer_set_Enabled(*(int *)(param_1 + 0x30c),'\x01');
  return;
}


