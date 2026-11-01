
/* ==== FUN_00441cf0 @ 00441cf0 ==== 
 * signature: undefined __fastcall FUN_00441cf0(int param_1)
 * body: 00441cf0-00441d22
 */

void __fastcall FUN_00441cf0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    piVar1 = *(int **)(DAT_0073b1b0 + 4 + *(int *)(param_1 + 4) * 0x48);
    uVar2 = FUN_004c81b0(0xfe,8);
    FUN_004c4da0(piVar1,uVar2);
  }
  return;
}


