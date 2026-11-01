
/* ==== FUN_0040fb60 @ 0040fb60 ==== 
 * signature: int __fastcall FUN_0040fb60(int param_1)
 * body: 0040fb60-0040fb85
 */

int __fastcall FUN_0040fb60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0x54;
}


