
/* ==== TDockTree.vmt_010 @ 0043772c ==== 
 * signature: undefined __register TDockTree.vmt_010(int param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * body: 0043772c-00437805
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDockTree_vmt_010(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if ((byte)(*(char *)(*(int *)(param_1 + 0x14) + 0x4b) - 1U) < 2) {
    FUN_0043764c(*param_4 + 1,param_4[1] + 1,param_3,(int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 3,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 5,param_4[3] + -2
                 ,(int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 6,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 8,param_4[3] + -2
                 ,(int)&stack0xfffffffc);
  }
  else {
    FUN_0043764c((param_4[2] - *(int *)(param_1 + 0x18)) + 1,param_4[1] + 1,param_3,
                 (int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 2,param_4[1] + 3,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 5,(int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 2,param_4[1] + 6,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 8,(int)&stack0xfffffffc);
  }
  return;
}


