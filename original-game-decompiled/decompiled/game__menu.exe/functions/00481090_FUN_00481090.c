
/* ==== FUN_00481090 @ 00481090 ==== 
 * signature: undefined FUN_00481090(void)
 * body: 00481090-00481102
 */

void FUN_00481090(int param_1,int *param_2)

{
  int iStack_1c;
  undefined1 uStack_18;
  int iStack_14;
  undefined1 uStack_10;
  int iStack_c;
  undefined1 uStack_8;
  
  iStack_1c = param_1 / 60000;
  uStack_18 = 0;
  iStack_14 = (param_1 / 1000) % 0x3c;
  uStack_10 = 0;
  iStack_c = (param_1 / 10) % 100;
  uStack_8 = 0;
  FUN_00409254(*(byte **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0xc),&iStack_1c,2,param_2);
  return;
}


