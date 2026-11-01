
/* ==== FUN_0040fab0 @ 0040fab0 ==== 
 * signature: int __fastcall FUN_0040fab0(int param_1)
 * body: 0040fab0-0040fad5
 */

int __fastcall FUN_0040fab0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0x14;
}


