
/* ==== FUN_0041f464 @ 0041f464 ==== 
 * signature: undefined __register FUN_0041f464(int param_1)
 * body: 0041f464-0041f4d9
 */

void FUN_0041f464(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [2];
  short local_12;
  ushort local_10;
  undefined1 local_c [4];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int **)(iVar1 + 0xc) != (int *)0x0)) {
    FUN_00412674(*(int **)(iVar1 + 0xc),0);
    uStack_18 = 0x41f491;
    FUN_004126b8(*(int **)(iVar1 + 0xc),auStack_14,6);
    if (local_12 != 0) {
      if (local_12 == 1) {
        uStack_18 = 6;
        FUN_0041a310(*(int **)(iVar1 + 0xc),local_c,(uint)local_10,(int *)(iVar1 + 0x10),
                     (int *)(param_1 + 0x24));
      }
      else {
        uStack_18 = 0x41f4cd;
        FUN_004197bc();
      }
    }
    *(undefined4 *)(iVar1 + 8) = uStack_18;
  }
  return;
}


