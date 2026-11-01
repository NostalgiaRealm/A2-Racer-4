
/* ==== FUN_0054c48c @ 0054c48c ==== 
 * signature: undefined4 __fastcall FUN_0054c48c(int param_1)
 * body: 0054c48c-0054c4a4
 */

undefined4 __fastcall FUN_0054c48c(int param_1)

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


