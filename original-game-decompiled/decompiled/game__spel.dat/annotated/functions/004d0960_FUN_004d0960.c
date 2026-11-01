
/* ==== FUN_004d0960 @ 004d0960 ==== 
 * signature: undefined4 __fastcall FUN_004d0960(int param_1)
 * body: 004d0960-004d097a
 */

undefined4 __fastcall FUN_004d0960(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    iVar1 = FUN_0055a5a3(*(int **)(param_1 + 0x50));
    if (iVar1 < 0) {
      return 0xffffffff;
    }
  }
  return 0;
}


